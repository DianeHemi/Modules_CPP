/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 11:37:23 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/08 11:37:24 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

/*
  Constructor - Destructor
*/

NinjaTrap::NinjaTrap( void )
{
  std::cout << "\t" << this->_name << " : I need no name...\n" << std::endl;
}

NinjaTrap::NinjaTrap( std::string name ) : ClapTrap(60, 60, 120, 120, 1, name,
60, 5, 0)
{
  std::cout << "\t" << this->_name << " : My name is " << this->_name \
    << ", James " << this->_name << ".\n" << std::endl;
}

NinjaTrap::NinjaTrap( NinjaTrap const & src ) : ClapTrap(src)
{
  std::cout << "\t" << this->_name << " : Shouldn't have done this...\n" \
    << std::endl;
}

NinjaTrap::~NinjaTrap( void )
{
  std::cout << "\t" << this->_name << " : I will be back..." << std::endl;
}

NinjaTrap & NinjaTrap::operator=( NinjaTrap const & rhs )
{
  ClapTrap::operator=(rhs);
  return *this;
}

/*
  Functions
*/

void NinjaTrap::rangedAttack( std::string const & target ) const
{
  if (this->_hitPts == 0)
  {
    std::cout << "NINJA " << this->_name << " needs to be revived..." \
      << std::endl;
    return ;
  }
  std::cout << "NINJA "<< this->_name << " throw shurikens at \033[93;1m" << target \
    << "\033[0m, dealing \033[92;1m" << this->_rangedAttackDmg \
    << "\033[0m damage !" << std::endl;
  std::cout << "\t" << this->_name << " : Die you monster !" << std::endl;
}

void NinjaTrap::meleeAttack( std::string const & target ) const
{
  if (this->_hitPts == 0)
  {
    std::cout << "NINJA " << this->_name << " needs to be revived..." \
      << std::endl;
    return ;
  }
  std::cout << "NINJA " << this->_name << " kicks \033[93;1m" \
    << target << "\033[0m and deals \033[92;1m" << this->_meleeAttackDmg \
    << "\033[0m damage !" << std::endl;
  std::cout << "\t" << this->_name << " : What is a man ?" << std::endl;
}

std::string NinjaTrap::getName( void ) const
{
  return this->_name;
}

/*
  ninjaShoebox
*/

void NinjaTrap::ninjaShoebox( ClapTrap & target ) const
{
  if (this->_hitPts == 0)
  {
    std::cout << "NINJA " << this->_name << " needs to be revived..." \
      << std::endl;
    return ;
  }
  std::cout << "NINJA " << this->_name << " use \033[91;1m I'm a robot ninja...\033[0m on \033[93;1m" \
  << target.getName() << "\033[0m and attack from the shadows..." << std::endl;
  std::cout << "\t" << this->_name \
    << " : I'm invisible..." << std::endl;
  target.takeDmg(25);
}

void NinjaTrap::ninjaShoebox( FragTrap & target ) const
{
  if (this->_hitPts == 0)
  {
    std::cout << "NINJA " << this->_name << " needs to be revived..." \
      << std::endl;
    return ;
  }
  std::cout << "NINJA " << this->_name << " use \033[91;1m Sucker Punch\033[0m on \033[93;1m" \
  << target.getName() << "\033[0m. " << target.getName() << " regrets being born..." << std::endl;
  std::cout << "\t" << this->_name \
    << " : It's the only way to stop the voices !" << std::endl;
  target.takeDmg(12);
}

void NinjaTrap::ninjaShoebox( ScavTrap & target ) const
{
  if (this->_hitPts == 0)
  {
    std::cout << "NINJA " << this->_name << " needs to be revived..." \
      << std::endl;
    return ;
  }
  std::cout << "NINJA " << this->_name << " use \033[91;1m Pew-pew, pew-pew-pewpew !\033[0m on \033[93;1m" \
  << target.getName() << "\033[0m and litterally destroys it" << std::endl;
  std::cout << "\t" << this->_name \
    << " : I'm going commando !" << std::endl;
  target.takeDmg(50);
}

void NinjaTrap::ninjaShoebox( NinjaTrap & target ) const
{
  if (this->_hitPts == 0)
  {
    std::cout << "NINJA " << this->_name << " needs to be revived..." \
      << std::endl;
    return ;
  }
  std::cout << "NINJA " << this->_name << " use \033[91;1m Death Machine \033[0m on \033[93;1m" \
    << target.getName() << "\033[0m and try to kill his foe" << std::endl;
  std::cout << "\t" << this->_name \
    << " : Burn it with fire !" << std::endl;
  target.takeDmg(5);
}
