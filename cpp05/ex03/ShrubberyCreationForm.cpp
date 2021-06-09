/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 18:43:10 by dchampda          #+#    #+#             */
/*   Updated: 2021/05/03 18:43:11 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string const & target ) :
  Form(target, 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src ) :
  Form(src.getName(), 145, 137)
{
    *this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


ShrubberyCreationForm & ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
  (void)rhs;
  return *this;
}

void ShrubberyCreationForm::execute( Bureaucrat const & executor ) const
{
  std::string name;
  name = this->getName() + "_shrubbery";

  if (this->checkExec(executor))
  {
    std::ofstream file;
    file.open(name.c_str(), std::ofstream::out | std::ofstream::app);
    if (!file.is_open())
    {
      throw ShrubberyCreationForm::CantOpenFileException();
    }
    file << "                                " << std::endl;
    file << "             ,@@@@@@@,             " << std::endl;
    file << "     ,,,.   ,@@@@@@/@@,  .oo8888o. " << std::endl;
    file << "  ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o " << std::endl;
    file << " ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88' " << std::endl;
    file << " %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888' " << std::endl;
    file << " %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88' " << std::endl;
    file << " `&%\\ ` /%&'    |.|        \\ '|8' " << std::endl;
    file << "     |o|        | |         | | " << std::endl;
    file << "     |.|        | |         | | " << std::endl;
    file << "  \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_ " << std::endl;
    file.close();
  }
}

const char* ShrubberyCreationForm::CantOpenFileException::what() const throw()
{
  return ("Can't open file");
}
