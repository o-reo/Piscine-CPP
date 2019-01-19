/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ZombieEvent.cpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eruaud <eruaud@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/19 17:25:01 by eruaud       #+#   ##    ##    #+#       */
/*   Updated: 2019/01/19 17:36:32 by eruaud      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ZombieEvent.hpp"

Zombie::~Zombie() {
}

void    ZombieEvent::setZombieType(std::string type) {
    mType = type;
}

Zombie  *ZombieEvent::newZombie(std::string name) {
    if (mType == "")
        return (0); 
    Zombie  *myZombie = new Zombie(name, mType);
    return (myZombie);
}

void    ZombieEvent::randomChump() {
    std::string     names[] = {"Gerard", "Roger", "Francis"};

    std::srand(std::time(0));
    Zombie          myZombie(names[std::rand() % 3], mType);
    myZombie.announce();
}