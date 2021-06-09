/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:07:34 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/20 12:07:35 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

/*
  Constructor, destructor
*/
Enemy::Enemy() : _hp(0), _type("")
{
}

Enemy::Enemy(  int hp, std::string const & type  ) :
  _hp(hp), _type(type)
{
}

Enemy::Enemy( Enemy const & src )
{
  *this = src;
}

Enemy::~Enemy()
{
}

/*
  Functions
*/
Enemy & Enemy::operator=( Enemy const & rhs )
{
  if (this != &rhs)
  {
    this->_type = rhs.getType();
    this->_hp = rhs.getHP();
  }
  return *this;
}

void Enemy::takeDamage( int damage )
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

std::string const & Enemy::getType() const
{
  return this->_type;
}

int Enemy::getHP() const
{
  return this->_hp;
}
