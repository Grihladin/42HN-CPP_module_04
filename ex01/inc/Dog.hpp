/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 22:21:49 by mratke            #+#    #+#             */
/*   Updated: 2025/07/15 17:40:01 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Dog : public Animal {
public:
  // Constructors
  Dog();
  Dog(const Dog &copy);

  // Destructor
  ~Dog();

  // Operators
  Dog &operator=(const Dog &assign);

  // Functions
  void makeSound() const override;
  std::string getType() const override;
  void assignIdeas();
  void printIdeas();

private:
  Brain *brain;
};

#endif
