/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 18:43:06 by dchampda          #+#    #+#             */
/*   Updated: 2021/05/03 18:43:07 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <string>
# include <iostream>
# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
  ShrubberyCreationForm();

public:
  ShrubberyCreationForm( std::string const & target );
  ShrubberyCreationForm( ShrubberyCreationForm const & src );
  virtual ~ShrubberyCreationForm();

  ShrubberyCreationForm & operator=( ShrubberyCreationForm const & rhs );
  void execute( Bureaucrat const & executor ) const;

  class CantOpenFileException : public std::exception
  {
    virtual const char* what() const throw();
  };
};

#endif
