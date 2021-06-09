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
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
  ScavTrap();
  ScavTrap( std::string name );
  ScavTrap( ScavTrap const & src );
  ~ScavTrap();

  ScavTrap & operator=( ScavTrap const & rhs );

  std::string getName() const;
  void rangedAttack( std::string const & target ) const;
  void meleeAttack( std::string const & target ) const;
  void challengeNewcomer( std::string const & target );

};



#endif
