/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 22:12:09 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/30 15:21:00 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : name(name) ,  grade(grade)
{
    if (this->grade < 1)
        throw GradeTooHighException();
    else if (this->grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &bur): name(bur.name)
{
    grade = bur.grade;
    if (grade > 150)
        throw(GradeTooLowException());
    if (grade < 1)
        throw(GradeTooHighException());
}

Bureaucrat  &Bureaucrat::operator=(Bureaucrat const &equal)
{
    if  (this != &equal)
    {
        grade = equal.grade;
    if (grade > 150)
        throw(GradeTooLowException());
    if (grade < 1)
        throw(GradeTooHighException());
    }
    return(*this);
}

std::string const Bureaucrat::getName() const
{
    return (name);
}

int  Bureaucrat::getGrade() const
{
    return (grade);
}
void  Bureaucrat::decr_Grade()
{
    grade = grade + 1;
    if (grade > 150) 
        throw (GradeTooLowException());
}
void  Bureaucrat::incr_Grade()
{
    grade = grade - 1;
    if (grade < 1) 
        throw (GradeTooHighException());
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade Too High\n";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade Too Low\n";
}

void    Bureaucrat::signForm(Form &f)
{
      if (getGrade() <=  f.getSign())
        std::cout << getName() << " signs " << f.getName() << std::endl;
    else
        std::cout << getName() << " can't sign " << f.getName() <<  " because garde too low." << std::endl;
}

const char *Bureaucrat::Failed_exec::what() const throw()
{ 
    return "The Bureaucrat Failed to execute\n";
}


void    Bureaucrat::executeForm(Form const &form)
{
    try
    {
    if ( grade > form.getExec())
        throw Failed_exec();
    else
        std::cout << getName() << " executes " << form.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

std::ostream &operator<<(std::ostream &output, Bureaucrat const &bureaucrat)
{
    output << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << "." << std::endl;
    return output;
}

