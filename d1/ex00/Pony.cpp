/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Pony.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eruaud <eruaud@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/19 16:43:41 by eruaud       #+#   ##    ##    #+#       */
/*   Updated: 2019/01/19 16:50:03 by eruaud      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony() {
    std::cout << "Oh, a new Pony!" << std::endl;
}

Pony::~Pony() {
    std::cout << "Goodbye my Pony!" << std::endl;
}

void    Pony::SetShit(bool isRainbow) {
    mShitsRainbows = isRainbow;
}

void    Pony::SetLegs(int legs) {
    mNumberOfLegs = legs;
}

void    Pony::Shits() {
    std::cout << "Pony Shits ";
    if (mShitsRainbows)
        std::cout << "rainbows" << std::endl;
    else
        std::cout << "poop" << std::endl;
}