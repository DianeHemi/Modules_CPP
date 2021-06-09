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
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
  std::cout << "\nCreating a few bureaucrats :" << std::endl;
  Bureaucrat panoramix("Panoramix", 1);
  Bureaucrat asterix("Asterix", 72);
  Bureaucrat obelix("Obelix", 150);
  std::cout << panoramix  << asterix << obelix << std::endl;

  std::cout << "Creating a few forms and trying to execute them :" << std::endl;
  ShrubberyCreationForm shrub("Garden");
  RobotomyRequestForm robot("Sarah Connor");
  PresidentialPardonForm pardon("Hannibal");

  try
  {
    obelix.signForm(shrub);
    obelix.executeForm(shrub);
  }
  catch(std::exception & e)
  {
    std::cerr << e.what()<< std::endl;
  }
  std::cout << std::endl;
  try
  {
    asterix.signForm(shrub);
    asterix.executeForm(shrub);
    asterix.signForm(robot);
    asterix.executeForm(robot);
  }
  catch(std::exception & e)
  {
    std::cerr << e.what() << std::endl;
  }
  std::cout << std::endl;
  try
  {
    panoramix.executeForm(robot);
    std::cout << std::endl;
    panoramix.executeForm(pardon);
    panoramix.signForm(pardon);
    panoramix.executeForm(pardon);
  }
  catch(std::exception & e)
  {
    std::cerr << e.what() << std::endl;
  }


  return 0;
}
