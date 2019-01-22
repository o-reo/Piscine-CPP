/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Zombie.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eruaud <eruaud@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/19 17:14:02 by eruaud       #+#   ##    ##    #+#       */
/*   Updated: 2019/01/22 13:41:36 by eruaud      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

        Zombie::Zombie() {
}

        Zombie::Zombie(std::string name, std::string type) {
    Zombie::Set(name, type);
}

        Zombie::~Zombie() {
}

void    Zombie::Set(std::string name, std::string type) {
    mType = type;
    mName = name;
}


void    Zombie::announce() {
    std::cout << "<" << mName << "(" << mType << ")> Braiiiiiiinnnssss..." << std::endl;
}