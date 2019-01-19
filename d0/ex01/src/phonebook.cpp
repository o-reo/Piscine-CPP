/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Phonebook.cpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eruaud <eruaud@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/19 13:58:43 by eruaud       #+#   ##    ##    #+#       */
/*   Updated: 2019/01/19 15:44:42 by eruaud      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/Phonebook.hpp"

Phonebook::Phonebook(void) {
    mLength = 0;
    for(int i = 0; i < 8; i++)
        mContacts[i].SetIndex(i);
}

Phonebook::~Phonebook(void) {
}

Contact     *Phonebook::Get() {
    return (mContacts);
}

void        Phonebook::Add() {
    if (mLength < 8) {
        mContacts[mLength].Set();
        mLength++;
    }
    else
        std::cout << "your phonebook is full, you fool" << std::endl;
}

void        Phonebook::Search()
{
    std::string     index;
    int             i;

    std::cout << "Type an index: ";
    std::cin >> index;
    i = 0;
    for (int j = 0; index[j]; j++)
        if (!std::isdigit(index[j]))
            i = -1;
    if (i == 0) {
        i = std::stoi(index);
        if (i >= 0 && i < mLength)
            std::cout << mContacts[i];
    }
}

int     Phonebook::GetLength() {
    return (mLength);
}

std::ostream& operator<< (std::ostream& os, Phonebook& obj) {
    Contact     *contacts;
    std::string columns[] = {"index", "firstname", "lastname", "nickname"};

    if (obj.GetLength() > 0) {
        for (int i = 0; i < 4; i++)
            std::cout << "|" << std::setw(10) << columns[i];
        std::cout << "|" << std::endl;
    }
    contacts = obj.Get();
    for (int i = 0; i < obj.GetLength(); i++)
        contacts[i].Summary();
    return os;
}