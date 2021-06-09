/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LightSaber.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 15:53:29 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/20 15:53:31 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIGHTSABER_HPP
# define LIGHTSABER_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class LightSaber : public AWeapon {
  public:
    LightSaber();
    LightSaber( LightSaber const & src );
    virtual ~LightSaber();

    LightSaber & operator=( LightSaber const & rhs );
    virtual void attack() const;
};

#endif
