/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 14:42:27 by dchampda          #+#    #+#             */
/*   Updated: 2021/03/29 14:42:28 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <iostream>

std::string	ft_get_data(std::ifstream& ifs, std::string s1, std::string s2)
{
	std::string	str;
	std::string	tmp;
	size_t	pos;

	while (std::getline(ifs, tmp))
	{
		if ((pos = tmp.find(s1)) != std::string::npos)
		{
			tmp.replace(pos, s1.length(), s2);
			str += tmp + "\n";
		}
		else
			str += tmp + '\n';
	}
	return str;
}

int	ft_manage_data(char *argv[], std::string *res)
{
	std::ifstream	ifs(argv[1], std::ifstream::in);
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];

	if (!ifs.is_open())
	{
		std::cout << "Error : can't open file" << std::endl;
		return 0;
	}
	*res = ft_get_data(ifs, s1, s2);
	ifs.close();
	return 1;
}

int	ft_check_input(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Invalid number of arguments" << std::endl;
		return 0;
	}
	if (!argv[1])
	{
		std::cout << "Filename can't be empty" << std::endl;
		return 0;
	}
	if (!argv[2] || !argv[3])
	{
		std::cout << "Strings can't be empty" << std::endl;
		return 0;
	}
	return 1;
}

int	main(int argc, char *argv[])
{
	std::string		res;
	std::string		fName = argv[1];
	fName += ".replace";

	if (!ft_check_input(argc, argv))
		return 0;
	if (!ft_manage_data(argv, &res))
		return 0;

	std::ofstream	ofs(fName.c_str());
	if (ofs.is_open())
	{
		ofs << res;
		ofs.close();
	}
	else
	{
		std::cout << "Error : File could not be created" << std::endl;
		return 1;
	}
	return 0;
}