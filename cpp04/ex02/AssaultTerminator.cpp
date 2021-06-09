/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 18:28:53 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/20 18:28:54 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

/*
  Constructor, destructor
*/
AssaultTerminator::AssaultTerminator()
{
  std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator( AssaultTerminator const & src )
{
  *this = src;
  std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
  std::cout << "I’ll be back..." << std::endl;
}

/*
  Functions
*/
AssaultTerminator & AssaultTerminator::operator=( AssaultTerminator const & rhs )
{
  (void)rhs;
  return *this;
}

AssaultTerminator* AssaultTerminator::clone() const
{
  AssaultTerminator* terminator = new AssaultTerminator(*this);
  return terminator;
}

void AssaultTerminator::battleCry() const
{
  std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
  std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
  std::cout << "* attacks with chainfists *" << std::endl;
}
