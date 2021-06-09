/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 16:25:46 by dchampda          #+#    #+#             */
/*   Updated: 2021/05/18 16:25:47 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>

template<typename T>
void swap(T &a, T &b)
{
  T tmp = a;

  a = b;
  b = tmp;
}

template<typename T>
T min(T a, T b)
{
  if (a == b)
    return b;
  return a > b ? b : a;
}

template<typename T>
T max(T a, T b)
{
  if (a == b)
    return b;
  return a > b ? a : b;
}

#endif
