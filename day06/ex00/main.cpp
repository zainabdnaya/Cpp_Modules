/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 18:13:11 by zdnaya            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/07/03 18:14:03 by zdnaya           ###   ########.fr       */
=======
/*   Updated: 2021/07/04 15:52:41 by zdnaya           ###   ########.fr       */
>>>>>>> 08c56f0826804849faf5cb6607c1c22ebb2aff03
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		try
		{
			Convert Convert(av[1]);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	else if (ac < 2 || ac > 2)
		std::cout << BOLDRED << "You can only put 2 argument!\n"
				  << RESET;
	return (0);
}
