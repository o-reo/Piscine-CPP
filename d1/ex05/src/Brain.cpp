/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Brain.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eruaud <eruaud@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/19 17:25:01 by eruaud       #+#   ##    ##    #+#       */
/*   Updated: 2019/01/22 16:50:17 by eruaud      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain() {
    std::stringstream   ptr;
    ptr << this;  
    mAddress = ptr.str(); 
}

Brain::~Brain() {

}

std::string    Brain::identify() const{
    return (mAddress);
}