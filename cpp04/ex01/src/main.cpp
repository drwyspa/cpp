/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:47:25 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/11/03 22:33:33 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"
#include <iostream>

// int main()
// {
// 	const Animal* meta = new Animal();
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	std::cout << j->getAnimalType() << " " << std::endl;
// 	std::cout << i->getAnimalType() << " " << std::endl;
// 	i->makeSound(); //will output the cat sound!
// 	j->makeSound();
// 	meta->makeSound();

// 	return 0;
// }

int main()
{
    std::cout << "Checking the hierarchy - good one" << std::endl;
    {
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();

        std::cout << j->getAnimalType() << " " << std::endl; // powinno wypisać "Dog"
        std::cout << i->getAnimalType() << " " << std::endl; // powinno wypisać "Cat"

        i->makeSound(); // kot powinien miauczeć
        j->makeSound(); // pies powinien szczekać
        meta->makeSound(); // Animal – ogólny dźwięk

        delete meta;
        delete j;
        delete i;
    }

    std::cout << "Checking the hierarchy - bad one" << std::endl;
    {
        const WrongAnimal* wrongMeta = new WrongAnimal();
        const WrongAnimal* wrongCat = new WrongCat();

        std::cout << wrongCat->getAnimalType() << " " << std::endl; // powinno wypisać "WrongCat"

        wrongCat->makeSound(); // UWAGA: wywoła WrongAnimal::makeSound(), bo brak virtual!
        wrongMeta->makeSound();

        delete wrongMeta;
        delete wrongCat;
    }

    std::cout << "Check the Wrong Cat feature" << std::endl;
    {
        WrongCat wc;
        wc.makeSound(); // tutaj wywoła się poprawnie WrongCat::makeSound(), bo obiekt jest typu WrongCat
    }

    return 0;
}