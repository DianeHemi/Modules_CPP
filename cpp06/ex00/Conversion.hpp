/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 12:31:24 by dchampda          #+#    #+#             */
/*   Updated: 2021/05/07 12:31:25 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <string>

# include <cstdlib>
# include <cmath>
# include <climits>

class Conversion
{
private:
  Conversion();

  double  _d;
  bool    _isNaN;
  bool    _isInf;
  bool    _isNeg;

public:
  Conversion( std::string str );
  Conversion( Conversion const & src );
  ~Conversion();

  Conversion & operator=( Conversion const & rhs );
  void printChar() const;
  void printInt() const;
  void printFloat() const;
  void printDouble() const;

  double getDouble() const;

  class NotPrintableException : std::exception{
  public:
    virtual const char* what() const throw();
  };
};

#endif
