/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoh <jnoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 21:09:10 by jnoh              #+#    #+#             */
/*   Updated: 2023/01/25 16:32:48 by jnoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type_ = "Cat";
    this->brain_ = new Brain();
    std::cout << "Cat is created by default constructor." << std::endl;
}

Cat::Cat( const Cat &cat )
{
    *this = cat;
	std::cout << "Cat is created by copy constructor." << std::endl;
}

Cat::~Cat()
{
    delete this->brain_;
    std::cout << "Cat is destroyed." << std::endl;
}

Cat  &Cat::operator= ( const Cat &cat )
{
    this->setType(cat.getType());
    this->brain_ = new Brain(*cat.brain_);

    return (*this);
}

void    Cat::makeSound( void ) const
{
    std::cout << this->getType() << " is Meowed." << std::endl;
}

Brain   &Cat::getBrain( void ) const
{
    return (*this->brain_);
}

void    Cat::setBrain( Brain const &brain )
{
    *this->brain_ = brain;
}
