/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 15:20:32 by dchampda          #+#    #+#             */
/*   Updated: 2021/05/19 15:20:33 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template<typename T>
class Array{
public:
  Array() : _n(0), _array(NULL){}
  Array( unsigned int n ) : _n(n), _array(new T[n]){}
  Array( Array<T> const & src )
  {
    if (this->_array)
      delete [] this->_array;
    this->_nb = src.size();
    if (this->_nb == 0)
      this->_array = NULL;
    else
      this->_array = new T[this->_nb];
    for (int i = 0; i < this->_n; i++)
      this->_array[i] = src._array[i];
  }
  ~Array()
  {
    if (this->_array)
      delete [] this->_array;
  }

  Array<T> & operator=( Array<T> const & rhs )
  {
    if (*this != rhs)
    {
      if (this->_array)
        delete [] this->_array;
      this->_nb = rhs.size();
      if (this->_nb == 0)
        this->_array = NULL;
      else
        this->_array = new T[this->_nb];
      for (int i = 0; i < this->_n; i++)
        this->_array[i] = rhs._array[i];
    }
    return *this;
  }

  int size() const { return this->_n; }

  T & operator[]( int n )
  {
    if (!this->_array || n > this->_n || n < 0)
      throw Array<T>::OutOfRangeException();
    return _array[n];
  }

  class OutOfRangeException : public std::exception
  {
    public:
      virtual const char* what() const throw()
      {
        return ("Error : Out of range index");
      }
  };

private:
  unsigned int  _n;
  T*            _array;
};

#endif
