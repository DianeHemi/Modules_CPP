/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 18:43:24 by dchampda          #+#    #+#             */
/*   Updated: 2021/05/03 18:43:24 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm( std::string const & target ) :
  Form(target, 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src ) :
  Form(src.getName(), 72, 45)
{
    *this = src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}


RobotomyRequestForm & RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
  (void)rhs;
  return *this;
}

void RobotomyRequestForm::execute( Bureaucrat const & executor ) const
{
  if (this->checkExec(executor))
  {
    std::cout << "* drilling noises *" << std::endl;
    if (rand() % 2 == 1)
      std::cout << this->getName() << " was successfully robotomized !" << std::endl;
    else
      std::cout << this->getName() << " robotomization failed..." << std::endl;
  }
}
