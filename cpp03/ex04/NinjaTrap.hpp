/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 11:37:18 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/08 11:37:20 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class NinjaTrap : virtual public ClapTrap {
public:
  NinjaTrap();
  NinjaTrap( std::string name );
  NinjaTrap( NinjaTrap const & src );
  ~NinjaTrap();

  NinjaTrap & operator=( NinjaTrap const & rhs );

  std::string getName() const;
  void rangedAttack( std::string const & target ) const;
  void meleeAttack( std::string const & target ) const;

  void ninjaShoebox( ClapTrap & target ) const;
  void ninjaShoebox( FragTrap & target ) const;
  void ninjaShoebox( ScavTrap & target ) const;
  void ninjaShoebox( NinjaTrap & target ) const;


};


#endif
