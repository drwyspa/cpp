/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 18:47:15 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/08/18 19:18:15 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

void	ft_toupper(char *s)
{
	for (int i = 0; s[i]; i++)
	{
		std::cout << (char)toupper(s[i]);
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		for (int i = 1; i < argc; i++)
		{
			ft_toupper(argv[i]);
		}
		std::cout << std::endl;
	}
	else
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	return 0;
}
