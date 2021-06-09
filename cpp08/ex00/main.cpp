/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 11:04:47 by dchampda          #+#    #+#             */
/*   Updated: 2021/05/21 11:05:28 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <string>

void vector_test()
{
	std::vector<int> cont1;

	for (int i = 0; i < 5; i++)
	{
		cont1.push_back(i);
		std::cout << i << " ";
	}
	std::cout << std::endl;

	try{
		std::cout << "Trying to find 2 in array : " << std::endl;
		easyfind(cont1, 2);
		std::cout << "Found !" << std::endl;
	}
	catch(std::exception & e){
		std::cout << e.what() << std::endl;
	}

	try{
		std::cout << "Trying to find 58 in array : " << std::endl;
		easyfind(cont1, 58);
		std::cout << "found !" << std::endl;
	}
	catch(std::exception & e){
		std::cout << e.what() << std::endl;;
	}
}

void list_test()
{
	std::list<int> cont1;

	for (int i = 0; i < 5; i++)
	{
		cont1.push_back(i * i);
		std::cout << i * i << " ";
	}
	std::cout << std::endl;

	try{
		std::cout << "Trying to find 1 in array : " << std::endl;
		easyfind(cont1, 1);
		std::cout << "Found !" << std::endl;
	}
	catch(std::exception & e){
		std::cout << e.what() << std::endl;
	}

	try{
		std::cout << "Trying to find 24 in array : " << std::endl;
		easyfind(cont1, 24);
		std::cout << "found !" << std::endl;
	}
	catch(std::exception & e){
		std::cout << e.what() << std::endl;;
	}
}

int main()
{
	std::cout << "**--- Vectors ---**" << std::endl;
	vector_test();
	std::cout << "\n**--- Lists ---**" << std::endl;
	list_test();

	return 0;
}
