/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 11:44:28 by dchampda          #+#    #+#             */
/*   Updated: 2021/05/20 11:44:29 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){}

Span::Span( unsigned int n ) : _n(n){}

Span::Span( Span const & src )
{
  *this = src;
}

Span::~Span(){}

Span & Span::operator=( Span const & rhs )
{
  if (this != &rhs)
  {
    this->_n = rhs._n;
    this->_storage = rhs._storage;
  }
  return *this;
}

void Span::addNumber( int nb )
{
  if (this->_storage.size() <= this->_n)
    this->_storage.push_back(nb);
  else
    throw FullStorageException();
}

void Span::addNumber( int start, int end )
{
  if (end < start)
  {
    if (this->_n >= (start - end))
    {
      for (int i = start; i >= end; i--)
        this->_storage.push_back(i);
    }
    else
      throw FullStorageException();
  }
  else if (this->_n >= (end - start))
  {
    for (int i = start; i <= end; i++)
      this->_storage.push_back(i);
  }
  else
    throw FullStorageException();
}

int Span::shortestSpan()
{
  if (this->_storage.size() < 2)
    throw EmptyStorageException();
  std::sort(this->_storage.begin(), this->_storage.end());
  return (this->_storage[1] - this->_storage[0]);
}
/*
int Span::shortestSpan()
{
  if (this->_storage.size() < 2)
    throw EmptyStorageException();
  std::sort(this->_storage.begin(), this->_storage.end());

  int first = INT_MAX;
  int second = INT_MAX;
  int size = this->_storage.size();

  for (int i = 0; i < size; i++)
  {
    if (this->_storage[i] < first)
    {
      second = first;
      first = this->_storage[i];
    }
    if (this->_storage[i] < second && this->_storage[i] != first)
      second = this->_storage[i];
  }
  return (second - first);
}*/


int Span::longestSpan()
{
  if (this->_storage.size() < 2)
    throw EmptyStorageException();
  return (*std::max_element(this->_storage.begin(), this->_storage.end())
    - *std::min_element(this->_storage.begin(), this->_storage.end()));
}

const char* Span::EmptyStorageException::what() const throw()
{
  return ("Error : Not enough number to find a span");
}

const char* Span::FullStorageException::what() const throw()
{
  return ("Error : Not enough space to add a number");
}
