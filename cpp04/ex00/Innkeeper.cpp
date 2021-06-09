/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Innkeeper.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 11:49:30 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/20 11:49:31 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Innkeeper.hpp"

/*
  Constructor, destructor
*/
Innkeeper::Innkeeper( void ) : Victim("")
{
  std::cout << "Welcome to my inn !" << std::endl;
}

Innkeeper::Innkeeper( std::string name )
  : Victim(name)
{
  std::cout << "Welcome to my inn !" << std::endl;
}

Innkeeper::Innkeeper( Innkeeper const & src ) : Victim(src.getName())
{
  *this = src;
  std::cout << "Welcome to my inn !" << std::endl;
}

Innkeeper & Innkeeper::operator=( Innkeeper const & rhs )
{
  if (this != &rhs)
    this->_name = rhs.getName();
  return *this;
}

Innkeeper::~Innkeeper( void )
{
  std::cout << "My ale..." << std::endl;
}

/*
  Functions
*/
void Innkeeper::getPolymorphed( void ) const
{
  std::cout << this->_name \
    << " the innkeeper has been turned into a kitten !" << std::endl;
}
