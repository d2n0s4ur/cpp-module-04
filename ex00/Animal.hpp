/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoh <jnoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 19:35:37 by jnoh              #+#    #+#             */
/*   Updated: 2023/01/20 21:25:40 by jnoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

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
};

#endif
