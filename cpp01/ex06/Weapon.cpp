/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:07:26 by dchampda          #+#    #+#             */
/*   Updated: 2021/03/29 11:07:28 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : _type(type)
{
	return ;
}

Weapon::~Weapon()
{
	return ;
}


void Weapon::setType( std::string type )
{
	this->_type = type;
}

std::string const & Weapon::getType() const
{
	std::string const & weaponType = this->_type;
	return	weaponType;
}