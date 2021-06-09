/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 18:28:27 by dchampda          #+#    #+#             */
/*   Updated: 2021/04/20 18:28:28 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

/*
  Constructor, destructor
*/
Squad::Squad() : _head(NULL), _count(0)
{
}

Squad::Squad( Squad const & src ) : _head(NULL), _count(0)
{
  int units = src.getCount();

  this->deleteList();
  for (int i = 0; i < units; i++)
  {
    this->push(src.getUnit(i)->clone());
  }
}

Squad::~Squad()
{
  this->deleteList();
}

/*
  Functions
*/
Squad & Squad::operator=( Squad const & rhs )
{
  int units = rhs.getCount();

  this->deleteList();
  for (int i = 0; i < units; i++)
  {
    this->push(rhs.getUnit(i)->clone());
  }
  return *this;
}

int Squad::getCount() const
{
  t_list* tmp = this->_head;
  int i = 0;

  while (tmp)
  {
    i++;
    tmp = tmp->next;
  }
  return i;
}

void Squad::setCount( int count )
{
  this->_count = count;
}

ISpaceMarine* Squad::getUnit( int unit ) const
{
  t_list* tmp = this->_head;
  int i = 0;

  while (tmp)
  {
    if (i == unit)
      return tmp->marine;
    i++;
    tmp = tmp->next;
  }
  return nullptr;
}

int Squad::push( ISpaceMarine* marine )
{
  t_list* tmp = this->_head;

  if (tmp)
  {
    while (tmp->next)
    {
      if (tmp->marine == marine)
        return 0;
      tmp = tmp->next;
    }
    tmp->next = this->addMarine(marine);
  }
  else
    this->_head = this->addMarine(marine);

  this->setCount(this->_count + 1);

  return this->getCount();
}

t_list* Squad::addMarine( ISpaceMarine* marine )
{
  t_list *newMarine = new t_list;

  newMarine->marine = marine;
  newMarine->next = NULL;

  return newMarine;
}

void Squad::deleteList( void )
{
  t_list* current = this->_head;
  t_list* next;

  while (current != NULL)
  {
    delete current->marine;
    next = current->next;
    delete current;
    current = next;
  }
  this->_head = NULL;
}
