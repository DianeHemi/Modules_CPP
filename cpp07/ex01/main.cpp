/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 20:02:04 by dchampda          #+#    #+#             */
/*   Updated: 2021/05/18 20:02:05 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <cmath>

template<typename U>
void print(U val){std::cout << val << std::endl;};
template<typename V>
void _sqrt(V val){std::cout << sqrt(val) << std::endl;};

int main()
{
  int tab1[] = {0, 1, 2, 3, 4, 5};
  char tab2[] = {'a', 'c', 'j', 'u', 'b', 'z'};
  float tab3[] = {158.2f, 98.6f, 1.25f, 78.01f, 0.89f, 32.1f};

  std::cout << "Printing lists :" << std::endl;
  iter<int>(tab1, 6, print);
  std::cout << std::endl;
  iter<char>(tab2, 6, print);
  std::cout << std::endl;
  iter<float>(tab3, 6, print);
  std::cout << "\nSquare roots of the int list :" << std::endl;
  iter<int>(tab1, 6, _sqrt);

  return 0;
}
