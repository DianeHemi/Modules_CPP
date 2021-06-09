/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:57:02 by dchampda          #+#    #+#             */
/*   Updated: 2021/03/25 14:57:04 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <string>
# include <iostream>
# include <ctime>
# include "Zombie.hpp"

class ZombieEvent
{
public:
	ZombieEvent( void );
	~ZombieEvent( void );

	void	setZombieType(std::string type);	//store type of zombie in var (definir la var dans private ici)
	Zombie*	newZombie(std::string name);	//Cree une instance d'un zombie avec nom defini
	void	randomChump( void );			//Cree une instance d'un zombie avec un nom random
	
private:
	std::string	_zombieType;


};

#endif