/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 12:16:22 by dchampda          #+#    #+#             */
/*   Updated: 2021/03/26 12:16:24 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : _nbZombies(n)
{
	this->_zombies = new Zombie[n];

	for (int i = 0; i < this->_nbZombies; i++)
	{
		_zombies[i].setName(randomName());
		_zombies[i].setType(randomType());
	}
	return ;
}

ZombieHorde::~ZombieHorde( void )
{
	delete [] _zombies;
	return ;
}

std::string	ZombieHorde::randomName( void )
{
	char		consonnes[]{'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm',
							'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'z'};
	char		voyels[]{'a', 'e', 'i', 'o', 'u', 'y'};
	std::string	name;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
			name += consonnes[rand() % 20];
		name += voyels[rand() % 6];
	}
	return name;
}

std::string	ZombieHorde::randomType( void )
{
	std::string	type[] = {"weak", "hungry", "angry", "foolish"};

	return type[std::rand() % 4];
}

void	ZombieHorde::announce( void )
{
	for (int i = 0; i < this->_nbZombies; i++)
		_zombies[i].announce();
}