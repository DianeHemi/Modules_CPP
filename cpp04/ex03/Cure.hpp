/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 15:31:46 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/21 15:31:47 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"


class Cure : public AMateria {
  public:
    Cure();
    Cure( Cure const & src );
    virtual ~Cure();

    Cure & operator=( Cure const & rhs );
    AMateria* clone() const;
    void use( ICharacter& target );
};

#endif
