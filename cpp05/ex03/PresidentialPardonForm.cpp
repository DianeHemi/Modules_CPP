/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 18:43:38 by dchampda          #+#    #+#             */
/*   Updated: 2021/05/03 18:43:38 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm( std::string const & target ) :
  Form(target, 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src ) :
  Form(src.getName(), 25, 5)
{
    *this = src;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}


PresidentialPardonForm & PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
  (void)rhs;
  return *this;
}

void PresidentialPardonForm::execute( Bureaucrat const & executor ) const
{
  if (this->checkExec(executor))
  {
    std::cout << this->getName() << " has been pardonned by Zafod Beeblebrox" \
      << ". That's one lucky bastard !" << std::endl;
  }
}
