/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 11:44:32 by dchampda          #+#    #+#             */
/*   Updated: 2021/05/20 11:44:32 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <climits>

class Span
{
  private:
    Span();
    unsigned int  _n;
    std::vector<int>   _storage;

  public:
    Span( unsigned int n );
    Span( Span const & src );
    ~Span();

    Span & operator=( Span const & rhs );
    void addNumber( int nb );
    void addNumber( int start, int end );
    int shortestSpan();
    int longestSpan();

    class EmptyStorageException : public std::exception
    {
      public:
        virtual const char* what() const throw();
    };
    class FullStorageException : public std::exception
    {
      public:
        virtual const char* what() const throw();
    };
};


#endif
