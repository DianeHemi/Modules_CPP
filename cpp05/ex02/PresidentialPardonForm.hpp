/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 18:43:41 by dchampda          #+#    #+#             */
/*   Updated: 2021/05/03 18:43:43 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <string>
# include <iostream>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
  PresidentialPardonForm();
public:
  PresidentialPardonForm( std::string const & target );
  PresidentialPardonForm( PresidentialPardonForm const & src );
  virtual ~PresidentialPardonForm();

  PresidentialPardonForm & operator=( PresidentialPardonForm const & rhs );
  void execute( Bureaucrat const & executor ) const;
};

#endif
