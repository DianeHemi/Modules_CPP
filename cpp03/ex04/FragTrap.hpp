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
# include "ClapTrap.hpp"


class FragTrap : virtual public ClapTrap {
public:
  FragTrap();
  FragTrap( std::string name );
  FragTrap( FragTrap const & src );
  ~FragTrap();

  FragTrap & operator=( FragTrap const & rhs );

  std::string getName() const;
  void rangedAttack( std::string const & target ) const;
  void meleeAttack( std::string const & target ) const;
  void vaulthunter_dot_exe( std::string const & target );
};

#endif
