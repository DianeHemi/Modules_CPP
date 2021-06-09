/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 10:54:14 by dchampda          #+#    #+#             */
/*   Updated: 2021/03/18 10:54:16 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(int argc, char *argv[])
{
	std::string	args;
	int			i;

	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	i = 1;
	while (i < argc)
	{
		args += argv[i];
		i++;
	}
	i = 0;
	while (args[i])
	{
		args[i] = std::toupper(args[i]);
		i++;
	}
	std::cout << args << std::endl;

	return 0;
}
