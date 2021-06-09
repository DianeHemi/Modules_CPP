/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:08:26 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/20 12:08:27 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "Enemy.hpp"
#include "Character.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "LightSaber.hpp"
#include "StormTrooper.hpp"
#include "SuperMutant.hpp"

int main()
{
  std::cout << "--- main original ---" << std::endl;
  Character* me = new Character("me");
  std::cout << *me;
  Enemy* b = new RadScorpion();
  AWeapon* pr = new PlasmaRifle();
  AWeapon* pf = new PowerFist();
  me->equip(pr);
  std::cout << *me;
  me->equip(pf);
  me->attack(b);
  std::cout << *me;
  me->equip(pr);
  std::cout << *me;
  me->attack(b);
  std::cout << *me;
  me->attack(b);
  std::cout << *me;


  std::cout << "\n\n--- main personnel ---" << std::endl;
  Character* vader = new Character("Darth Vader");
  Character* luke = new Character("Luke");

  std::cout << *vader << *luke << std::endl;

  Enemy* scorpion = new RadScorpion();
  Enemy* mutant = new SuperMutant();
  Enemy* trooper = new StormTrooper();

  AWeapon* ls = new LightSaber();

  std::cout << std::endl;

  vader->equip(pr);
  luke->equip(ls);
  std::cout << *vader << *luke << std::endl;
  vader->equip(pf);

  vader->attack(scorpion);
  luke->attack(trooper);
  std::cout << *vader << *luke << std::endl;

  vader->equip(pr);
  std::cout << *vader << std::endl;
  vader->attack(scorpion);
  vader->attack(mutant);
  luke->attack(scorpion);
  luke->equip(pf);
  std::cout << *vader << *luke << std::endl;

  luke->attack(mutant);
  vader->attack(trooper);
  luke->attack(mutant);
  std::cout << *vader << *luke;

  std::cout << "\nDestructors :" << std::endl;

  delete vader;
  delete luke;
  delete mutant;
  delete trooper;
  delete pr;
  delete pf;
  delete ls;
  delete me;

  return 0;
}
