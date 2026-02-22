/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 14:04:02 by oamairi           #+#    #+#             */
/*   Updated: 2026/02/22 13:38:02 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact
{
	private:
		int		index;
		char	*Nickname;
		char	*LastName;
		char	*FirstName;
		int		*NumberPhone;

	public:
		Contact(char *Last, char *First, int *Number, int index, char *Nickname)
		{
			this->index = index;
			this->LastName = Last;
			this->FirstName = First;
			this->Nickname = Nickname;
			*this->NumberPhone = *Number;
		}

		void	getNumberPhone()
		{
			std::cout << NumberPhone << "\n";
		}
};

class PhoneBook
{
	private:
		Contact	contact_list[8];

	public:
		PhoneBook();
};

int main(void)
{
	while (1)
	{
		
	}
	
}

