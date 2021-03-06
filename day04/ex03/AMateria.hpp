/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 22:07:03 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/24 13:48:28 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;


class AMateria
{
	protected:
		std::string const	type; 
		unsigned int 		_xp;
	public:
		AMateria();
		AMateria(std::string const & type);
		virtual ~AMateria(void);
		AMateria &operator=(AMateria const &equal);
		AMateria (const AMateria &cpy);
		std::string const 	&getType(void) const;
		unsigned int 		getXP(void) const; 
		virtual AMateria* 	clone(void) const = 0;
		virtual void 		use(ICharacter& target);
};
#endif