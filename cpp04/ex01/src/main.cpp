/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:47:25 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/11/11 21:46:08 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include <iostream>

// int main()
// {
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	delete j;//should not create a leak
// 	delete i;
// 	return 0;
// }

int main() {
    std::cout << "Basic tests" << std::endl;

    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j; // powinno wywołać Dog -> Brain -> Animal destruktory
    delete i; // powinno wywołać Cat -> Brain -> Animal destruktory

    std::cout << "Array of Animals" << std::endl;

    const int size = 4;
    Animal* animals[size];

    // połowa psów, połowa kotów
    for (int k = 0; k < size; ++k) {
        if (k % 2 == 0)
            animals[k] = new Dog();
        else
            animals[k] = new Cat();
    }

    // wywołanie polimorficzne
    for (int k = 0; k < size; ++k) {
        animals[k]->makeSound();
    }

    // zwolnienie pamięci
    for (int k = 0; k < size; ++k) {
        delete animals[k];
    }

    std::cout << "Deep copy test" << std::endl;

    Dog dog1;
    dog1.getBrain()->setIdea(0, "Chase the ball!");
    dog1.getBrain()->setIdea(1, "Eat dinner!");

    Dog dog2 = dog1; // konstruktor kopiujący

    std::cout << "Dog1 idea[0]: " << dog1.getBrain()->getIdea(0) << std::endl;
    std::cout << "Dog2 idea[0]: " << dog2.getBrain()->getIdea(0) << std::endl;

    // zmieniamy pomysł w dog2
    dog2.getBrain()->setIdea(0, "Guard the house!");

    std::cout << "Dog1 idea[0] after change in Dog2: " 
              << dog1.getBrain()->getIdea(0) << std::endl;
    std::cout << "Dog2 idea[0] after change: " 
              << dog2.getBrain()->getIdea(0) << std::endl;

    // jeśli deep copy działa poprawnie, zmiana w dog2 nie wpływa na dog1

    std::cout << "Assignment operator test" << std::endl;

    Cat cat1;
    cat1.getBrain()->setIdea(0, "Sleep on the sofa");
    Cat cat2;
    cat2 = cat1; // operator przypisania

    std::cout << "Cat1 idea[0]: " << cat1.getBrain()->getIdea(0) << std::endl;
    std::cout << "Cat2 idea[0]: " << cat2.getBrain()->getIdea(0) << std::endl;

    return 0;
}