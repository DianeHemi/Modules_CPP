/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:07:23 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/20 12:07:24 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

/*
  Constructor, destructor
*/
PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist( PowerFist const & src )
{
  *this = src;
}

PowerFist::~PowerFist()
{
}

/*
  Functions
*/
PowerFist & PowerFist::operator=( PowerFist const & rhs )
{
  if (this != &rhs)
  {
    this->_name = rhs.getName();
    this->_apcost = rhs.getAPCost();
    this->_damage = rhs.getDamage();
  }
  return *this;
}

void PowerFist::attack() const
{
  std::cout << "* pschhh... SBAM! *" << std::endl;
}
