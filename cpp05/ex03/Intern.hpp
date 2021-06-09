/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 20:02:18 by dchampda          #+#    #+#             */
/*   Updated: 2021/05/04 20:02:19 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
public:
  Intern();
  Intern( Intern const & src );
  ~Intern();

  Intern & operator=( Intern const & rhs );
  Form* makeForm( std::string name, std::string target );

  class UnknownFormException : public std::exception
  {
    public:
      virtual const char* what() const throw();
  };

};

#endif
