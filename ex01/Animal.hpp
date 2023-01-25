/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoh <jnoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 19:35:37 by jnoh              #+#    #+#             */
/*   Updated: 2023/01/25 16:29:57 by jnoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class   Animal {
    protected:
        std::string type_;
    public:
        Animal();
        Animal( const Animal &animal );
        virtual ~Animal( void );
        
        Animal &operator= ( const Animal &animal );
        void    setType( const std::string type );
        std::string const   &getType( void ) const;

        virtual void    makeSound( void ) const;
        virtual Brain   &getBrain( void ) const = 0;
};

#endif
