/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 18:35:42 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/26 19:53:52 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

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
		~Form();
		Form& operator=(const Form& obj);
		std::string getName(void) const;
		bool	getSigned(void) const;
		int	getGradeSign(void) const;
		int	getGradeExec(void) const;
		void	beSigned(Bureaucrat& obj) const;
		void	signForm(void) const;
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
