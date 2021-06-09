/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:07:57 by dchampda          #+#    #+#             */
/*   Updated: 2021/03/29 11:08:00 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA
{
public:
	HumanA( std::string name, Weapon& weapon );
	~HumanA();

	void	attack() const;

private:
	std::string	_name;
	Weapon&		_weapon;
};

#endif
