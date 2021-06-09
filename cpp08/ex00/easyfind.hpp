/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 11:44:18 by dchampda          #+#    #+#             */
/*   Updated: 2021/05/20 11:44:20 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <list>
# include <algorithm>

class NoObjException : public std::exception
{
public:
  virtual const char* what() const throw()
  {
    return ("Error : Element not found");
  }
};

template<typename T>
int easyfind(T & container, int tofind)
{
  typename T::iterator it;

  it = std::find(container.begin(), container.end(), tofind);
  if (it == container.end())
    throw NoObjException();
  else
    return *it;
}

#endif
