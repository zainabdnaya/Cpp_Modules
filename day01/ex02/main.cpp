/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 09:59:51 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/02 10:50:58 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <unistd.h>

int main()
{
    Zombie zombie;
    ZombieEvent zombievent;

    zombie.set_name("kingo");
    zombie.set_type("mad");
    zombie.announce();
    zombievent.randomChump();
    
}