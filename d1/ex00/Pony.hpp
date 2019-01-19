/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Pony.hpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eruaud <eruaud@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/19 16:40:11 by eruaud       #+#   ##    ##    #+#       */
/*   Updated: 2019/01/19 16:47:02 by eruaud      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class           Pony {
    bool        mShitsRainbows;
    int         mNumberOfLegs;

    public:
                Pony();
                ~Pony();
        void    Shits();
        void    SetShit(bool isRainbow);
        void    SetLegs(int numLegs);
};

#endif