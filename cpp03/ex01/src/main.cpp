/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 21:20:02 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/10/20 22:41:21 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"

int	main()
{
	std::cout << "// Konstrukcja i destrukcja //" << std::endl;
    {
        ScavTrap scav1("Janusz");
    } // tutaj powinien być widoczny najpierw destruktor ScavTrap, potem ClapTrap

    std::cout << "\n// Atak i zużycie energii //" << std::endl;
    ScavTrap scav2("Andżej");
    scav2.attack("Inny Janusz");
    scav2.attack("Inny Janusz");
    std::cout << scav2.getName() << " energy left: " << scav2.getEnergyPoints() << std::endl;

    std::cout << "\n// Obrażenia i naprawa //" << std::endl;
    scav2.takeDamage(30);
    scav2.beRepaired(20);
    scav2.takeDamage(200); // powinno wyzerować HP
    scav2.attack("Jeremiasz"); // nie powinno się udać

    std::cout << "\n// Tryb Gate Keeper //" << std::endl;
    scav2.guardGate(); // brak HP, nie powinno się udać

    std::cout << "\n// Kopiowanie i przypisanie //" << std::endl;
    ScavTrap scav3(scav2); // konstruktor kopiujący
    ScavTrap scav4("Dżonson");
    scav4 = scav2; // operator przypisania

	return 0;
}