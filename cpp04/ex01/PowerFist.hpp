/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:07:19 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/20 12:07:20 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PowerFist : public AWeapon {
  public:
    PowerFist();
    PowerFist( PowerFist const & src );
    virtual ~PowerFist();

    PowerFist & operator=( PowerFist const & rhs );
    virtual void attack() const;
};


#endif
