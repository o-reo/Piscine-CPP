/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ex04.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eruaud <eruaud@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/22 13:43:57 by eruaud       #+#   ##    ##    #+#       */
/*   Updated: 2019/01/22 14:32:45 by eruaud      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <iostream>

int     main(void) {
    std::string brains = "HI THIS IS BRAIN";
    std::string *ptr_brains = &brains;
    std::string &ref_brains = brains;

    std::cout << *ptr_brains << std::endl << ref_brains << std::endl;
}