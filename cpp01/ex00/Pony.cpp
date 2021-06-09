/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 14:32:24 by dchampda          #+#    #+#             */
/*   Updated: 2021/03/23 14:32:25 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony( std::string name ) : _name(name)
{
	std::cout << "\t" << name << " is born !" << std::endl;
	return ;
}

Pony::~Pony( void )
{
	std::cout << "\t" << _name << " ran away... Bye bye" << std::endl;
	return ;
}

void	Pony::setData( void )
{
	std::string coats[] = {"bay", "dapple gray", "pinto", "chestnut"};
	std::string breeds[] = {"cob", "quarter-horse", "percheron", "lusitano"};
	std::string disciplines[] = {"dressage", "jumping", "trec", "eventing"};

	srand(time(NULL));
	_coat = coats[std::rand() % 4];
	_breed = breeds[std::rand() % 4];
	_discipline = disciplines[std::rand() % 4];
}

void		Pony::getData( void ) const
{
	std::cout << std::endl;
	std::cout << _name << " is a beautiful " << _breed << std::endl;
	std::cout << "This shiny " << _coat << " is doing some " << _discipline << std::endl;
}

void		Pony::action( void ) const
{
	if (this->_discipline == "dressage")
		std::cout << _name << " is showing off it's piaffe" << std::endl;
	else if (this->_discipline == "jumping")
		std::cout << _name << " jumped over a huge wall !" << std::endl;
	else if (this->_discipline == "trec")
		std::cout << _name << " is doing great !" << std::endl;
	else if (this->_discipline == "eventing")
		std::cout << _name << " went XC schooling to train !" << std::endl;
	std::cout << std::endl;
}