/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   field.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eruaud <eruaud@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/17 17:24:36 by eruaud       #+#   ##    ##    #+#       */
/*   Updated: 2019/01/17 18:22:08 by eruaud      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/field.hpp"

Field::Field(void) {
}

Field::~Field(void) {
}

void        Field::set() {
    std::cout << label << "?" << std::endl << "> ";
    std::cin >> std::setw(100) >> value;
}