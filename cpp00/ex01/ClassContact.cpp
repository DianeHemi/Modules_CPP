/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 13:35:49 by dchampda          #+#    #+#             */
/*   Updated: 2021/03/23 12:07:26 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassContact.hpp"

int Contact::_nbInst = 0;

std::string	Contact::get_index( void ) const
{
	return this->_index;
}

std::string	Contact::get_firstName( void ) const
{
	return this->_firstName;
}

std::string	Contact::get_lastName( void ) const
{
	return this->_lastName;
}

std::string	Contact::get_nickname( void ) const
{
	return this->_nickname;
}

void	Contact::get_entry( void ) const
{
	std::cout << "First name : \033[92;1m" << _firstName << "\033[0m" << std::endl;
	std::cout << "Last name : \033[92;1m" << _lastName << "\033[0m" << std::endl;
	std::cout << "Nickname : \033[92;1m" << _nickname << "\033[0m" << std::endl;
	std::cout << "Login : \033[92;1m" << _login << "\033[0m" << std::endl;
	std::cout << "Postal address : \033[92;1m" << _address << "\033[0m" << std::endl;
	std::cout << "Email address : \033[92;1m" << _mail << "\033[0m" << std::endl;
	std::cout << "Phone number : \033[92;1m" << _phone << "\033[0m" << std::endl;
	std::cout << "Birthday : \033[92;1m" << _birthday << "\033[0m" << std::endl;
	std::cout << "Favorite meal : \033[92;1m" << _favMeal << "\033[0m" << std::endl;
	std::cout << "Underwear color : \033[92;1m" << _underwearColor << "\033[0m" << std::endl;
	std::cout << "Darkest secret : \033[92;1m" << _darkestSecret << "\033[0m" << std::endl;
}

int		Contact::set_entry( void )
{
	std::cout << "\tEnter a first name : ";
		std::getline(std::cin, _firstName);
	if (_firstName.empty())
		return 0;
	std::cout << "\tEnter a last name : ";
		std::getline(std::cin, _lastName);
	if (_lastName.empty())
		return 0;
	std::cout << "\tEnter a nickname : ";
		std::getline(std::cin, _nickname);
	if (_nickname.empty())
		return 0;
	std::cout << "\tEnter a login : ";
		std::getline(std::cin, _login);
	std::cout << "\tEnter a postal address : ";
		std::getline(std::cin, _address);
	std::cout << "\tEnter an email address : ";
		std::getline(std::cin, _mail);
	std::cout << "\tEnter a phone number : ";
		std::getline(std::cin, _phone);
	std::cout << "\tEnter a birthday date : ";
		std::getline(std::cin, _birthday);
	std::cout << "\tEnter a favorite meal : ";
		std::getline(std::cin, _favMeal);
	std::cout << "\tEnter an underwear color : ";
		std::getline(std::cin, _underwearColor);
	std::cout << "\tEnter a darkest secret : ";
		std::getline(std::cin, _darkestSecret);
	return 1;
}

Contact::Contact( void ) //Constructor
{
	Contact::_index = std::to_string(_nbInst);
	Contact::_nbInst += 1;
	return;
}

Contact::~Contact( void ) //Destructor
{
	return;
}
