/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 15:15:08 by dchampda          #+#    #+#             */
/*   Updated: 2021/03/23 12:07:20 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassContact.hpp"

std::string	ft_width(std::string data)
{
	std::string str;

	if (data.length() > 10)
	{
		data.resize(9);
		str += data + ".|";
	}
	else
	{
		str.resize(10 - data.length(), ' ');
		str += data + "|";
	}
	return str;
}

void	ft_write_data(Contact entry)
{
	std::string str;
	std::string	data;

	data = entry.get_index();
	str += ft_width(data);
	data = entry.get_firstName();
	str += ft_width(data);
	data = entry.get_lastName();
	str += ft_width(data);
	data = entry.get_nickname();
	str += ft_width(data);
	std::cout << str << std::endl;
}

bool	ft_isdigit(std::string choice)
{
	int i;

	i = 0;
	while (choice[i])
	{
		if (!std::isdigit(choice[i]))
			return false;
		i++;
	}
	return true;
}

void	ft_search_entry(Contact *entry)
{
	int i;
	std::string	choice;

	i = -1;
	std::cout << "        id|first name| last name|  nickname|" << std::endl;
	while (++i < 8)
	{
		if (!entry[i].get_firstName().empty())
			ft_write_data(entry[i]);
		else
			break ;
	}
	if (i > 0)
	{	
		std::cout << "\nType an id to get detailed data, or 'B' to go back : " << std::endl;
		std::getline(std::cin, choice);
		if (choice == "B")
			return ;
		else if (!choice.empty() && ft_isdigit(choice) 
				&& std::stoi(choice) <= i - 1)
			entry[std::stoi(choice)].get_entry();
		else
			std::cout << "Invalid input" << std::endl;
	}
	else
		std::cout << "\nYour phonebook is empty :(" << std::endl;
}


void	ft_add_entry(Contact *entry, int *index)
{
	if (*index < 8)
	{
		if (entry[*index].set_entry())
			*index += 1;
		else
			std::cout << "Error : You need to fill this entry" << std::endl;
	}
	else
		std::cout << "Error : Max number of entries reached" \
		<< std::endl;

}


int	main(void)
{
	std::string	command;
	Contact		entry[8];
	int			index;

	index = 0;
	std::cout << "Welcome to your awesome phonebook !" << std::endl;
	while (1)
	{
		std::cout << \
			"\033[94;1m\nEnter a command (ADD, SEARCH, EXIT)\033[0m" \
			<< std::endl;
		std::getline(std::cin, command);
		if (command == "ADD")
			ft_add_entry(entry, &index);
		else if (command == "SEARCH")
			ft_search_entry(entry);
		else if (command == "EXIT")
			return 0;
		else
			command = "";
	}
	return 0;
}

