/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:13:45 by mkoualil          #+#    #+#             */
/*   Updated: 2024/10/23 18:12:42 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{ 
}

Zombie::Zombie(std::string n)
{ 
    name = n;
}

void Zombie::set_Zombie(std::string n)
{ 
    name = n;
}

Zombie::~Zombie()
{
    std::cout << name << " has been destroyed." << std::endl;
}

void Zombie::announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
