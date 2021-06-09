/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 11:18:59 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/16 11:19:01 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Sorcerer {
public:
  Sorcerer( std:: string name, std::string title );
  Sorcerer( Sorcerer const & src );
  ~Sorcerer();

  Sorcerer & operator=( Sorcerer const & rhs );
  void polymorph( Victim const & target ) const;
  std::string getName() const;
  std::string getTitle() const;

private:
  Sorcerer();

  std::string _name;
  std::string _title;
};

std::ostream &  operator<<( std::ostream & o, Sorcerer const & rhs );

#endif
