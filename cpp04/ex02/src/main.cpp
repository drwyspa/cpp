/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:47:25 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/11/11 22:33:29 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include <iostream>

int main() {
    std::cout << "Abstract class test" << std::endl;

    // Próba utworzenia obiektu klasy abstrakcyjnej:
    // AAnimal a;                // ❌ Błąd kompilacji – klasa abstrakcyjna
    // AAnimal* ptr = new AAnimal(); // ❌ Błąd kompilacji

    // Poprawne użycie przez klasy pochodne:
    AAnimal* dog = new Dog();
    AAnimal* cat = new Cat();

    std::cout << "Dog type: " << dog->getType() << std::endl;
    std::cout << "Cat type: " << cat->getType() << std::endl;

    dog->makeSound(); // powinno wypisać szczekanie
    cat->makeSound(); // powinno wypisać miauczenie

    delete dog;
    delete cat;

    std::cout << "Deep copy check" << std::endl;

    Dog dog1;
    dog1.getBrain()->setIdea(0, "Play fetch!");
    Dog dog2 = dog1; // konstruktor kopiujący

    std::cout << "Dog1 idea[0]: " << dog1.getBrain()->getIdea(0) << std::endl;
    std::cout << "Dog2 idea[0]: " << dog2.getBrain()->getIdea(0) << std::endl;

    dog2.getBrain()->setIdea(0, "Guard the house!");
    std::cout << "Dog1 idea[0] after Dog2 change: "
              << dog1.getBrain()->getIdea(0) << std::endl;
    std::cout << "Dog2 idea[0] after change: "
              << dog2.getBrain()->getIdea(0) << std::endl;

    return 0;
}