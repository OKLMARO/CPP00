/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 13:34:59 by oamairi           #+#    #+#             */
/*   Updated: 2026/02/26 11:30:03 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
	private:
		int			index;
		std::string	Secret;
		std::string	Nickname;
		std::string	LastName;
		std::string	FirstName;
		std::string	NumberPhone;

	public:
		Contact();
		Contact(std::string Last, std::string First, std::string Number, int index, std::string Nickname, std::string Secret);
		
		int			getIndex();
		std::string getSecret();
		std::string	getNickname();
		std::string	getLastName();
		std::string	getFirstName();
		std::string	getNumberPhone();
		void		setIndex(int index);
		~Contact();
};

#endif