/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 20:02:23 by dchampda          #+#    #+#             */
/*   Updated: 2021/05/04 20:02:24 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{}

Intern::Intern( Intern const & src )
{
  *this = src;
}

Intern::~Intern()
{}

Intern & Intern::operator=( Intern const & rhs )
{
  (void)rhs;
  return *this;
}

Form* Intern::makeForm( std::string name, std::string target )
{
  std::string type[3]{"shrubbery request", "robotomy request",
    "presidential pardon request"};
  Form* forms[3]{new ShrubberyCreationForm(target), new RobotomyRequestForm(target),
    new PresidentialPardonForm(target)};

    for(int i = 0; i < 3; i++)
    {
      if (name == type[i])
      {
        std::cout << "Intern creates " << name << std::endl;
        return forms[i];
      }
    }
    throw Intern::UnknownFormException();
}

const char* Intern::UnknownFormException::what() const throw()
{
  return ("Error : Unknown form type");
}
