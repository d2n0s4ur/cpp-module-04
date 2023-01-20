/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoh <jnoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 21:06:52 by jnoh              #+#    #+#             */
/*   Updated: 2023/01/20 21:19:10 by jnoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class   Cat: public Animal
{
    private:

    public:
        Cat();
        Cat( const Cat &cat );
        ~Cat( void );
        Cat    &operator= ( Cat const &cat );

        void    makeSound( void ) const;
};

#endif
