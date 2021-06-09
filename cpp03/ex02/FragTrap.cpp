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

FragTrap::FragTrap( void )
{
  std::cout << "\t" << this->_name << " : Hocus Pocus" << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(100, 100, 100, 100, 1, name,
30, 20, 5)
{
  std::cout << "\t" << this->_name << " : Hello ! I am your new steward bot." \
    << " Designation: " << _name << ", Hyperion Robot, Class C\n" << std::endl;
}

FragTrap::FragTrap( FragTrap const & src ) : ClapTrap(src)
{
  std::cout << "\t" << this->_name << " : Thanks for giving me a second chance, God." << \
  " I really appreciate it.\n" << std::endl;
}

FragTrap::~FragTrap( void )
{
  std::cout << "\t" << this->_name << " : I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
}

FragTrap & FragTrap::operator=( FragTrap const & rhs )
{
  ClapTrap::operator=(rhs);
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
  std::cout << "FR4G-TP " << this->_name << " attack \033[93;1m" << target \
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
