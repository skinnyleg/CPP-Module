/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:28:30 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/27 15:56:54 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include <fstream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat(Bureaucrat& obj);
		Bureaucrat(std::string str, int num);
		~Bureaucrat();
		Bureaucrat& operator=(const Bureaucrat& obj);
		int	getGrade(void) const;
		std::string	getName(void) const;
		void	signForm(Form& form) const;
		void	Promotion();
		void	Demotion();
		void	executeForm(Form const & form) const;

		class GradeTooHighException : public std::exception
		{
			public :
			const char * what() const throw ()
			{
				return ("GradeTooHigh");
			}
		};
		class GradeTooLowException : public std::exception
		{
			public:
			const char * what() const throw ()
			{
				return ("GradeTooLow");
			}
		};
};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& obj);

#endif
