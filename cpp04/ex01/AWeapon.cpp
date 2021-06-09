/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:06:49 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/20 12:25:56 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

/*
  Constructor, destructor
*/
AWeapon::AWeapon( void ) : _name(""), _apcost(0), _damage(0)
{
}

AWeapon::AWeapon( std::string const & name, int apcost, int damage ) :
  _name(name), _apcost(apcost), _damage(damage)
{
}

AWeapon::AWeapon( AWeapon const & src )
{
  *this = src;
}

AWeapon::~AWeapon( void )
{
}

/*
  Functions
*/
AWeapon & AWeapon::operator=( AWeapon const & rhs )
{
  if (this != &rhs)
  {
    this->_name = rhs.getName();
    this->_apcost = rhs.getAPCost();
    this->_damage = rhs.getDamage();
  }
  return *this;
}

std::string const & AWeapon::getName() const
{
  return this->_name;
}

int AWeapon::getAPCost() const
{
  return this->_apcost;
}

int AWeapon::getDamage() const
{
  return this->_damage;
}
