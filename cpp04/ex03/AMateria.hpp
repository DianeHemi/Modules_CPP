/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 15:31:20 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/21 15:31:21 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria {
  public:
    AMateria();
    AMateria( std::string const & type );
    AMateria( AMateria const & src );
    virtual ~AMateria();

    AMateria & operator=( AMateria const & rhs );
    std::string const & getType() const;
    unsigned int getXP() const;
    virtual AMateria* clone() const = 0;
    virtual void use( ICharacter & target );

  protected:
    std::string   _type;
    unsigned int  _xp;
};

#endif
