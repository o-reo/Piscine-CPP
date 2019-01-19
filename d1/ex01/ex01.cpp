/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ex01.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eruaud <eruaud@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/19 16:57:14 by eruaud       #+#   ##    ##    #+#       */
/*   Updated: 2019/01/19 17:00:37 by eruaud      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <iostream>

void    memoryLeak(void) {
    std::string* panthere = new std::string("String panthere");
    std::cout << *panthere << std::endl;
    delete panthere;
}