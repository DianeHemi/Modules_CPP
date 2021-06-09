/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 12:31:20 by dchampda          #+#    #+#             */
/*   Updated: 2021/05/07 12:31:21 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion() {}

Conversion::Conversion( std::string str ) :
  _isNaN(false), _isInf(false), _isNeg(false)
{
  for (int i = 0; str[i]; i++)
  {
    str[i] = std::tolower(str[i]);
    if (!isprint(str[i]))
      throw Conversion::NotPrintableException();
  }

  if (str.find("inf") < str.length())
    this->_isInf = true;
  if (str[0] == '-')
    this->_isNeg = true;
  if (str.find("nan") < str.length())
    this->_isNaN = true;

  this->_d = strtod(str.c_str(), NULL);
}

Conversion::Conversion ( Conversion const & src )
{
  *this = src;
}

Conversion::~Conversion() {}

Conversion & Conversion::operator=( Conversion const & rhs )
{
  this->_d = rhs.getDouble();
  return *this;
}

void Conversion::printChar() const
{
  if (this->_isNaN || this->_isInf || this->_d < CHAR_MIN
      || this->_d > CHAR_MAX)
    std::cout << "Char : Impossible" << std::endl;
  else if (isprint(static_cast<char>(this->_d)))
    std::cout << "Char : " << static_cast<char>(this->_d) << std::endl;
  else
    std::cout << "Char : Non-displayable" << std::endl;
}

void Conversion::printInt() const
{
  if (!this->_isNaN && this->_d > INT_MIN
  && this->_d < INT_MAX && !this->_isInf)
    std::cout << "Int : " << static_cast<int>(this->_d) << std::endl;
  else
    std::cout << "Int : Impossible" << std::endl;
}

void Conversion::printFloat() const
{
  if (this->_isInf || this->_isNaN)
    std::cout << "Float : " << static_cast<float>(this->_d) << "f" << std::endl;
  else if (this->_d == 0 || std::abs(floor(this->_d)) == this->_d)
    std::cout << "Float : " << static_cast<float>(this->_d) << ".0f" << std::endl;
  else if (static_cast<float>(this->_d))
    std::cout << "Float : " << static_cast<float>(this->_d) << "f" << std::endl;
  else
    std::cout << "Float : Impossible" << std::endl;
}

void Conversion::printDouble() const
{
  if (this->_isInf || this->_isNaN)
    std::cout << "Double : " << static_cast<float>(this->_d) << std::endl;
    else if (this->_d == 0 || std::abs(floor(this->_d)) == this->_d)
      std::cout << "Double : " << static_cast<double>(this->_d) << ".0" << std::endl;
  else if (static_cast<double>(this->_d))
    std::cout << "Double : " << static_cast<double>(this->_d) << std::endl;
  else
    std::cout << "Double : Impossible" << std::endl;
}

double Conversion::getDouble( ) const
{
  return this->_d;
}


const char* Conversion::NotPrintableException::what() const throw()
{
  return ("Error : Unprintable characters in the string");
}
