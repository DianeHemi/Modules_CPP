/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:40:47 by dchampda          #+#    #+#             */
/*   Updated: 2021/05/03 14:40:48 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name(""), _grade(150)
{
}

Bureaucrat::Bureaucrat( std::string const & name, int grade ) :
  _name(name), _grade(grade)
{
  if (grade <= 0)
    throw Bureaucrat::GradeTooHighException();
  else if (grade > 150)
    throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat( Bureaucrat const & src )
{
    *this = src;
}

Bureaucrat::~Bureaucrat()
{
}


Bureaucrat & Bureaucrat::operator=( Bureaucrat const & rhs )
{
  if (this != &rhs)
    this->_grade = rhs.getGrade();
  return *this;
}

std::string const & Bureaucrat::getName() const
{
  return this->_name;
}

int Bureaucrat::getGrade() const
{
  return this->_grade;
}

void Bureaucrat::incGrade()
{
  if (_grade - 1 < 1)
    throw Bureaucrat::GradeTooHighException();
  else
    _grade -= 1;
}

void Bureaucrat::decGrade()
{
  if (_grade + 1 > 150)
    throw Bureaucrat::GradeTooLowException();
  else
    _grade += 1;
}

void Bureaucrat::signForm( Form & form ) const
{
  if (form.getSignedStatus() == true)
  {
    std::cout << this->_name << " can't sign " << form.getName() << " because " \
      << "it's already signed" << std::endl;
    return ;
  }
  try
  {
    form.beSigned(*this);
    std::cout << this->_name << " signs " << form.getName() << std::endl;
  }
  catch(std::exception & e)
  {
    std::cout << this->_name << " can't sign " << form.getName() << " because " \
    << e.what() << std::endl;
  }
}

std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs )
{
  o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() \
    << "." << std::endl;
  return o;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
  return ("Error : Grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
  return ("Error : Grade is too low");
}
