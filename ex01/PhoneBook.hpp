/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 13:39:05 by oamairi           #+#    #+#             */
/*   Updated: 2026/02/26 11:53:34 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	contact_list[8];

	public:
		PhoneBook();
		int		get_size();
		void	add_user();
		void	init_phone_book();
		void	remplir_phone_book();
		void	search();
		~PhoneBook();
};

#endif