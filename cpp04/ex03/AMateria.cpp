/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 15:31:29 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/21 15:31:30 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*
  Constructor, destructor
*/
AMateria::AMateria() : _type(""), _xp(0)
{
}

AMateria::AMateria( std::string const & type ) : _type(type), _xp(0)
{
}

AMateria::AMateria( AMateria const & src )
{
  *this = src;
}

AMateria::~AMateria()
{
}

/*
  Functions
*/
AMateria & AMateria::operator=( AMateria const & rhs )
{
  if (this != &rhs)
  {
    this->_type = rhs.getType();
    this->_xp = rhs.getXP();
  }
  return *this;
}

std::string const & AMateria::getType() const
{
  return this->_type;
}

unsigned int AMateria::getXP() const
{
  return this->_xp;
}

void AMateria::use( ICharacter & target )
{
  (void)target;
  this->_xp += 10;
}
