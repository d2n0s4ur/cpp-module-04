/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoh <jnoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:15:47 by jnoh              #+#    #+#             */
/*   Updated: 2023/01/25 16:19:34 by jnoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	int	i;

	i = 0;
	while (i < 100)
	{
		this->ideas_[i] = "";
		i++;
	}
	std::cout << "Brain is created by default constructor" << std::endl;
}

Brain::Brain( const Brain &brain )
{
	int	i;

	i = 0;
	while (i < 100)
	{
		this->ideas_[i] = brain.getIdea(i);
		i++;
	}
	std::cout << "Brain is created by copy constructor" << std::endl;
}

Brain::~Brain( void )
{
	std::cout << "Brain is destroyed" << std::endl;
}

Brain	&Brain::operator= ( const Brain &brain )
{
	int	i;

	i = 0;
	while (i < 100)
	{
		this->ideas_[i] = brain.getIdea(i);
		i++;
	}

	return (*this);
}

void	Brain::setIdea( const int index, const std::string idea )
{
	this->ideas_[index] = idea;
}

std::string	Brain::getIdea( const int index ) const
{
	return (this->ideas_[index]);
}
