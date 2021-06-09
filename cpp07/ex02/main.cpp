/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 15:20:39 by dchampda          #+#    #+#             */
/*   Updated: 2021/05/19 15:20:40 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

void ints()
{
  std::cout << "**--- Testing with ints ---**" << std::endl;
  Array<int> a;
  Array<int> b(2);
  Array<int> c(8);

  std::cout << "Array vide - Nb d'éléments : " << a.size() << std::endl;

  std::cout << "\nArray de 2 - Nb d'éléments : " << b.size() << std::endl;
  std::cout << "Remplissage de l'array et affichage des variables : " << std::endl;
  for (int i = 0; i < 2; i++)
  {
    b[i] = i;
    std::cout << b[i] << std::endl;
  }

  std::cout << "\nArray de 8 - Nb d'éléments : " << c.size() << std::endl;
  std::cout << "Remplissage de l'array et affichage des variables : " << std::endl;
  for (int i = 0; i < 8; i++)
  {
    c[i] = i * i;
    std::cout << c[i] << std::endl;
  }

  std::cout << "Testing a call to out of range index : " << std::endl;
  try
  {
    std::cout << c[9] << std::endl;
  }
  catch(std::exception & e)
  {
    std::cout << e.what() << std::endl;
  }
}

void chars()
{
  std::cout << "\n**--- Testing with chars ---**" << std::endl;
  Array<char> d;
  Array<char> e(5);

  std::cout << "Array vide - Nb d'éléments : " << d.size() << std::endl;

  std::cout << "\nArray de 5 - Nb d'éléments : " << e.size() << std::endl;
  std::cout << "Remplissage de l'array et affichage des variables " << std::endl;
  for (int i = 0; i < 5; i++)
  {
    e[i] = i + 60;
    std::cout << e[i] << std::endl;
  }
  std::cout << "Changing manually array[2] to 'c' : " << std::endl;
  e[2] = 'c';
  std::cout << e[2] << std::endl;

  std::cout << "\nTesting a call to out of range index (-1) : " << std::endl;
  try
  {
    std::cout << d[-1] << std::endl;
  }
  catch(std::exception & e)
  {
    std::cout << e.what() << std::endl;
  }
}

int main()
{
  ints();
  std::cout << std::endl;
  chars();

  return 0;
}
