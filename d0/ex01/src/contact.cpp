/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   contact.cpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eruaud <eruaud@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/17 16:04:47 by eruaud       #+#   ##    ##    #+#       */
/*   Updated: 2019/01/19 15:03:58 by eruaud      ###    #+. /#+    ###.fr     */
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
        mFields[i].SetLabel(labels[i]);
     }
}

Contact::~Contact(void) {
}

void    Contact::Set() {
    for (int i = 0; i < 11; i++) {
        mFields[i].Set();
    }
}

void    Contact::Summary() {
    std::cout << "|" << std::setw(10) << mIndex << "|";
     for (int i = 0; i < 3; i++) {
        if (mFields[i].Get().size() > 10)
            std::cout << mFields[i].Get().substr(0, 9) << "." << "|";
        else
            std::cout << std::right << std::setw(10) << mFields[i] << "|";
     }
     std::cout << std::endl;
}

Field    *Contact::Get() {
    return mFields;
}

void    Contact::SetIndex(int id) {
    mIndex = id;
}

std::ostream& operator<< (std::ostream& os, Contact& obj) {
    Field   *fields;
    fields = obj.Get();
    for (int i = 0; i < 11; i++) {
        std::cout << (fields + i)->GetLabel() << ": " << (fields + i)->Get() << std::endl;
    }
    return os;
}