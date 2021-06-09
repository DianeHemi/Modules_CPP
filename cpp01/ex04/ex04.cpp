/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 16:35:29 by dchampda          #+#    #+#             */
/*   Updated: 2021/03/26 16:35:31 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	strPtr = &str;
	std::string&	strRef = str;

	std::cout << "String : " << str << std::endl;
	std::cout << "Pointer to the string : " << *strPtr << std::endl;
	std::cout << "Reference to the string : " << strRef << std::endl;
	return 0;
}
