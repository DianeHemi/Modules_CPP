/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 12:31:31 by dchampda          #+#    #+#             */
/*   Updated: 2021/05/07 12:31:32 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
  if (argc == 2 && argv[1][0] != '\0')
  {
    std::string str = argv[1];
    Conversion convert(str);
    try
    {
      convert.printChar();
      convert.printInt();
      convert.printFloat();
      convert.printDouble();
    }
    catch(std::exception & e)
    {
      std::cerr << e.what() << std::endl;
    }
  }
  else
    std::cout << "Usage : ./convert arg" << std::endl;
  return 0;
}
