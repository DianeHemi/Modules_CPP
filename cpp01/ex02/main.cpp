/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:56:15 by dchampda          #+#    #+#             */
/*   Updated: 2021/03/25 14:56:18 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int	main(void)
{
	ZombieEvent	event;
	Zombie*		zombie1;

	std::cout << "\nCreating a zombie on the heap with \"newZombie\"" \
		<< std::endl;
	event.setZombieType("hungry");
	zombie1 = event.newZombie("Leopold");
	std::cout << "Destroying this zombie to avoid memory leaks..." << std::endl;
	delete zombie1;

	std::cout << "\nCreating a zombie on the stack with \"randomChump\"" \
		<< std::endl;
	event.setZombieType("weak");
	event.randomChump();


	std::cout << std::endl;
	system("leaks a.out");
	return 0;
}