/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   field.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eruaud <eruaud@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/17 17:24:36 by eruaud       #+#   ##    ##    #+#       */
/*   Updated: 2019/01/19 14:58:47 by eruaud      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/field.hpp"

void        Field::Set() {
    std::cout << mLabel << "?" << std::endl << "> ";
    std::cin >> std::setw(100) >> mValue;
}

std::ostream& operator<< (std::ostream& os, Field& obj) {
    os << obj.Get();
    return os;
}