/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:07:48 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/20 12:07:49 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"

class SuperMutant : public Enemy {
  public:
    SuperMutant();
    SuperMutant( SuperMutant const & src );
    virtual ~SuperMutant();

    SuperMutant & operator=( SuperMutant const & rhs );
    virtual void takeDamage(int damage);
};

#endif
