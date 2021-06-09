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

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)	//Constructeur
{
	std::cout << _name << " is rising from the grave." << std::endl;
	return ;
}

Zombie::~Zombie( void )	//Destructeur
{
	std::cout << _name << " died... Again." << std::endl;
	return ;
}

void	Zombie::announce( void )
{
	std::cout << _name << " the " << _type << " says : BRAIIIINS" << std::endl;
}
