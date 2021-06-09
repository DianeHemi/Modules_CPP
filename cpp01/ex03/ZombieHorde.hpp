/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 12:16:29 by dchampda          #+#    #+#             */
/*   Updated: 2021/03/26 12:16:31 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <string>
# include <iostream>
# include "Zombie.hpp"

class ZombieHorde
{
public:
	ZombieHorde( int n );
	~ZombieHorde( void );

	std::string	randomName( void );
	std::string	randomType( void );
	void		announce( void );

private:
	int				_nbZombies;
	Zombie*			_zombies;

};

#endif