/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:28:22 by mkoualil          #+#    #+#             */
/*   Updated: 2024/12/06 12:47:44 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string n, Weapon& w):weapon(w), name(n){}

void HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;    
}

HumanA::~HumanA()
{
}