/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 20:01:58 by dchampda          #+#    #+#             */
/*   Updated: 2021/05/18 20:02:00 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTER_HPP
# define INTER_HPP

# include <iostream>
# include <string>

template<typename T>
void iter(T* array, int size, void (func)(T const &))
{
  for (int i = 0; i < size; i++)
  {
    func(array[i]);
  }
}

#endif
