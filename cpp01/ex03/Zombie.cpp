/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:56:26 by dchampda          #+#    #+#             */
/*   Updated: 2021/03/25 14:56:30 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
	return ;
}

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
	std::cout << _name << " is rising from the grave." << std::endl;
	return ;
}

Zombie::~Zombie( void )
{
	std::cout << _name << " died... Again." << std::endl;
	return ;
}

void	Zombie::announce( void )
{
	std::cout << _name << " the " << _type << " says : BRAIIIINS" << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

void	Zombie::setType(std::string type)
{
	this->_type = type;
}