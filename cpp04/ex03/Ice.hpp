/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 15:31:35 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/21 15:31:36 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"


class Ice : public AMateria {
  public:
    Ice();
    Ice( Ice const & src );
    virtual ~Ice();

    Ice & operator=( Ice const & rhs );
    AMateria* clone() const;
    void use( ICharacter& target );

};

#endif
