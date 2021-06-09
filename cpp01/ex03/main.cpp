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

#include "ZombieHorde.hpp"

int	main(void)
{
	int			n;

	std::cout << "\nHow many zombies do you want to create ?" << std::endl;
	std::cin >> n;

	std::cout << "Creating the zombies..." << std::endl;
	ZombieHorde	horde(n);
	std::cout << "And announcing them !" << std::endl;
	horde.announce();


	std::cout << "\nThe zombies will be deleted when ZombieHorde's " <<
		"destructor is called at the end of the main function :" << std::endl;
	std::cout << std::endl;
	system("leaks a.out");
	return 0;
}