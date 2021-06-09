/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 11:19:38 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/16 11:19:39 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Innkeeper.hpp"

int main( void )
{
  Sorcerer robert("Robert", "the Magnificent");

  Victim jim("Jimmy");
  Peon joe("Joe");
  Innkeeper gimli("Gimli");

  std::cout << std::endl;
  std::cout << robert << jim << joe << gimli;
  std::cout << std::endl;

  robert.polymorph(jim);
  robert.polymorph(joe);
  robert.polymorph(gimli);
  std::cout << std::endl;

  return 0;
}
