/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 17:04:10 by dchampda          #+#    #+#             */
/*   Updated: 2021/03/26 17:04:11 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human( void )
{
	return ;
}

Human::~Human( void )
{
	return ;
}

Brain const &	Human::getBrain( void ) const
{
	return _brain;
}

std::string	Human::identify( void ) const
{
	return _brain.identify();
}