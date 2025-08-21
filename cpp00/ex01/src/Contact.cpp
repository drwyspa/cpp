/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 20:13:50 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/08/21 19:13:00 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Contact.hpp"

//Getters//
std::string Contact::getFirstName() const
{
	return mFirstName;
}

std::string Contact::getLastName() const
{
	return mLastName;
}

std::string Contact::getNickName() const
{
	return mNickName;
}

std::string Contact::getNumber() const
{
	return mNumber;
}

std::string Contact::getSecret() const
{
	return mSecret;
}

int	Contact::getId() const
{
	return mId;
}

//Setters//
void	Contact::setFirstName(std::string s)
{
	mFirstName = s;
}

void	Contact::setLastName(std::string s)
{
	mLastName = s;
}

void	Contact::setNickName(std::string s)
{
	mNickName = s;
}

void	Contact::setNumber(std::string s)
{
	mNumber = s;
}

void	Contact::setSecret(std::string s)
{
	mSecret = s;
}

void	Contact::setId(int n)
{
	mId= n;
}

//Function//
void	show_record(std::string s)
{
	if (s.length() > 10)
	{
		s[9] = '.';
		for (int i = 0; i < 10; i++)
			std::cout << s[i];
	}
	else
		std::cout << std::setw(10) << s;
}
