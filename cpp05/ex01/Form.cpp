/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 17:45:25 by dchampda          #+#    #+#             */
/*   Updated: 2021/05/03 17:45:26 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name(""), _signed(false), _signGrade(150), _execGrade(150)
{
}

Form::Form( std::string const & name, int const signGrade, int const execGrade ) :
  _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{
  if (signGrade <= 0 || execGrade <= 0)
    throw Form::GradeTooHighException();
  else if (signGrade > 150 || execGrade > 150)
    throw Form::GradeTooLowException();
}

Form::Form( Form const & src ) :
  _name(src.getName()), _signGrade(src.getSignGrade()), _execGrade(src.getExecGrade())
{
    *this = src;
}

Form::~Form()
{
}


Form & Form::operator=( Form const & rhs )
{
  if (this != &rhs)
  {
    this->_signed = rhs.getSignedStatus();
  }
  return *this;
}

std::string const & Form::getName() const
{
  return this->_name;
}

bool Form::getSignedStatus() const
{
  return this->_signed;
}

int Form::getSignGrade() const
{
  return this->_signGrade;
}

int Form::getExecGrade() const
{
  return this->_execGrade;
}

void Form::beSigned( Bureaucrat const & bureaucrat )
{
  if (bureaucrat.getGrade() <= this->getSignGrade())
    this->_signed = true;
  else
    throw Form::GradeTooLowException();
}

std::ostream & operator<<( std::ostream & o, Form const & rhs )
{
  std::string status = rhs.getSignedStatus() ? "signed" : "unsigned";

  o << rhs.getName() << " form requires a grade " << rhs.getSignGrade() \
    << " to be signed, and a grade " << rhs.getExecGrade() << " to be executed." \
    << " The form is " << status << std::endl;
  return o;
}

const char* Form::GradeTooHighException::what() const throw()
{
  return ("This form requires a lower grade");
}

const char* Form::GradeTooLowException::what() const throw()
{
  return ("This form requires a higher grade");
}
