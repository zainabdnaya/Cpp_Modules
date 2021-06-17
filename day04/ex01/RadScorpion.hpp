/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:03:51 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/15 12:04:23 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP
#include <string>
#include <iostream>
#include "Enemy.hpp"

class RadScorpion : virtual public Enemy
{
private:
public:
	RadScorpion();
	~RadScorpion();
	RadScorpion(RadScorpion const &cpy);
	RadScorpion &operator=(RadScorpion const &equal);
};
#endif