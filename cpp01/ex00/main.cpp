/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 14:32:40 by dchampda          #+#    #+#             */
/*   Updated: 2021/03/23 14:32:42 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"


void	ponyOnTheStack(std::string name)
{
	Pony	pony = Pony(name);

	pony.setData();
	pony.getData();
	pony.action();
}

void	ponyOnTheHeap(std::string name)
{
	Pony	*pony = new Pony(name);

	pony->setData();
	pony->getData();
	pony->action();
	delete pony;
}

int		main( void )
{

	std::string name;

	std::cout << "\nChoose a name for your stack pony :" << std::endl;
	std::getline(std::cin, name);
	ponyOnTheStack(name);
	std::cout << "\nChoose a name for your heap pony :" << std::endl;
	std::getline(std::cin, name);
	ponyOnTheHeap(name);
	system("leaks a.out");
	return 0;
}