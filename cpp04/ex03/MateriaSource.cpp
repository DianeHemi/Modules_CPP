/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 15:32:15 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/21 15:32:16 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*
  Constructor, destructor
*/
MateriaSource::MateriaSource()
{
  for (int i = 0; i < 4; i++)
  {
      this->_materia[i] = NULL;
  }
}

MateriaSource::MateriaSource( MateriaSource const & src )
{
  for (int i = 0; i < 4; i++)
  {
    if (src._materia[i])
      this->_materia[i] = src._materia[i];
  }
}

MateriaSource::~MateriaSource()
{
  for (int i = 0; i < 4; i++)
  {
    if (this->_materia[i] != NULL)
      delete this->_materia[i];
  }
}

/*
  Functions
*/
MateriaSource & MateriaSource::operator=( MateriaSource const & rhs )
{
  if (this == &rhs)
    return (*this);

  for (int i = 0; i < 4; i++)
  {
    if (this->_materia[i])
      delete this->_materia[i];
  }

  for (int i = 0; i < 4; i++)
  {
    if (rhs._materia[i])
      this->_materia[i] = rhs._materia[i]->clone();
    else
      this->_materia[i] = NULL;
  }
  return *this;
}

void MateriaSource::learnMateria( AMateria* mat )
{
  if (!mat)
    return ;

  int i = 0;
  while (i < 4)
  {
    if (this->_materia[i] == NULL)
    {
      this->_materia[i] = mat;
      return ;
    }
    i++;
  }
}

AMateria* MateriaSource::createMateria( std::string const & type )
{
  for (int i = 0; i < 4; i++)
  {
    if (this->_materia[i] != NULL && this->_materia[i]->getType() == type)
      return this->_materia[i]->clone();
  }
  return 0;
}
