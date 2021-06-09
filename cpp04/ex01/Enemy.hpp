/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:07:31 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/20 12:07:32 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy {
  public:
    Enemy();
    Enemy( int hp, std::string const & type );
    Enemy( Enemy const & src );
    virtual ~Enemy();

    Enemy & operator=( Enemy const & rhs );
    std::string const & getType() const;
    int getHP() const;

    virtual void takeDamage(int damage);

  protected:
    int         _hp;
    std::string _type;
};


#endif
