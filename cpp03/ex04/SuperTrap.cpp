/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:04:55 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/08 18:04:56 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

/*
  Constructor - Destructor
*/

SuperTrap::SuperTrap( void )
{
  std::cout << "\t" << this->_name << " : Hi, i'm a SuperTrap !\n" << std::endl;
}

SuperTrap::SuperTrap( std::string name ) : ClapTrap(100, 100, 120, 120, 1, name,
60, 20, 5), FragTrap(name), NinjaTrap(name)
{
  std::cout << "\t" << this->_name << " : Hi, i'm a SuperTrap !\n" << std::endl;
}

SuperTrap::~SuperTrap( void )
{
  std::cout << "\t" << this->_name << " : Hi, i'm a dead SuperTrap !" << std::endl;
}

SuperTrap::SuperTrap( SuperTrap const & src ) : ClapTrap(src)
{
  std::cout << "\t" << this->_name << " : I'm a copy of a SuperTrap...\n" \
    << std::endl;
}

SuperTrap & SuperTrap::operator=( SuperTrap const & rhs )
{
  ClapTrap::operator=(rhs);
  return *this;
}

/*
  Functions
*/

void SuperTrap::rangedAttack( std::string const & target) const
{
  FragTrap::rangedAttack( target );
}

void SuperTrap::meleeAttack( std::string const & target) const
{
  NinjaTrap::meleeAttack( target );
}

std::string SuperTrap::getName( void ) const
{
  return this->_name;
}
