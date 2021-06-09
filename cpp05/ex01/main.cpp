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
#include "Form.hpp"

int main()
{
  std::cout << "\nCreating a few bureaucrats :" << std::endl;
  Bureaucrat panoramix("Panoramix", 1);
  Bureaucrat asterix("Asterix", 25);
  Bureaucrat obelix("Obelix", 150);
  std::cout << panoramix  << asterix << obelix << std::endl;

  std::cout << "Trying to create a form requiring a lvl 160 to be signed :" << std::endl;
  try
  {
    Form test("test", 160, 1);
  }
  catch(std::exception & e)
  {
    std::cout << e.what() << std::endl;
  }
  std::cout << "Trying to create a form requiring a lvl -10 to be executed :" << std::endl;
  try
  {
    Form test("test", 25, -10);
  }
  catch(std::exception & e)
  {
    std::cout << e.what() << std::endl;
  }

  std::cout << "\nCreating a few legit forms :" << std::endl;
  Form a38("a38", 1, 1);
  Form b42("b42", 50, 25);
  std::cout << a38 << b42 << std::endl;

  std::cout << "Trying to sign the forms :" << std::endl;
  try
  {
    asterix.signForm(a38);
  }
  catch(std::exception & e)
  {
    std::cout << e.what() << std::endl;
  }
  try
  {
    obelix.signForm(a38);
  }
  catch(std::exception & e)
  {
    std::cout << e.what() << std::endl;
  }
  try
  {
    panoramix.signForm(a38);
  }
  catch(std::exception & e)
  {
    std::cout << e.what() << std::endl;
  }
  
  obelix.signForm(b42);
  asterix.signForm(b42);
  panoramix.signForm(b42);
  std::cout << "\n" << a38 << b42 << std::endl;

  return 0;
}
