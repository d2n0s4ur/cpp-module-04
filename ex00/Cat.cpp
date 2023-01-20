/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoh <jnoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 21:09:10 by jnoh              #+#    #+#             */
/*   Updated: 2023/01/20 21:18:14 by jnoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type_ = "Cat";
    std::cout << "Cat is created by default constructor." << std::endl;
}

Cat::Cat( const Cat &cat )
{
    *this = cat;
	std::cout << "Cat is created by copy constructor." << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat is destroyed." << std::endl;
}

Cat  &Cat::operator= ( const Cat &cat )
{
    this->setType(cat.getType());

    return (*this);
}

void    Cat::makeSound( void ) const
{
    std::cout << this->getType() << " is Meowed." << std::endl;
}
