/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 16:25:14 by dchampda          #+#    #+#             */
/*   Updated: 2021/05/18 16:25:15 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <cfloat>
#include <cmath>

int main()
{
  std::cout << "**-- Main fourni --**" << std::endl;
  int a = 2;
  int b = 3;

  ::swap( a, b );
  std::cout << "a = " << a << ", b = " << b << std::endl;
  std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
  std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

  std::string c = "chaine1";
  std::string d = "chaine2";

  ::swap(c, d);
  std::cout << "\nc = " << c << ", d = " << d << std::endl;
  std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
  std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

  std::cout << "\n**-- Tests de float et double --**" << std::endl;
  float e = 3.12f;
  float f = 895.1f;

  ::swap<float>( e, f );
  std::cout << "e = " << e << ", f = " << f << std::endl;
  std::cout << "min( e, f ) = " << ::min<float>( e, f ) << std::endl;
  std::cout << "max( e, f ) = " << ::max<float>( e, f ) << std::endl;

  double g = INFINITY;
  double h = -INFINITY;

  ::swap<double>( g, h );
  std::cout << "\ng = " << g << ", h = " << h << std::endl;
  std::cout << "min( g, h ) = " << ::min<double>( g, h ) << std::endl;
  std::cout << "max( g, h ) = " << ::max<double>( g, h ) << std::endl;

  std::cout << "\n**-- Tests de char et unsigned --**" << std::endl;
  char cz = 'z';
  char co = 'o';

  ::swap<char>( cz, co );
  std::cout << "cz = " << cz << ", co = " << co << std::endl;
  std::cout << "min( cz, co ) = " << ::min<char>( cz, co ) << std::endl;
  std::cout << "max( cz, co ) = " << ::max<char>( cz, co ) << std::endl;

  unsigned int ua = 0;
  unsigned int ub = 158;

  ::swap<unsigned int>( ua, ub );
  std::cout << "\nua = " << ua << ", ub = " << ub << std::endl;
  std::cout << "min( ua, ub ) = " << ::min<unsigned int>( ua, ub ) << std::endl;
  std::cout << "max( ua, ub ) = " << ::max<unsigned int>( ua, ub ) << std::endl;

  return 0;
}
