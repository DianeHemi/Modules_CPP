/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:56:48 by dchampda          #+#    #+#             */
/*   Updated: 2021/03/25 14:56:50 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent( void )	//Constructeur
{
	return ;
}

ZombieEvent::~ZombieEvent( void )	//Destructeur
{
	return ;
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->_zombieType = type;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	Zombie*	zombie = new Zombie(name, _zombieType);
	zombie->announce();
	return zombie;
}

void	ZombieEvent::randomChump( void )
{
	std::string names[] = {"Ubu", "Raymond", "Alphonse", "Philibert"};
	srand(time(NULL));
	Zombie	zombie(names[std::rand() % 4], _zombieType);
	zombie.announce();
}
