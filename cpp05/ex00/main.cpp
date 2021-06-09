/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:40:53 by dchampda          #+#    #+#             */
/*   Updated: 2021/05/03 14:40:54 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
  std::cout << "Trying to create a lvl -1 bureaucrat :" << std::endl;
  try
  {
    Bureaucrat a("a", -1);
  }
  catch(std::exception & e)
  {
    std::cout << e.what() << std::endl;
  }

  std::cout << "\nTrying to create a lvl 161 bureaucrat :" << std::endl;
  try
  {
    Bureaucrat b("b", 161);
  }
  catch(std::exception & e)
  {
    std::cout << e.what() << std::endl;
  }

  std::cout << "\nTrying to create a few bureaucrats :" << std::endl;
  Bureaucrat panoramix("Panoramix", 1);
  Bureaucrat asterix("Asterix", 25);
  Bureaucrat obelix("Obelix", 150);
  std::cout << panoramix  << asterix << obelix << std::endl;

  std::cout << "Trying to increment Panoramix's grade :" << std::endl;
  try
  {
    panoramix.incGrade();
  }
  catch(std::exception & e)
  {
    std::cout << e.what() << std::endl;
    std::cout << panoramix << std::endl;
  }
  std::cout << "Trying to decrement Obelix's grade :" << std::endl;
  try
  {
    obelix.decGrade();
  }
  catch(std::exception & e)
  {
    std::cout << e.what() << std::endl;
    std::cout << obelix << std::endl;
  }
  std::cout << "Trying to increment Asterix's grade :" << std::endl;
  asterix.incGrade();
  std::cout << asterix << std::endl;
  std::cout << "Trying to increment Obelix's grade up to 1 with a for loop:" << std::endl;
  try
  {
    for (int i = 0; i < 149; i++)
      obelix.incGrade();
  }
  catch(std::exception & e)
  {
    std::cout << e.what() << std::endl;
  }
  std::cout << obelix << std::endl;

  return 0;
}
