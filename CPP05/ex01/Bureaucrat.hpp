/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:28:30 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/27 18:36:14 by hmoubal          ###   ########.fr       */
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
				return ("Grade Too High");
			}
		};
		class GradeTooLowException : public std::exception
		{
			public:
			const char * what() const throw ()
			{
				return ("Grade Too Low");
			}
		};
};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& obj);

#endif
