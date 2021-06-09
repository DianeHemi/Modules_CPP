/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:07:02 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/20 12:07:04 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
  public:
    PlasmaRifle();
    PlasmaRifle( PlasmaRifle const & src );
    virtual ~PlasmaRifle();

    PlasmaRifle & operator=( PlasmaRifle const & rhs );
    virtual void attack() const;
};

#endif
