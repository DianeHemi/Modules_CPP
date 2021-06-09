/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 13:35:56 by dchampda          #+#    #+#             */
/*   Updated: 2021/03/23 12:07:34 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>
# include <iomanip>

class Contact {
public:

	Contact( void );	//Creator
	~Contact( void );	//Destructor
	
	int		set_entry( void );			//Initialiser private vars
	void	get_entry( void ) const;	//Obtenir leurs valeurs

	std::string	get_index( void ) const;
	std::string	get_firstName( void ) const;
	std::string	get_lastName( void ) const;
	std::string	get_nickname( void ) const;

private:

	static int	_nbInst;

	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_login;
	std::string	_address;
	std::string	_mail;
	std::string	_phone;
	std::string	_birthday;
	std::string	_favMeal;
	std::string	_underwearColor;
	std::string	_darkestSecret;
	std::string	_index;
};

#endif
