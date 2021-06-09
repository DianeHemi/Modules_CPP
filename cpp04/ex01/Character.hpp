/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:08:18 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/20 12:08:19 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character {
  public:
    Character( std::string const & name );
    Character( Character const & src );
    ~Character();

    Character & operator=( Character const & rhs );
    void recoverAP();
    void equip(AWeapon* weapon);
    void attack(Enemy* enemy);
    std::string const & getName() const;
    int getAP() const;
    AWeapon* getWeapon() const;

  private:
    Character();

    std::string _name;
    int         _ap;
    AWeapon*    _weapon;
};

std::ostream &  operator<<( std::ostream & o, Character const & rhs );

#endif
