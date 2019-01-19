/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eruaud <eruaud@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/19 17:09:51 by eruaud       #+#   ##    ##    #+#       */
/*   Updated: 2019/01/19 17:35:55 by eruaud      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ZombieEvent.hpp"

int     main(void) {
    ZombieEvent     myZombieEvent;
    Zombie          roger("Roger", "New Age Zombie");

    myZombieEvent.setZombieType("Good old Zombie");
    myZombieEvent.randomChump();
    roger.announce();
    return (0);
}