/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:08:06 by dchampda          #+#    #+#             */
/*   Updated: 2021/03/29 11:08:07 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{
public:
	HumanB( std::string name );
	~HumanB();

	void	setWeapon( Weapon& weapon );
	void	attack() const;

private:
	std::string	_name;
	Weapon*		_weapon;
};

#endif