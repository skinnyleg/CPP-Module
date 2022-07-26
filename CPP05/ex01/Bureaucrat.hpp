/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skinnyleg <skinnyleg@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:28:30 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/26 23:01:26 by skinnyleg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
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
