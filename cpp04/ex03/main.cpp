/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 15:32:38 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/21 15:32:39 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
  std::cout << "--- Main perso ---\n" << std::endl;
  Character* hunter = new Character("Hunter");
  Character* undead = new Character("Undead");

  IMateriaSource* src2 = new MateriaSource();
  AMateria* tmp2;
  src2->learnMateria(new Ice());
  src2->learnMateria(new Cure());

  std::cout << "\tEquips ice materia on slot 0 & 1, and cure on slot 2" \
    " then use them :" << std::endl;
  tmp2 = src2->createMateria("ice");
  hunter->equip(tmp2);
  tmp2 = src2->createMateria("ice");
  hunter->equip(tmp2);
  tmp2 = src2->createMateria("cure");
  hunter->equip(tmp2);
  hunter->use(0, *undead);
  hunter->use(1, *undead);
  hunter->use(2, *undead);
  std::cout << "\tUnequip ice (slot 1) and try to use the empty slot :" << std::endl;
  hunter->unequip(1);
  hunter->use(1, *undead);
  std::cout << "\tReequip a materia (cure) and try to use the slot 1 again :" << std::endl;
  tmp2 = src2->createMateria("cure");
  hunter->equip(tmp2);
  hunter->use(1, *hunter);
  std::cout << "\tTry to equip materia on fifth slot :" << std::endl;
  tmp2 = src2->createMateria("ice");
  undead->equip(tmp2);
  tmp2 = src2->createMateria("ice");
  undead->equip(tmp2);
  tmp2 = src2->createMateria("cure");
  undead->equip(tmp2);
  tmp2 = src2->createMateria("cure");
  undead->equip(tmp2);
  tmp2 = src2->createMateria("cure");
  undead->equip(tmp2);
  std::cout << "\tTesting the other character with valid indexes :" << std::endl;
  undead->use(0, *hunter);
  undead->use(2, *hunter);
  std::cout << "\tTesting the other character with an invalid index :" << std::endl;
  undead->use(5, *hunter);


  delete undead;
  delete hunter;
  delete src2;


  std::cout << "\n\n--- Main fourni ---\n" << std::endl;
  IMateriaSource* src = new MateriaSource();
  src->learnMateria(new Ice());
  src->learnMateria(new Cure());

  ICharacter* me = new Character("me");

  AMateria* tmp;
  tmp = src->createMateria("ice");
  me->equip(tmp);
  tmp = src->createMateria("cure");
  me->equip(tmp);

  ICharacter* bob = new Character("bob");
  me->use(0, *bob);
  me->use(1, *bob);

  delete bob;
  delete me;
  delete src;

  return 0;
}
