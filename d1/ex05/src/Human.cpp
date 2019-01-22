/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Human.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eruaud <eruaud@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/19 17:14:02 by eruaud       #+#   ##    ##    #+#       */
/*   Updated: 2019/01/22 14:56:41 by eruaud      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/Human.hpp"

Brain   Human::getBrain() {
    return mBrain;
}

void    *Human::identify() {
    return (mBrain.identify());
}