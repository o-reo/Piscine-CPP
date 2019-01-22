/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ZombieHorde.hpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eruaud <eruaud@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/19 17:22:24 by eruaud       #+#   ##    ##    #+#       */
/*   Updated: 2019/01/22 13:39:11 by eruaud      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"
# include <iostream>
# include <stdlib.h>
# include <time.h>


class       ZombieHorde {
    Zombie  *mZombies;
    int     mLength;
    public:
    ZombieHorde(int n);
    ~ZombieHorde();
    void    announce();
};

#endif