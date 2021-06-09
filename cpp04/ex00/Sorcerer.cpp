/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 11:19:04 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/16 11:19:05 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

/*
  Constructor, destructor
*/
Sorcerer::Sorcerer( void ) : _name(""), _title("")
{
  std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer( std::string name, std::string title )
  : _name(name), _title(title)
{
    std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer( Sorcerer const & src )
{
  *this = src;
  std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer( void )
{
  std::cout << this->_name << ", " << this->_title \
    << ", is dead. Consequences will never be the same !" << std::endl;
}

/*
  Overload operator <<
*/
std::ostream &  operator<<( std::ostream & o, Sorcerer const & rhs )
{
  o << "I am " << rhs.getName() << ", " << rhs.getTitle() \
    << ", and I like ponies !" << std::endl;
  return o;
}

/*
  Functions
*/
Sorcerer & Sorcerer::operator=( Sorcerer const & rhs )
{
  if (this != &rhs)
  {
    this->_name = rhs.getName();
    this->_title = rhs.getTitle();
  }
  return *this;
}

std::string Sorcerer::getName() const
{
  return this->_name;
}

std::string Sorcerer::getTitle() const
{
  return this->_title;
}

void Sorcerer::polymorph( Victim const & target ) const
{
  target.getPolymorphed();
}
