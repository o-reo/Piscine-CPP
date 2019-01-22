/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eruaud <eruaud@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/19 17:09:51 by eruaud       #+#   ##    ##    #+#       */
/*   Updated: 2019/01/22 13:41:05 by eruaud      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ZombieHorde.hpp"

int     main(void) {
    ZombieHorde     myZombieHorde(5);
    myZombieHorde.announce();
    return (0);
}