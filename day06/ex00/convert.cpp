/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 01:58:51 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/07/03 18:13:53 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

Convert::Convert()
{
	this->val = "";
	this->V_char = '\0';
	this->V_int = 0;
	this->V_float = 0.0f;
	this->V_double = 0.0;
}

Convert::Convert(Convert const &cpy)
{
	this->val = cpy.val;
	this->V_char = cpy.V_char;
	this->V_int = cpy.V_int;
	this->V_float = cpy.V_float;
	this->V_double = cpy.V_double;
}

Convert &Convert::operator=(Convert const &equal)
{
	if (this != &equal)
	{
		this->val 		= equal.val;
		this->V_char 	= equal.V_char;
		this->V_int 	= equal.V_int;
		this->V_float 	= equal.V_float;
		this->V_double  = equal.V_double;
	}
	return (*this);
}

Convert::Convert(std::string str)
{
	val = str;
	bool b = Convert::type(val);
	if (b == true)
	{
		if (V_int > 0 && V_int < 127 && isprint(V_char))
			print_h(V_char);
		else if (V_int < 0 || V_int >= 127)
		{
			imposs();
		}
		else if (!isprint(V_char))
			non_disp();
		if (_F_pseudo(str) || _D_pseudo(str) || INT_MAX < V_int || INT_MIN > V_int)
			print_i("Impossible");
		else
			print_i(V_int);
		print_f(V_float);
		print_d(V_double);
	}
	else
	{
		std::string str = "Impossible";
		imposs();
		print_i(str);
		fimpossible();
		print_d(str);
	}
}

bool Convert::type(std::string str)
{
	if (str.length() == 1 && !isdigit(str[0]))
	{
		V_char = str[0];
		V_int = static_cast<long>(this->V_char);
		V_float = static_cast<float>(this->V_char);
		V_double = static_cast<double>(this->V_char);
		return (true);
	}
	else if (Convert::_I_type(str) == 1)
	{
		V_int = std::stol(str);
		V_char = static_cast<char>(this->V_int);
		V_float = static_cast<float>(this->V_int);
		V_double = static_cast<double>(this->V_int);
		return (true);
	}
	else if (Convert::_F_type(str) == 1 || Convert::_F_pseudo(str) == 1)
	{
		V_float = std::stof(str);
		V_int = static_cast<long>(this->V_float);
		V_char = static_cast<char>(this->V_float);
		V_double = static_cast<double>(this->V_float);
		return (true);
	}
	else if (Convert::_D_type(str) == 1 || Convert::_D_pseudo(str) == 1)
	{
		V_double = std::stod(str);
		V_int = static_cast<long>(this->V_double);
		V_char = static_cast<char>(this->V_double);
		V_float = static_cast<double>(this->V_double);
		return (true);
	}
	else
		return (false);
}

Convert::~Convert()
{
}