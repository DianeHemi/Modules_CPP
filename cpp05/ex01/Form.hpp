/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 17:45:30 by dchampda          #+#    #+#             */
/*   Updated: 2021/05/03 17:45:31 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
  std::string const _name;
  bool              _signed;
  int const         _signGrade;
  int const         _execGrade;


public:
  Form();
  Form( std::string const & name, int const signGrade, int const execGrade );
  Form( Form const & src );
  ~Form();

  Form & operator=( Form const & rhs );
  std::string const & getName() const;
  bool       getSignedStatus() const;
  int        getSignGrade() const;
  int        getExecGrade() const;
  void       beSigned( Bureaucrat const & bureaucrat );


  class GradeTooHighException : public std::exception
  {
    public:
      virtual const char* what() const throw();
  };
  class GradeTooLowException : public std::exception
  {
    public:
      virtual const char* what() const throw();
  };

};

std::ostream & operator<<( std::ostream & o, Form const & rhs );

#endif
