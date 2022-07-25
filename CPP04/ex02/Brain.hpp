/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:11:54 by hmoubal           #+#    #+#             */
/*   Updated: 2022/07/25 14:55:22 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	public:
	std::string ideas[100];
	int	i;
	Brain();
	Brain(Brain& obj);
	~Brain();
	Brain&	operator=(const Brain& obj);
	void	addBrainIdea(std::string str);
	std::string	getBrainIdea(int a) const;
};

#endif
