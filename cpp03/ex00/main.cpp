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

int main( void )
{
  srand(time(NULL));
  FragTrap trap("Zeta");

  trap.rangedAttack("Jack");
  trap.takeDmg(10);
  trap.meleeAttack("Jack");
  trap.takeDmg(5);
  trap.vaulthunter_dot_exe("Nisha");
  trap.takeDmg(100);
  trap.meleeAttack("Nisha");
  trap.beRepaired(15);
  trap.vaulthunter_dot_exe("Jack");
  trap.beRepaired(95);
  trap.takeDmg(35);

  return 0;
}
