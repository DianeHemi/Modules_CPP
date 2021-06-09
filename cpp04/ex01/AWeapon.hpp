/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:06:53 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/20 12:25:34 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon {
  public:
    AWeapon();
    AWeapon( std::string const & name, int apcost, int damage );
    AWeapon( AWeapon const & src );
    virtual ~AWeapon();

    AWeapon & operator=( AWeapon const & rhs );
    std::string const & getName() const;
    int getAPCost() const;
    int getDamage() const;
    virtual void attack() const = 0;

  protected:
    std::string _name;
    int         _apcost;
    int         _damage;
  };

#endif
