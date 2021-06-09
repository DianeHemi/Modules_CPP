/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:00:06 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/07 12:00:07 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap {
public:
  ClapTrap( void );
  ClapTrap( unsigned int hitPts, unsigned int maxHitPts,
    unsigned int energyPts, unsigned int maxEnergyPts,
    unsigned int lvl, std::string name, unsigned int meleeAttackDmg,
    unsigned int rangedAttackDmg, unsigned int armorDmgReduc );
  ClapTrap( ClapTrap const & src );
  ~ClapTrap();

  ClapTrap & operator=( ClapTrap const & rhs );

  std::string getName() const;
  void rangedAttack( std::string const & target ) const;
  void meleeAttack( std::string const & target ) const;
  void takeDmg( unsigned int amount );
  void beRepaired( unsigned int amount );

protected:
  unsigned int  _hitPts;
  unsigned int  _maxHitPts;
  unsigned int  _energyPts;
  unsigned int  _maxEnergyPts;
  unsigned int  _lvl;
  std::string   _name;
  unsigned int  _meleeAttackDmg;
  unsigned int  _rangedAttackDmg;
  unsigned int  _armorDmgReduc;
};


#endif
