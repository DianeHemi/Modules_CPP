/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 14:32:30 by dchampda          #+#    #+#             */
/*   Updated: 2021/03/23 14:32:36 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

class Pony {
public:
	Pony( std::string name );
	~Pony( void );

	void	setData( void );
	void	getData( void ) const;
	void	action( void ) const;

private:
	std::string	_name;
	std::string	_coat;
	std::string	_breed;
	std::string	_discipline;
};


#endif
