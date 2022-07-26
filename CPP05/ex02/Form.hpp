/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skinnyleg <skinnyleg@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 18:35:42 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/26 22:43:49 by skinnyleg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		bool sign;
		const int GradeSign;
		const int GradeExec;

	public:
		Form();
		Form(Form &obj);
		Form(std::string str, int a, int b);
		~Form();
		Form& operator=(const Form& obj);
		std::string getName(void) const;
		bool	getSigned(void) const;
		int	getGradeSign(void) const;
		int	getGradeExec(void) const;
		void	beSigned(const Bureaucrat& obj);
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

std::ostream&	operator<<(std::ostream& os, const Form& obj);

#endif
