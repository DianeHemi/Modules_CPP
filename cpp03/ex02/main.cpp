/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 15:20:49 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/02 15:20:50 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <ctime>

int main( void )
{
  srand(time(NULL));
  std::cout << "\n\n--------------------------" << std::endl;
  std::cout << "EX00 : "<< std::endl;
  std::cout << "--------------------------" << std::endl;
  FragTrap frag("Zeta");

  frag.rangedAttack("Jack");
  frag.takeDmg(10);
  frag.meleeAttack("Jack");
  frag.takeDmg(5);
  frag.vaulthunter_dot_exe("Nisha");
  frag.takeDmg(100);
  frag.meleeAttack("Nisha");
  frag.beRepaired(15);
  frag.vaulthunter_dot_exe("Jack");
  frag.beRepaired(95);
  frag.takeDmg(35);

  std::cout << "\n\n--------------------------" << std::endl;
  std::cout << "EX01 : "<< std::endl;
  std::cout << "--------------------------" << std::endl;
  ScavTrap scav("Sigma");

  scav.meleeAttack("Joseph");
  scav.takeDmg(1);
  scav.meleeAttack("Joseph");
  scav.takeDmg(25);
  scav.rangedAttack("Dio");
  scav.takeDmg(98);
  scav.rangedAttack("Dio");
  scav.beRepaired(100);
  scav.challengeNewcomer("Joseph");
  scav.beRepaired(8);
  scav.challengeNewcomer("Dio");

  std::cout << "\n\n--------------------------" << std::endl;
  std::cout << "EX02 : "<< std::endl;
  std::cout << "--------------------------" << std::endl;
  ClapTrap  clap(10, 10, 8, 8, 1, "Tau", 3, 2, 5);

  clap.rangedAttack("O'Malley");
  clap.takeDmg(4);
  clap.beRepaired(3);
  clap.meleeAttack("O'Malley");
  clap.takeDmg(15);
  clap.beRepaired(10);

  std::cout << std::endl;
  std::cout << "\n\n--------------------------" << std::endl;
  std::cout << "Calling destructors : "<< std::endl;
  std::cout << "--------------------------" << std::endl;
  return 0;
}
