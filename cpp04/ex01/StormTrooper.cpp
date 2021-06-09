/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StormTrooper.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 15:56:55 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/20 15:56:56 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StormTrooper.hpp"

/*
  Constructor, destructor
*/
StormTrooper::StormTrooper() : Enemy(62, "StormTrooper")
{
  std::cout << "Blowing stuff up never gets old !" << std::endl;
}

StormTrooper::StormTrooper( StormTrooper const & src )
{
  *this = src;
  std::cout << "Blowing stuff up never gets old !" << std::endl;
}

StormTrooper::~StormTrooper()
{
  std::cout << "These aren’t the droids we’re looking for." << std::endl;
}

/*
  Functions
*/
StormTrooper & StormTrooper::operator=( StormTrooper const & rhs )
{
  if (this != &rhs)
  {
    this->_type = rhs.getType();
    this->_hp = rhs.getHP();
  }
  return *this;
}

void StormTrooper::takeDamage( int damage )
{
  if (this->_hp <= 0)
    return ;
  else if (damage >= this->_hp)
  {
    this->_hp = 0;
    return ;
  }
  this->_hp -= damage;
}
