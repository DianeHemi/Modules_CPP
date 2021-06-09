/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:27:40 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/06 17:27:42 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>

class ScavTrap {
public:
  ScavTrap();
  ScavTrap( std::string name );
  ScavTrap( ScavTrap const & src );
  ~ScavTrap();

  ScavTrap & operator=( ScavTrap const & rhs );

  void rangedAttack( std::string const & target ) const;
  void meleeAttack( std::string const & target ) const;
  void takeDmg( unsigned int amount );
  void beRepaired( unsigned int amount );
  void challengeNewcomer( std::string const & target );


private:
  std::string   _name;
  unsigned int  _hitPts;
  unsigned int  _maxHitPts;
  unsigned int  _energyPts;
  unsigned int  _maxEnergyPts;
  unsigned int  _lvl;
  unsigned int  _meleeAttackDmg;
  unsigned int  _rangedAttackDmg;
  unsigned int  _armorDmgReduc;
};



#endif
