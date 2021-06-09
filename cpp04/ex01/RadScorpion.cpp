/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:08:10 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/20 12:08:12 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

/*
  Constructor, destructor
*/
RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
  std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion( RadScorpion const & src )
{
  *this = src;
  std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
  std::cout << "* SPROTCH *" << std::endl;
}

/*
  Functions
*/
RadScorpion & RadScorpion::operator=( RadScorpion const & rhs )
{
  if (this != &rhs)
  {
    this->_type = rhs.getType();
    this->_hp = rhs.getHP();
  }
  return *this;
}
