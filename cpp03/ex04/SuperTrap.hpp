/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:04:59 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/08 18:05:00 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <iostream>
# include <string>
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {
public:
  SuperTrap();
  SuperTrap( std::string name );
  SuperTrap( SuperTrap const & src );
  ~SuperTrap();

  SuperTrap & operator=( SuperTrap const & rhs );

  std::string getName() const;
  void rangedAttack( std::string const & target ) const;
  void meleeAttack( std::string const & target ) const;
};

#endif
