/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 11:19:23 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/16 11:19:24 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Peon : public Victim {
public:
  Peon();
  Peon( std::string name );
  Peon( Peon const & src );
  virtual ~Peon();

  Peon & operator=( Peon const & rhs );
  virtual void getPolymorphed() const;

private:
};


#endif
