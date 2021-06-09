/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LightSaber.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 15:53:34 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/20 15:53:35 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LightSaber.hpp"

/*
  Constructor, destructor
*/
LightSaber::LightSaber() : AWeapon("Light Saber", 12, 28)
{
}

LightSaber::LightSaber( LightSaber const & src )
{
  *this = src;
}

LightSaber::~LightSaber()
{
}

/*
  Functions
*/
LightSaber & LightSaber::operator=( LightSaber const & rhs )
{
  if (this != &rhs)
  {
    this->_name = rhs.getName();
    this->_apcost = rhs.getAPCost();
    this->_damage = rhs.getDamage();
  }
  return *this;
}

void LightSaber::attack() const
{
  std::cout << "* Vrummmummmmm FVISH ! Kwishuuuuuuuuuu ! *" << std::endl;
}
