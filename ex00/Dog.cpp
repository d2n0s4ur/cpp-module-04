/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoh <jnoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 21:09:10 by jnoh              #+#    #+#             */
/*   Updated: 2023/01/20 21:18:10 by jnoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type_ = "Dog";
    std::cout << "Dog is created by default constructor." << std::endl;
}

Dog::Dog( const Dog &dog )
{
    *this = dog;
	std::cout << "Dog is created by copy constructor." << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog is destroyed." << std::endl;
}

Dog  &Dog::operator= ( const Dog &dog )
{
    this->setType(dog.getType());

    return (*this);
}

void    Dog::makeSound( void ) const
{
    std::cout << this->getType() << " is barked." << std::endl;
}
