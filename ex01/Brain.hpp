/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoh <jnoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:12:44 by jnoh              #+#    #+#             */
/*   Updated: 2023/01/25 16:14:50 by jnoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class	Brain {
	private:
		std::string	ideas_[100];
	public:
		Brain();
		Brain( const Brain &brain );
		~Brain( void );

		Brain	&operator= ( const Brain &brain );
		void	setIdea( const int index, const std::string idea );
		std::string	getIdea( const int index ) const;
};

#endif
