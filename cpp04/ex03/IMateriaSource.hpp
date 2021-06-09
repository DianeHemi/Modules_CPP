/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 15:32:33 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/21 15:32:35 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class IMateriaSource {
  public:
    virtual ~IMateriaSource() {}

    virtual void learnMateria( AMateria* ) = 0;
    virtual AMateria* createMateria( std::string const & type ) = 0;
};

#endif
