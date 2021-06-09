/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:30:39 by dchampda          #+#    #+#             */
/*   Updated: 2021/05/21 14:30:41 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
  std::cout << "**--- Main fourni ---**" << std::endl;
  Span sp = Span(5);
  sp.addNumber(5);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);
  std::cout << sp.shortestSpan() << std::endl;
  std::cout << sp.longestSpan() << std::endl;


  std::cout << "\n**--- Main perso ---**" << std::endl;
  Span sp2(12);

  std::cout << "Trying to add too many numbers :" << std::endl;
  try{
    sp2.addNumber(2, 26);
  }
  catch(std::exception & e){
    std::cout << e.what() << std::endl;
  }
  std::cout << "\nTrying to get the shortest span of an empty span :" << std::endl;
  try{
    sp2.shortestSpan();
  }
  catch(std::exception & e){
    std::cout << e.what() << std::endl;
  }
  std::cout << "\nTrying to get the longest span of an empty span :" << std::endl;
  try{
    sp2.longestSpan();
  }
  catch(std::exception & e){
    std::cout << e.what() << std::endl;
  }

  std::cout << "\nAdding range 24-12 in the array and searching spans :" << std::endl;
  sp2.addNumber(24, 12);
  std::cout << sp2.shortestSpan() << std::endl;
  std::cout << sp2.longestSpan() << std::endl;

  return 0;
}
