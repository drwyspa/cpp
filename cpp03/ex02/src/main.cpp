/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 21:20:02 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/10/22 21:34:40 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"
#include <iostream>

int main()
{
    std::cout << "// ClapTrap basic //" << std::endl;
    {
        ClapTrap clap("Andżej");
        clap.attack("Janek");
        clap.takeDamage(5);
        clap.beRepaired(3);
    }

    std::cout << "// ScavTrap in Gate Keeper mode //" << std::endl;
    {
        ScavTrap scav("Dżonson");
        scav.attack("Jeremiasz");
        scav.takeDamage(20);
        scav.beRepaired(10);
        scav.guardGate();
    }

    std::cout << "// FragTrap wants some high fives //" << std::endl;
    {
        FragTrap frag("Benson");
        frag.attack("Bad Guy");
        frag.takeDamage(50);
        frag.beRepaired(25);
        frag.highFivesGuys();
    }

    std::cout << "// Copy and assign //" << std::endl;
    {
        FragTrap frag1("Ziutek");
        FragTrap frag2(frag1);
        FragTrap frag3("Remek");
        frag3 = frag1;
    }

    return 0;
}