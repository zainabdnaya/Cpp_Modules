/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 11:10:29 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/07 10:59:39 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap opponent1 = ScavTrap("BOB");
    opponent1.rangedAttack("jack");
    opponent1.meleeAttack("jack");
    opponent1.beRepaired(1);
    opponent1.takeDamage(0);
    opponent1.rangedAttack("jack");
    opponent1.meleeAttack("jack");
    opponent1.rangedAttack("jack"); 
    opponent1.challengeNewcomer("jack");
    opponent1.takeDamage(0);
}