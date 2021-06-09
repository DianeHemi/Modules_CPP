/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 18:29:10 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/20 18:29:12 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"


int main()
{
  std::cout << "--- Main fourni ---\n" << std::endl;
  ISpaceMarine* bob = new TacticalMarine;
  ISpaceMarine* jim = new AssaultTerminator;
  ISquad* vlc = new Squad;

  vlc->push(bob);
  vlc->push(jim);
  for (int i = 0; i < vlc->getCount(); ++i)
  {
    ISpaceMarine* cur = vlc->getUnit(i);
    cur->battleCry();
    cur->rangedAttack();
    cur->meleeAttack();
  }
  delete vlc;



  std::cout << "\n\n--- Main perso ---\n" << std::endl;
  TacticalMarine* alex = new TacticalMarine;
  ISpaceMarine* jean = new TacticalMarine(*alex);

  AssaultTerminator* georges = new AssaultTerminator;
  ISpaceMarine* ben = new AssaultTerminator(*georges);
  std::cout << std::endl;

  ISquad* team = new Squad;
  team->push(jean);
  team->push(ben);
  std::cout << "Pushing only the copies in the squad :" << std::endl;
  for (int i = 0; i < team->getCount(); ++i)
  {
    ISpaceMarine* cur = team->getUnit(i);
    cur->battleCry();
    cur->rangedAttack();
    cur->meleeAttack();
  }
  std::cout << "\nDeleting the originals :" << std::endl;
  delete alex;
  delete georges;
  std::cout << "\nDeleting the squad" << std::endl;
  delete team;

  return 0;
}
