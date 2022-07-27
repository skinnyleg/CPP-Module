/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 14:26:02 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/27 17:22:44 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
	std::string target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm& obj);
		PresidentialPardonForm(std::string str);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& obj);
		~PresidentialPardonForm();
		void	execute(Bureaucrat const & executor) const;
		std::string getTarget(void) const;
};

#endif
