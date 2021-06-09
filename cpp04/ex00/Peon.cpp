/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 11:19:29 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/16 11:19:30 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

/*
  Constructor, destructor
*/
Peon::Peon( void ) : Victim("")
{
  std::cout << "Zog zog." << std::endl;
}

Peon::Peon( std::string name )
  : Victim(name)
{
  std::cout << "Zog zog." << std::endl;
}

Peon::Peon( Peon const & src ) : Victim(src.getName())
{
  *this = src;
  std::cout << "Zog zog." << std::endl;
}

Peon::~Peon( void )
{
  std::cout << "Bleuark..." << std::endl;
}

/*
  Functions
*/
Peon & Peon::operator=( Peon const & rhs )
{
  if (this != &rhs)
    this->_name = rhs.getName();
  return *this;
}

void Peon::getPolymorphed( void ) const
{
  std::cout << this->_name << " has been turned into a pink pony !" \
    << std::endl;
}
