/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:07:51 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/20 12:07:52 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

/*
  Constructor, destructor
*/
SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
  std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant( SuperMutant const & src )
{
  *this = src;
  std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
  std::cout << "Aaargh..." << std::endl;
}

/*
  Functions
*/
SuperMutant & SuperMutant::operator=( SuperMutant const & rhs )
{
  if (this != &rhs)
  {
    this->_type = rhs.getType();
    this->_hp = rhs.getHP();
  }
  return *this;
}

void SuperMutant::takeDamage( int damage )
{
  if (damage >= 3)
    damage -= 3;
  else
    damage = 0;
  if (this->_hp <= 0)
    return ;
  else if (damage >= this->_hp)
  {
    this->_hp = 0;
    return ;
  }
  this->_hp -= damage;
}
