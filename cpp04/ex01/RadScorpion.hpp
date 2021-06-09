/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:08:06 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/20 12:08:07 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"

class RadScorpion : public Enemy {
  public:
    RadScorpion();
    RadScorpion( RadScorpion const & src );
    virtual ~RadScorpion();

    RadScorpion & operator=( RadScorpion const & rhs );
};

#endif
