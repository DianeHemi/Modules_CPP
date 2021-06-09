/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 11:19:13 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/16 11:19:14 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim {
public:
  Victim( std::string name );
  Victim( Victim const & src );
  virtual ~Victim();

  Victim & operator=( Victim const & rhs );
  virtual void getPolymorphed() const;
  std::string getName() const;

private:
  Victim();

protected:
  std::string _name;
};

std::ostream &  operator<<( std::ostream & o, Victim const & rhs );

#endif
