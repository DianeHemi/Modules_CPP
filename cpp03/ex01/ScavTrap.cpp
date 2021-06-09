/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:27:33 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/06 17:27:35 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
  Constructor - Destructor
*/

ScavTrap::ScavTrap( void ) : _name("ScavTrap")
{
  std::cout << "\t" << this->_name << " : Hey, best friend !\n" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : _name(name), _hitPts(100),
_maxHitPts(100), _energyPts(50), _maxEnergyPts(50), _lvl(1),
_meleeAttackDmg(20), _rangedAttackDmg(15), _armorDmgReduc(3)
{
  std::cout << "\t" << this->_name << " : Who -- " << this->_name \
    << " ? Uh, is that me sir ?\n" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & src )
{
  std::cout << "\t" << this->_name << " : Let's get this party started !\n" \
    << std::endl;
  *this = src;
}

ScavTrap::~ScavTrap( void )
{
  std::cout << "\t" << this->_name << " : It's happening... It's happening !" << std::endl;
}

ScavTrap & ScavTrap::operator=( ScavTrap const & rhs )
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

void ScavTrap::rangedAttack( std::string const & target ) const
{
  if (this->_hitPts == 0)
  {
    std::cout << "SC4V-TP " << this->_name << " needs to be revived..." \
      << std::endl;
    return ;
  }
  std::cout << "SC4V-TP "<< this->_name << " throw rocks at \033[93;1m" << target \
    << "\033[0m, dealing \033[92;1m" << this->_rangedAttackDmg \
    << "\033[0m damage !" << std::endl;
  std::cout << "\t" << this->_name << " : Avada kedavra !" << std::endl;
}

void ScavTrap::meleeAttack( std::string const & target ) const
{
  if (this->_hitPts == 0)
  {
    std::cout << "SC4V-TP " << this->_name << " needs to be revived..." \
      << std::endl;
    return ;
  }
  std::cout << "SC4V-TP " << this->_name << " throws himself on \033[93;1m" \
    << target << "\033[0m and deals \033[92;1m" << this->_meleeAttackDmg \
    << "\033[0m damage !" << std::endl;
  std::cout << "\t" << this->_name << " : Holy crap, that worked ?" << std::endl;
}

void ScavTrap::takeDmg( unsigned int amount )
{
  if (this->_hitPts == 0)
  {
    std::cout << "SC4V-TP " << this->_name << " needs to be revived..." \
      << std::endl;
    return ;
  }
  if (amount <= this->_armorDmgReduc)
  {
    std::cout << "SC4V-TP " << this->_name
      << " armor resist the blow " << std::endl;
      return ;
  }

  amount -= this->_armorDmgReduc;
  if (amount > this->_hitPts)
    amount = this->_hitPts;
  this->_hitPts -= amount;

  if (this->_hitPts > 0)
  {
    std::cout << "SC4V-TP " << this->_name << " get hit and lose \033[92;1m" \
      << amount << "\033[0m health points !" << std::endl;
    std::cout << "\t" << this->_name \
      << " : I have many regrets !" << std::endl;
  }
  else
  {
    std::cout << "SC4V-TP " << this->_name << " suffered \033[92;1m" << amount \
      << "\033[0m damage and collapsed... " << std::endl;
    std::cout << "\t" << this->_name \
      << " : Good thing I don't have a soul !" << std::endl;
  }
}

void ScavTrap::beRepaired( unsigned int amount )
{
  if (this->_hitPts == this->_maxHitPts)
  {
    std::cout << "SC4V-TP " << this->_name << " is already full life !" \
      << std::endl;
    return ;
  }
  if (this->_hitPts + amount > this->_maxHitPts)
    amount =  this->_maxHitPts - this->_hitPts;
  this->_hitPts += amount;

  std::cout << "SC4V-TP " << this->_name << " is being fixed and recover \033[92;1m" \
    << amount << "\033[0m health points !" << std::endl;
  std::cout << "\t" << this->_name << " : Back for more !" << std::endl;
}

void ScavTrap::challengeNewcomer( std::string const & target )
{
  std::string challenges[] = {"I will prove to you my robotic superiority !",
    "Dance battle ! Or, you know... Regular battle.",
    "You wanna fight with me ?! Put 'em up !.. Put 'em up ?",
    "Give me your princesses !",
    "It's about to get magical !"};
  int dice = (rand() % 20 + 1);

  if (this->_hitPts == 0)
  {
    std::cout << "SC4V-TP " << this->_name << " can't fight 'cause it's dead" \
      << std::endl;
    return ;
  }
  if (this->_energyPts < 25)
  {
    std::cout << "SC4V-TP " << this->_name << " is too tired" \
      << " for that move..." << std::endl;
    std::cout << "\t" << this->_name \
      << " : Wow, who saw that coming ?" << std::endl;
  }
  else
  {
    this->_energyPts -= 25;
    std::cout << "SC4V-TP " << this->_name << " challenge \033[91;1m" \
      << target << "\033[0m : \033[93;1m" << challenges[std::rand() % 5] \
      << "\033[0m" << std::endl;
    std::cout << "\tTossing the dice : \033[93;1m" << dice \
      << "\033[0m" << std::endl;
    if (dice > 16)
    {
      std::cout << "\033[92;1m\t" << this->_name \
        << " wins with a crit !\033[0m" << std::endl;
      std::cout << "\t" << this->_name \
        << " : Ha ha ha ! Suck it !" << std::endl;
    }
    else if (dice > 10)
    {
      std::cout << "\033[92;1m\t" << this->_name \
        << " wins the challenge !\033[0m" << std::endl;
      std::cout << "\t" << this->_name \
        << " : I am so impressed with myself !" << std::endl;
    }
    else
    {
      std::cout << "\033[91;1m\t" << this->_name \
        << " lose the challenge...\033[0m" << std::endl;
      std::cout << "\t" << this->_name \
        << " : This is embarrassing" << std::endl;
    }
  }
}
