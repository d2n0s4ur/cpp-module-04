/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoh <jnoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 20:54:38 by jnoh              #+#    #+#             */
/*   Updated: 2023/01/20 21:25:51 by jnoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    this->type_ = "default";
    std::cout << "Animal is created by default constructor." << std::endl;
}

Animal::Animal( const Animal &animal )
{
    *this = animal;
	std::cout << "Animal is created by copy constructor." << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal is destroyed." << std::endl;
}

Animal  &Animal::operator= ( const Animal &animal )
{
    this->setType(animal.getType());

    return (*this);
}

void    Animal::setType( const std::string type )
{
    this->type_ = type;
}

std::string const   &Animal::getType( void ) const
{
    return (this->type_);
}

void    Animal::makeSound( void ) const
{
}
