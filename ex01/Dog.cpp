/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoh <jnoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 21:09:10 by jnoh              #+#    #+#             */
/*   Updated: 2023/01/25 16:33:47 by jnoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type_ = "Dog";
    this->brain_ = new Brain();
    std::cout << "Dog is created by default constructor." << std::endl;
}

Dog::Dog( const Dog &dog )
{
    *this = dog;
	std::cout << "Dog is created by copy constructor." << std::endl;
}

Dog::~Dog()
{
    delete this->brain_;
    std::cout << "Dog is destroyed." << std::endl;
}

Dog  &Dog::operator= ( const Dog &dog )
{
    this->setType(dog.getType());
    this->brain_ = new Brain(*dog.brain_);

    return (*this);
}

void    Dog::makeSound( void ) const
{
    std::cout << this->getType() << " is barked." << std::endl;
}

Brain   &Dog::getBrain( void ) const
{
    return (*this->brain_);
}

void    Dog::setBrain( Brain const &brain )
{
    *this->brain_ = brain;
}
