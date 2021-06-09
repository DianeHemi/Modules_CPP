/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 11:19:17 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/16 11:19:17 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

/*
  Constructor, destructor
*/
Victim::Victim( void ) : _name("")
{
  std::cout << "Some random victim called " << this->_name \
    << " just appeared !" << std::endl;
}

Victim::Victim( std::string name )
  : _name(name)
{
  std::cout << "Some random victim called " << this->_name \
    << " just appeared !" << std::endl;
}

Victim::Victim( Victim const & src )
{
  *this = src;
  std::cout << "Some random victim called " << this->_name \
    << " just appeared !" << std::endl;
}

Victim::~Victim( void )
{
  std::cout << "Victim " << this->_name \
    << " just died for no apparent reason !" << std::endl;
}

/*
  Overload operator <<
*/
std::ostream &  operator<<( std::ostream & o, Victim const & rhs )
{
  o << "I'm " << rhs.getName() << " and I like otters !" << std::endl;
  return o;
}

/*
  Functions
*/
Victim & Victim::operator=( Victim const & rhs )
{
  if (this != &rhs)
    this->_name = rhs.getName();
  return *this;
}

std::string Victim::getName() const
{
  return this->_name;
}

void Victim::getPolymorphed( void ) const
{
  std::cout << this->_name << " has been turned into a cute little sheep !" \
    << std::endl;
}
