/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StormTrooper.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 15:56:59 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/20 15:57:00 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STORMTROOPER_HPP
# define STORMTROOPER_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"

class StormTrooper : public Enemy {
  public:
    StormTrooper();
    StormTrooper( StormTrooper const & src );
    virtual ~StormTrooper();

    StormTrooper & operator=( StormTrooper const & rhs );
    virtual void takeDamage(int damage);
};

#endif
