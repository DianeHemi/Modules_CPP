/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 18:28:23 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/20 18:28:24 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include <string>
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

typedef struct s_list
{
  ISpaceMarine  *marine;
  s_list        *next;
}             t_list;

class Squad : public ISquad {
  public:
    Squad();
    Squad( Squad const & src );
    virtual ~Squad();

    Squad & operator=( Squad const & rhs );
    void  setCount( int count );
    int   getCount() const;
    ISpaceMarine* getUnit(int) const;
    int push(ISpaceMarine*);

  private:
    t_list*   _head;
    int       _count;
    t_list*   addMarine( ISpaceMarine* marine );
    void      deleteList();  
};

#endif
