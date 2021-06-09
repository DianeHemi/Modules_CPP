/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:07:06 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/20 12:07:07 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

/*
  Constructor, destructor
*/
PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle( PlasmaRifle const & src )
{
  *this = src;
}

PlasmaRifle::~PlasmaRifle()
{
}

/*
  Functions
*/
PlasmaRifle & PlasmaRifle::operator=( PlasmaRifle const & rhs )
{
  if (this != &rhs)
  {
    this->_name = rhs.getName();
    this->_apcost = rhs.getAPCost();
    this->_damage = rhs.getDamage();
  }
  return *this;
}

void PlasmaRifle::attack() const
{
  std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
