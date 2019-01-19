/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ZombieEvent.hpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eruaud <eruaud@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/19 17:22:24 by eruaud       #+#   ##    ##    #+#       */
/*   Updated: 2019/01/19 17:30:48 by eruaud      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"
# include <iostream>
# include <stdlib.h>
# include <time.h>


class       ZombieEvent {
    std::string     mType;

    public:
    void    setZombieType(std::string type);
    Zombie  *newZombie(std::string name);
    void    randomChump();
};

#endif