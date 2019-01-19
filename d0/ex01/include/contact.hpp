/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Contact.hpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eruaud <eruaud@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/17 16:04:19 by eruaud       #+#   ##    ##    #+#       */
/*   Updated: 2019/01/19 15:45:12 by eruaud      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "Field.hpp"

class           Contact {
    int         mIndex;
    Field       mFields[11];

    public:
                Contact();
                ~Contact();
    void        Set();
    void        Summary();
    Field       *Get();
    void        SetIndex(int id);
};

std::ostream& operator<< (std::ostream& stream, Contact& obj);

#endif