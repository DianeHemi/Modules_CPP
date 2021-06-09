/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 11:59:46 by dchampda          #+#    #+#             */
/*   Updated: 2021/05/25 11:59:47 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Mutantstack.hpp"

void givenMain()
{
  MutantStack<int>    mstack;

  mstack.push(5);
  mstack.push(17);

  std::cout << mstack.top() << std::endl;

  mstack.pop();

  std::cout << mstack.size() << std::endl;
  std::cout << std::endl;

  mstack.push(3);
  mstack.push(5);
  mstack.push(737);
  mstack.push(0);

  MutantStack<int>::iterator it = mstack.begin();
  MutantStack<int>::iterator ite = mstack.end();

  ++it;
  --it;
  while(it != ite)
  {
    std::cout << *it << std::endl;
    ++it;
  }
  std::stack<int> s(mstack);
}

void mymain()
{
  MutantStack<int>    mstack;

  std::cout << "Test empty : " << mstack.empty() << std::endl;
  mstack.push(21);
  mstack.push(42);
  std::cout << "Ajout de contenu dans la stack et affichage de sa taille : " \
  << mstack.size() << std::endl;
  std::cout << "Dernière valeur de la stack avec top() : " << mstack.top() << std::endl;
  mstack.pop();
  std::cout << "Utilisation de pop() et affichage de la dernière valeur : " \
  << mstack.top() << std::endl;

  mstack.push(42);
  mstack.push(84);
  mstack.push(168);
  MutantStack<int>::iterator it = mstack.begin();
  MutantStack<int>::iterator ite = mstack.end();
  std::cout << "Ajout de nouvelles valeurs et création des itérateurs" << std::endl;
  std::cout << "Contenu du 1er itérateur : " << *it << std::endl;
  std::cout << "Incrémentation du 1er itérateur : " << *(++it) << std::endl;
  std::cout << "Décrémentation du dernier itérateur pour afficher" \
   << "la dernière valeur de la stack : " << *(--ite) << std::endl;

  MutantStack<int>::reverse_iterator rit = mstack.rbegin();
  MutantStack<int>::reverse_iterator rite = mstack.rend();
  std::cout << "Test du reverse_iterator rbegin() : " << *rit << std::endl;
  std::cout << "Test du reverse_iterator rend() décrémenté de 1 : " << *(--rite) << std::endl;
}

int main()
{
  std::cout << "**--- Main fourni ---**" << std::endl;
  givenMain();
  std::cout << "\n**--- Main personnel ---**" << std::endl;
  mymain();

  return 0;
}
