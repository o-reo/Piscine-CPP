/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Human.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eruaud <eruaud@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/19 17:14:02 by eruaud       #+#   ##    ##    #+#       */
/*   Updated: 2019/01/22 16:45:56 by eruaud      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/Human.hpp"

Human::Human() {
}

Human::~Human() {

}


const Brain   Human::getBrain() {
    return mBrain;
}

std::string Human::identify() const {
    return (mBrain.identify());
}