/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 15:20:38 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/02 15:20:40 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*
  Constructor - Destructor
*/

FragTrap::FragTrap( void ) : _name("FragTrap")
{
  std::cout << "\t" << this->_name << " : Hocus Pocus" << std::endl;
}

FragTrap::FragTrap( std::string name ) : _name(name), _hitPts(100),
_maxHitPts(100), _energyPts(100), _maxEnergyPts(100), _lvl(1),
_meleeAttackDmg(30), _rangedAttackDmg(20), _armorDmgReduc(5)
{
  std::cout << "\t" << this->_name << " : Hello ! I am your new steward bot." \
    << " Designation: " << _name << ", Hyperion Robot, Class C\n" << std::endl;
}

FragTrap::FragTrap( FragTrap const & src )
{
  std::cout << "\t" << this->_name << " : Thanks for giving me a second chance, God." << \
  " I really appreciate it.\n" << std::endl;
  *this = src;
}

FragTrap::~FragTrap( void )
{
  std::cout << "\t" << this->_name << " : I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
}

FragTrap & FragTrap::operator=( FragTrap const & rhs )
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

void FragTrap::rangedAttack( std::string const & target ) const
{
  if (this->_hitPts == 0)
  {
    std::cout << "FR4G-TP " << this->_name << " is dead and need healing !" \
      << std::endl;
    return ;
  }
  std::cout << "FR4G-TP "<< this->_name << " attack \033[93;1m" << target \
    << "\033[0m from afar, dealing \033[92;1m" << this->_rangedAttackDmg \
    << "\033[0m damage !" << std::endl;
  std::cout << "\t" << this->_name << " : Grenaaaade !" << std::endl;
}

void FragTrap::meleeAttack( std::string const & target ) const
{
  if (this->_hitPts == 0)
  {
    std::cout << "FR4G-TP " << this->_name << " is dead and need healing !" \
      << std::endl;
    return ;
  }
  std::cout << "FR4G-TP " << this->_name << " attack \033[93;1m" << target \
    << "\033[0m with his fists, dealing \033[92;1m" << this->_meleeAttackDmg \
    << "\033[0m damage !" << std::endl;
  std::cout << "\t" << this->_name << " : Ready for the PUNCHline ?!" << std::endl;
}

void FragTrap::takeDmg( unsigned int amount )
{
  if (this->_hitPts == 0)
  {
    std::cout << "FR4G-TP " << this->_name << " is dead and need healing !" \
      << std::endl;
    return ;
  }
  if (amount <= this->_armorDmgReduc)
  {
    std::cout << "FR4G-TP " << this->_name
      << " armor resist the blow " << std::endl;
      return ;
  }

  amount -= this->_armorDmgReduc;
  if (amount > this->_hitPts)
    amount = this->_hitPts;
  this->_hitPts -= amount;

  if (this->_hitPts > 0)
  {
    std::cout << "FR4G-TP " << this->_name << " suffer \033[92;1m" \
      << amount << "\033[0m damage !" << std::endl;
    std::cout << "\t" << this->_name \
      << " : Why do I even feel pain ?!" << std::endl;
  }
  else
  {
    std::cout << "FR4G-TP " << this->_name << " suffered \033[92;1m" << amount \
      << "\033[0m damage and died from the wound... " << std::endl;
    std::cout << "\t" << this->_name \
      << " : -- Are you god ? Am I dead ?" << std::endl;
  }
}

void FragTrap::beRepaired( unsigned int amount )
{
  if (this->_hitPts == this->_maxHitPts)
  {
    std::cout << "FR4G-TP " << this->_name << " is already full life !" \
      << std::endl;
    return ;
  }
  if (this->_hitPts + amount > this->_maxHitPts)
    amount =  this->_maxHitPts - this->_hitPts;
  this->_hitPts += amount;

  std::cout << "FR4G-TP " << this->_name << " is being repared and recover \033[92;1m" \
    << amount << "\033[0m health points !" << std::endl;
  std::cout << "\t" << this->_name << " : Ha ha ha ! I LIVE ! Hahaha !" << std::endl;
}

void FragTrap::vaulthunter_dot_exe( std::string const & target )
{
  std::string attacks[5] = {"Load 'n' Splode", "Hyperion Punch",
    "It's a Trap...Card", "Rainbow Coolant", "Maniacal Laughter"};

  if (this->_hitPts == 0)
  {
    std::cout << "FR4G-TP " << this->_name << " is already dead !" \
      << std::endl;
    return ;
  }
  if (this->_energyPts < 25)
  {
    std::cout << "FR4G-TP " << this->_name << " doesn't have enough energy left" \
      << " for that move..." << std::endl;
    std::cout << "\t" << this->_name \
      << " : Ahem, ahem. What's going on ? Did I break something?" << std::endl;
  }
  else
  {
    this->_energyPts -= 25;
    std::cout << "FR4G-TP " << this->_name << " use \033[91;1m" \
      << attacks[std::rand() % 5] << "\033[0m on \033[93;1m" << target \
      << "\033[0m" << std::endl;
    std::cout << "\t" << this->_name \
      << " : I expect you to die !" << std::endl;
  }
}
