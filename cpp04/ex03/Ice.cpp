/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 15:31:41 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/21 15:31:42 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/*
  Constructor, destructor
*/
Ice::Ice() : AMateria("ice")
{
}

Ice::Ice( Ice const & src ) : AMateria(src)
{
}

Ice::~Ice()
{
}

/*
  Functions
*/
Ice & Ice::operator=( Ice const & rhs )
{
  if (this == &rhs)
    return *this;

  this->_type = rhs.getType();
  this->_xp = rhs.getXP();
  return *this;
}

void Ice::use( ICharacter& target )
{
  std::cout << "* shoots an ice bolt at " << target.getName() \
    << " *" << std::endl;
  AMateria::use(target);
}

AMateria* Ice::clone() const
{
  AMateria *clone = new Ice(*this);
  return clone;
}
