/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ZombieHorde.cpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eruaud <eruaud@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/19 17:25:01 by eruaud       #+#   ##    ##    #+#       */
/*   Updated: 2019/01/22 13:42:01 by eruaud      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ZombieHorde.hpp"

    ZombieHorde::ZombieHorde(int n) {
    mZombies = new Zombie[n];
    mLength = n;
    std::string zombieNames[] = {"Roger", "Francis", "Gérard", "Emilien"};
    std::srand(std::time(0));
    for (int i = 0; i < n; i++) {
        mZombies[i].Set(zombieNames[std::rand() % 4], "ghoul");
    }
}

ZombieHorde::~ZombieHorde() {
    delete[] mZombies;
}

void    ZombieHorde::announce() {
    for (int i = 0; i < mLength; i++) {
        mZombies[i].announce();
    }
}
