/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchampda <dchampda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 18:42:18 by dchampda          #+#    #+#             */
/*   Updated: 2021/05/10 18:42:19 by dchampda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#pragma pack(1)

struct Data
{
  std::string s1;
  int n;
  std::string s2;
};

std::string genRandom(int const len)
{
  std::string str;
  const char alphanum[] = "0123456789"
  "ABCDEFGHIJKLMNOPQRSTUVWXYZ" "abcdefghijklmnopqrstuvwxyz";

  for(int i = 0; i < len; i++)
  {
    str += alphanum[rand() % (sizeof(alphanum) - 1)];
  }
  return str;
}

void * serialize(void)
{
  void * address;
  Data * data = new Data;

  data->s1 = genRandom(8);
  data->n = rand() % 9;
  data->s2 = genRandom(8);

  return (reinterpret_cast<void*>(data));
}

Data * deserialize(void * raw)
{
  return (reinterpret_cast<Data *>(raw));
}

int main ()
{
  srand(time(NULL));

  void * address = serialize();
  Data * data = deserialize(address);

  std::cout << "Représentation : " << data->s1 << " " << data->n << " " << data->s2 << std::endl;
  std::cout << "Taille : " << sizeof(data->s1) << " + " << sizeof(data->n) << " + " \
    << sizeof(data->s2) << " = " << sizeof(*data) << std::endl;

  delete data;
  return 0;
}
