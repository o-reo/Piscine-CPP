/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   contact.cpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eruaud <eruaud@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/17 16:04:47 by eruaud       #+#   ##    ##    #+#       */
/*   Updated: 2019/01/17 18:53:18 by eruaud      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "../include/contact.hpp"

/*
** first name, last name, nickname,
** login, postal address, email address, phone number, birthday date, favorite
** meal, underwear color and darkest secret.
*/

Contact::Contact(void) {
    std::string labels[] = {"first name", "last name", "nickname", "login", 
    "postal address", "email address", "phone number", "birthday date",
     "favorite meal", "underwear color", "darkest secret"};
     for (int i = 0; i < 11; i++) {
        fields[i].setLabel(labels[i]);
     }
}

Contact::~Contact(void) {
}

void    Contact::set() {
    for (int i = 0; i < 11; i++) {
        fields[i].set();
    }
}

void    Contact::summary() {
     for (int i = 0; i < 11; i++) {
        std::cout << fields[i].get() << std::endl;
     }
}