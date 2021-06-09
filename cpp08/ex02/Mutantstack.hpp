/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 11:44:49 by dchampda          #+#    #+#             */
/*   Updated: 2021/05/20 11:44:50 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
  public:
    //typename necessary for template. It clarify that we are using a type
    //container_type = underlying container. deque by default
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

    MutantStack(){}
    MutantStack( MutantStack<T> const & src ){ *this = src; }
    virtual ~MutantStack(){}

    MutantStack<T> & operator=( MutantStack<T> const & rhs )
    {
      if (this != &rhs)
        this->c = rhs.c;
      return *this;
    }

    //c = protected underlying container of stack
    iterator begin(){
      return this->c.begin();
    }
    iterator end(){
      return this->c.end();
    }
    reverse_iterator rbegin(){
      return this->c.rbegin();
    }
    reverse_iterator rend(){
      return this->c.rend();
    }
};


#endif
