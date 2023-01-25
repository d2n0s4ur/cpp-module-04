/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoh <jnoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 21:06:52 by jnoh              #+#    #+#             */
/*   Updated: 2023/01/25 16:33:13 by jnoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class   Cat: public Animal
{
    private:
        Brain   *brain_;
    public:
        Cat();
        Cat( const Cat &cat );
        ~Cat( void );
        Cat    &operator= ( Cat const &cat );

        void    makeSound( void ) const;
        Brain   &getBrain( void ) const;
        void    setBrain( Brain const &brain );
};

#endif
