/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 11:10:30 by dchampda          #+#    #+#             */
/*   Updated: 2021/05/11 11:10:31 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Base.hpp"

Base * createA()
{
  return new A;
}

Base * createB()
{
  return new B;
}

Base * createC()
{
  return new C;
}


Base * generate(void)
{
  //Instancie de façon aléatoire A, B ou C & retourne pointeur sur
  //instance de Base

  Base * generation[] = {createA(), createB(), createC()};
  Base * base = generation[rand() % 3];

  return base;
}

void identify_from_pointer(Base * p)
{
  if (dynamic_cast<A*>(p))
    std::cout << "Identify from pointer : A"<< std::endl;
  else if (dynamic_cast<B*>(p))
    std::cout << "Identify from pointer : B"<< std::endl;
  else if (dynamic_cast<C*>(p))
    std::cout << "Identify from pointer : C"<< std::endl;
}

void identify_from_reference(Base & p)
{
  Base base;

  try
  {
    base = dynamic_cast<A&>(p);
    std::cout << "Identify from reference : A"<< std::endl;
  }
  catch(std::exception & e){}
  try
  {
    base = dynamic_cast<B&>(p);
    std::cout << "Identify from reference : B"<< std::endl;
  }
  catch(std::exception & e){}
  try
  {
    base = dynamic_cast<C&>(p);
    std::cout << "Identify from reference : C"<< std::endl;
  }
  catch(std::exception & e){}
}

int main(void)
{
  srand(time(0));

  for(int i = 0; i < 5; i++)
  {
    std::cout << "\nTest " << i << std::endl;
    Base * base = generate();
    identify_from_pointer(base);
    identify_from_reference(*base);
  }
  
  return 0;
}
