/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoh <jnoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 21:06:52 by jnoh              #+#    #+#             */
/*   Updated: 2023/01/20 21:20:02 by jnoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class   Dog: public Animal
{
    private:

    public:
        Dog();
        Dog( const Dog &Dog );
        ~Dog( void );
        Dog    &operator= ( Dog const &dog );

        void    makeSound( void ) const;
};

#endif
