/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:08:21 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/20 12:08:23 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
  Constructor, destructor
*/
Character::Character() : _name("no name"), _ap(40), _weapon(NULL)
{
}

Character::Character( std::string const & name ) :
  _name(name), _ap(40), _weapon(NULL)
{
}

Character::Character( Character const & src )
{
  *this = src;
}

Character::~Character()
{
}

/*
  Functions
*/
Character & Character::operator=( Character const & rhs )
{
  if (this != &rhs)
  {
    this->_name = rhs.getName();
    this->_ap = rhs.getAP();
    this->_weapon = rhs.getWeapon();
  }
  return *this;
}

void Character::recoverAP()
{
  if (this->_ap + 10 > 40)
    this->_ap = 40;
  else
    this->_ap += 10;
}

void Character::equip(AWeapon* weapon)
{
  this->_weapon = weapon;
}

void Character::attack(Enemy* enemy)
{
  if (this->_weapon != NULL)
  {
    if (this->_ap >= this->_weapon->getAPCost())
    {
      this->_ap -= this->_weapon->getAPCost();
      std::cout << this->_name << " attacks " << enemy->getType() \
        << " with a " << this->_weapon->getName() << std::endl;
      this->_weapon->attack();
      enemy->takeDamage(_weapon->getDamage());
      if (enemy->getHP() <= 0)
        delete enemy;
    }
    else
      std::cout << "Not enough AP..." << std::endl;
  }
  else
    std::cout << "No weapon equipped..." << std::endl;
}

std::string const & Character::getName() const
{
  return this->_name;
}

int Character::getAP() const
{
  return this->_ap;
}

AWeapon* Character::getWeapon() const
{
  return this->_weapon;
}

/*
  Overload operator <<
*/
std::ostream & operator<<( std::ostream & o, Character const & rhs )
{
  if (rhs.getWeapon() != NULL)
    o << rhs.getName() << " has " << rhs.getAP() << " AP and wields a " \
      << rhs.getWeapon()->getName() << std::endl;
  else
    o << rhs.getName() << " has " << rhs.getAP() << " AP and is unarmed" \
      << std::endl;
  return o;
}
