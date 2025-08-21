/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 19:44:16 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/08/21 19:13:12 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <iomanip>

void	show_record(std::string s);

class Contact
{
	public:
		//Setters//
		void	setFirstName(std::string s);
		void	setLastName(std::string s);
		void	setNickName(std::string s);
		void	setNumber(std::string s);
		void	setSecret(std::string s);
		void	setId(int n);
		//Getters//
		std::string	getFirstName() const;
		std::string getLastName() const;
		std::string	getNickName() const;
		std::string	getNumber() const;
		std::string getSecret() const;
		int			getId() const;

	private:
		std::string	mFirstName;
		std::string	mLastName;
		std::string	mNickName;
		std::string	mNumber;
		std::string	mSecret;
		int			mId;

};
#endif
