/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 15:31:50 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/21 15:31:51 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/*
  Constructor, destructor
*/
Cure::Cure() : AMateria("cure")
{
}

Cure::Cure( Cure const & src ) : AMateria(src)
{
}

Cure::~Cure()
{
}

/*
  Functions
*/
Cure & Cure::operator=( Cure const & rhs )
{
  if (this != &rhs)
  {
    this->_type = rhs.getType();
    this->_xp = rhs.getXP();
  }
  return *this;
}

void Cure::use( ICharacter& target )
{
  std::cout << "* heals " << target.getName() \
    << "'s wounds *" << std::endl;
  AMateria::use(target);
}

AMateria* Cure::clone() const
{
  AMateria *clone = new Cure(*this);
  return clone;
}
