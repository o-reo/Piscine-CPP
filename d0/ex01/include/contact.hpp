/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   contact.hpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eruaud <eruaud@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/17 16:04:19 by eruaud       #+#   ##    ##    #+#       */
/*   Updated: 2019/01/17 18:50:31 by eruaud      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "field.hpp"

class           Contact {
    int         index;
    Field       fields[11];

    public:
                Contact();
                ~Contact();
    void        set();
    void        summary();
    void        display();
};

#endif