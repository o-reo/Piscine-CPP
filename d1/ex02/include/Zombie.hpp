/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Zombie.hpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eruaud <eruaud@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/19 17:10:40 by eruaud       #+#   ##    ##    #+#       */
/*   Updated: 2019/01/19 17:15:57 by eruaud      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class       Zombie {
    std::string     mName;
    std::string     mType;
    public:
                Zombie();
                Zombie(std::string name, std::string type);
                ~Zombie();
    void        announce();
};

#endif