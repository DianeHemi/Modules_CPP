/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 11:10:43 by dchampda          #+#    #+#             */
/*   Updated: 2021/05/11 11:10:44 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <string>

class Base
{
  public:
    virtual ~Base();
};

class A : public Base
{
  public:
    A(){}
    virtual ~A(){}
};

class B : public Base
{
  public:
    B(){}
    virtual ~B(){}
};

class C : public Base
{
  public:
    C(){}
    virtual ~C(){}
};

#endif
