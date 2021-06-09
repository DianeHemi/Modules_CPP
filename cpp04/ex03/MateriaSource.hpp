/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 15:32:11 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/21 15:32:12 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <string>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource {
  public:
    MateriaSource();
    MateriaSource( MateriaSource const & src );
    ~MateriaSource();

    MateriaSource & operator=( MateriaSource const & rhs );
    void learnMateria( AMateria* );
    AMateria* createMateria( std::string const & type );

  protected:
    AMateria* _materia[4];
};

#endif
