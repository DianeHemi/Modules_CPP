/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 18:28:40 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/20 18:28:42 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

/*
  Constructor, destructor
*/
TacticalMarine::TacticalMarine()
{
  std::cout << "Tactical Marine ready for battle !" << std::endl;
}

TacticalMarine::TacticalMarine( TacticalMarine const & src )
{
  *this = src;
  std::cout << "Tactical Marine ready for battle !" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
  std::cout << "Aaargh..." << std::endl;
}

/*
  Functions
*/
TacticalMarine & TacticalMarine::operator=( TacticalMarine const & rhs )
{
  (void)rhs;
  return *this;
}

TacticalMarine* TacticalMarine::clone() const
{
  TacticalMarine* marine = new TacticalMarine(*this);
  return marine;
}

void TacticalMarine::battleCry() const
{
  std::cout << "For the holy PLOT !" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
  std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
  std::cout << "* attacks with a chainsword *" << std::endl;
}
