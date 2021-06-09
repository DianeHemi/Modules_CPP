/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 17:03:58 by dchampda          #+#    #+#             */
/*   Updated: 2021/03/26 17:04:00 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	return ;
}

Brain::~Brain( void )
{
	return ;
}

std::string	Brain::identify( void ) const
{
	std::stringstream	ss;
	std::string	address;

	ss << std::hex << this;
	address = ss.str();
	return address;
}