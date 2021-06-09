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
#include "Intern.hpp"

int main()
{
  std::cout << "\nCreating a few bureaucrats :" << std::endl;
  Bureaucrat panoramix("Panoramix", 1);
  Bureaucrat asterix("Asterix", 72);
  Bureaucrat obelix("Obelix", 150);
  std::cout << panoramix  << asterix << obelix << std::endl;

  Intern intern;
  std::cout << "Creating a form with a wrong type :" << std::endl;
  Form* wrong;
  try
  {
    wrong = intern.makeForm("wrong request", "Error");
  }
  catch(std::exception & e)
  {
    std::cerr << e.what() << std::endl;
  }

  std::cout << "\nCreating a few forms :" << std::endl;
  Form*  shrub;
  Form*  robot;
  Form*  pardon;
  try
  {
    shrub = intern.makeForm("shrubbery request", "Forest");
    robot = intern.makeForm("robotomy request", "Numerobis");
    pardon = intern.makeForm("presidential pardon request", "Batman");
  }
  catch(std::exception & e)
  {
    std::cerr << e.what() << std::endl;
  }

  std::cout << "\nTrying to sign and execute the forms :" << std::endl;
  try
  {
    obelix.signForm(*shrub);
    obelix.executeForm(*shrub);
  }
  catch(std::exception & e)
  {
    std::cerr << e.what()<< std::endl;
  }
  std::cout << std::endl;
  try
  {
    asterix.signForm(*shrub);
    asterix.executeForm(*shrub);
    asterix.signForm(*robot);
    asterix.executeForm(*robot);
  }
  catch(std::exception & e)
  {
    std::cerr << e.what() << std::endl;
  }
  std::cout << std::endl;
  try
  {
    panoramix.executeForm(*robot);
    std::cout << std::endl;
    panoramix.executeForm(*pardon);
    panoramix.signForm(*pardon);
    panoramix.executeForm(*pardon);
  }
  catch(std::exception & e)
  {
    std::cerr << e.what() << std::endl;
  }


  return 0;
}
