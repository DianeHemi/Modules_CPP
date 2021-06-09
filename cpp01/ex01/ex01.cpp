/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:40:27 by dchampda          #+#    #+#             */
/*   Updated: 2021/03/25 14:40:32 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

void	memoryLeak()
{
	std::string*	panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	delete panther;
}

int		main( void )
{
	memoryLeak();
	system("leaks a.out");
	return 0;
}