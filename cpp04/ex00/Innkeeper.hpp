/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Innkeeper.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 11:49:36 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/20 11:49:37 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INNKEEPER_HPP
# define INNKEEPER_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Innkeeper : public Victim {
public:
  Innkeeper();
  Innkeeper( std::string name );
  Innkeeper( Innkeeper const & src );
  virtual ~Innkeeper();

  Innkeeper & operator=( Innkeeper const & rhs );
  virtual void getPolymorphed() const;

private:
};


#endif
