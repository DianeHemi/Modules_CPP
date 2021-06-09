/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 18:43:27 by dchampda          #+#    #+#             */
/*   Updated: 2021/05/03 18:43:28 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <string>
# include <iostream>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
  RobotomyRequestForm();
public:
  RobotomyRequestForm( std::string const & target );
  RobotomyRequestForm( RobotomyRequestForm const & src );
  virtual ~RobotomyRequestForm();

  RobotomyRequestForm & operator=( RobotomyRequestForm const & rhs );
  void execute( Bureaucrat const & executor ) const;
};

#endif
