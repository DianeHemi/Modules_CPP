/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:08:10 by dchampda          #+#    #+#             */
/*   Updated: 2021/03/29 11:08:11 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name), _weapon(NULL)
{
	return ;
}

HumanB::~HumanB()
{
	return ;
}

void	HumanB::setWeapon( Weapon& weapon )
{
	this->_weapon = &weapon;
}

void	HumanB::attack() const
{
	if (this->_weapon)
		std::cout << this->_name << " attacks with his " \
		<< this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " has no weapon" \
		<< std::endl;
}