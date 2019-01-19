/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Phonebook.hpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eruaud <eruaud@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/19 13:55:32 by eruaud       #+#   ##    ##    #+#       */
/*   Updated: 2019/01/19 15:45:46 by eruaud      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string.h>
# include <iostream>
# include <iomanip>
# include "Contact.hpp"

class   Phonebook {
    private:
        Contact mContacts[8];
        int     mLength;
    public:
        Phonebook();
        ~Phonebook();
        Contact *Get();
        int     GetLength();
        void    Add();
        void    Search();
};

std::ostream& operator<< (std::ostream& stream, Phonebook& obj);

#endif