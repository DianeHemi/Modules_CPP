/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:00:10 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/07 12:00:11 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
  Constructor - Destructor
*/

ClapTrap::ClapTrap( void ) : _hitPts(0), _maxHitPts(0), _energyPts(0),
_maxEnergyPts(0), _lvl(0), _name("ClapTrap"), _meleeAttackDmg(0), _rangedAttackDmg(0), _armorDmgReduc(0)
{
  std::cout << "ClapTrap created !" << std::endl;
}

ClapTrap::ClapTrap( unsigned int hitPts, unsigned int maxHitPts, unsigned int energyPts,
  unsigned int maxEnergyPts, unsigned int lvl, std::string name, unsigned int meleeAttackDmg, unsigned int rangedAttackDmg,
  unsigned int armorDmgReduc ) : _hitPts(hitPts), _maxHitPts(maxHitPts), _energyPts(energyPts),
  _maxEnergyPts(maxEnergyPts), _lvl(lvl), _name(name), _meleeAttackDmg(meleeAttackDmg),
  _rangedAttackDmg(rangedAttackDmg), _armorDmgReduc(armorDmgReduc)
{
  std::cout << "A ClapTrap is born !" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & src )
{
  *this = src;
  std::cout << "A ClapTrap is born by copy !" << std::endl;
}

ClapTrap::~ClapTrap( void )
{
  std::cout << this->_name << " disappeared..." << std::endl;
}

ClapTrap & ClapTrap::operator=( ClapTrap const & rhs )
{
  this->_hitPts = rhs._hitPts;
  this->_maxHitPts = rhs._maxHitPts;
  this->_energyPts = rhs._energyPts;
  this->_maxEnergyPts = rhs._maxEnergyPts;
  this->_lvl = rhs._lvl;
  this->_name = rhs._name;
  this->_meleeAttackDmg = rhs._meleeAttackDmg;
  this->_rangedAttackDmg = rhs._rangedAttackDmg;
  this->_armorDmgReduc = rhs._armorDmgReduc;
  return *this;
}

/*
  Functions
*/

void ClapTrap::takeDmg( unsigned int amount )
{
  if (this->_hitPts == 0)
  {
    std::cout << this->_name << " is dead..." \
      << std::endl;
    return ;
  }
  if (amount <= this->_armorDmgReduc)
  {
    std::cout << this->_name
      << " armor resist the blow " << std::endl;
      return ;
  }

  amount -= this->_armorDmgReduc;
  if (amount > this->_hitPts)
    amount = this->_hitPts;
  this->_hitPts -= amount;

  if (this->_hitPts > 0)
  {
    std::cout << this->_name << " took damage and lost \033[92;1m" \
      << amount << "\033[0m health points !" << std::endl;
  }
  else
  {
    std::cout << this->_name << " lost \033[92;1m" << amount \
      << "\033[0m health points and died... " << std::endl;
  }
}

void ClapTrap::beRepaired( unsigned int amount )
{
  if (this->_hitPts == this->_maxHitPts)
  {
    std::cout << this->_name << " is already full life !" \
      << std::endl;
    return ;
  }
  if (this->_hitPts + amount > this->_maxHitPts)
    amount =  this->_maxHitPts - this->_hitPts;
  this->_hitPts += amount;

  std::cout << this->_name << " recovered \033[92;1m" \
    << amount << "\033[0m health points !" << std::endl;
}

void ClapTrap::rangedAttack( std::string const & target ) const
{
  if (this->_hitPts == 0)
  {
    std::cout << this->_name << " is dead and need healing !" \
      << std::endl;
    return ;
  }
  std::cout << this->_name << " use a ranged attack on \033[93;1m" << target \
    << "\033[0m dealing \033[92;1m" << this->_rangedAttackDmg \
    << "\033[0m damage !" << std::endl;
}

void ClapTrap::meleeAttack( std::string const & target ) const
{
  if (this->_hitPts == 0)
  {
    std::cout << this->_name << " is dead and need healing !" \
      << std::endl;
    return ;
  }
  std::cout << this->_name << " use a melee attack on \033[93;1m" << target \
    << "\033[0m dealing \033[92;1m" << this->_meleeAttackDmg \
    << "\033[0m damage !" << std::endl;
}
