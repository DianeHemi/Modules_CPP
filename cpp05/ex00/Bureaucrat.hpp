/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:40:41 by dchampda          #+#    #+#             */
/*   Updated: 2021/05/03 14:40:43 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

class Bureaucrat {
private:
  std::string const _name;
  int               _grade;

public:
  Bureaucrat();
  Bureaucrat( std::string const & name, int grade );
  Bureaucrat( Bureaucrat const & src );
  ~Bureaucrat();

  Bureaucrat & operator=( Bureaucrat const & rhs );
  std::string const & getName() const;
  int        getGrade() const;
  void incGrade();
  void decGrade();

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

std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs );

#endif
