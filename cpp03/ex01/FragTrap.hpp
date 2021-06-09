/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 15:20:43 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/02 15:20:44 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>

class FragTrap {
public:
  FragTrap();
  FragTrap( std::string name );
  FragTrap( FragTrap const & src );
  ~FragTrap();

  FragTrap & operator=( FragTrap const & rhs );

  void rangedAttack( std::string const & target ) const;
  void meleeAttack( std::string const & target ) const;
  void takeDmg( unsigned int amount );
  void beRepaired( unsigned int amount );
  void vaulthunter_dot_exe( std::string const & target );


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
