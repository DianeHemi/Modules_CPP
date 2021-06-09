/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 15:32:01 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/21 15:32:03 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
  Constructor, destructor
*/
Character::Character() : _name("")
{
  for (int i = 0; i < 4; i++)
    this->_materia[i] = NULL;
}

Character::Character( std::string const & name ) : _name(name)
{
  for (int i = 0; i < 4; i++)
    this->_materia[i] = NULL;
}

Character::Character( Character const & src )
{
  this->_name = src.getName();
  for (int i = 0; i < 4; i++)
  {
    this->_materia[i] = NULL;
  }
  for (int i = 0; i < 4; i++)
  {
    if (src._materia[i])
      this->_materia[i] = src._materia[i]->clone();
    else
      this->_materia[i] = NULL;
  }
}

Character::~Character()
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
Character & Character::operator=( Character const & rhs )
{
  if (this == &rhs)
    return (*this);
  this->_name = rhs.getName();
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

std::string const & Character::getName() const
{
  return this->_name;
}

void Character::equip(AMateria* m)
{
  for (int i = 0; i < 4; i++)
  {
    if (this->_materia[i] == NULL)
    {
      this->_materia[i] = m;
      return ;
    }
  }
  std::cout << "You can't carry any more materia !" << std::endl;
}

void Character::unequip(int idx)
{
  if (idx > 3 || idx < 0)
    std::cout << "Invalid index..." << std::endl;
  else if (this->_materia[idx] == NULL)
    std::cout << "No materia equipped on this slot..." << std::endl;
  else
    this->_materia[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
  if (idx > 3 || idx < 0)
    std::cout << "Invalid index..." << std::endl;
  else if (this->_materia[idx] == NULL)
    std::cout << "This slot is empty !" << std::endl;
  else
    this->_materia[idx]->use(target);
}
