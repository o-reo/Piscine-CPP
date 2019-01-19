/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Zombie.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eruaud <eruaud@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/19 17:14:02 by eruaud       #+#   ##    ##    #+#       */
/*   Updated: 2019/01/19 17:34:27 by eruaud      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) {
    mName = name;
    mType = type;
}

void    Zombie::announce() {
    std::cout << "<" << mName << "(" << mType << ")> Braiiiiiiinnnssss..." << std::endl;
}