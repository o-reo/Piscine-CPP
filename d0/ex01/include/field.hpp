/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   field.hpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eruaud <eruaud@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/17 17:24:40 by eruaud       #+#   ##    ##    #+#       */
/*   Updated: 2019/01/19 14:55:31 by eruaud      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FIELD_HPP
# define FIELD_HPP

#include <string.h>
#include <iostream>
#include <iomanip>

class           Field {
    private:
    std::string mValue;
    std::string mLabel;

    public:
    void        Set();
    void        SetLabel(std::string newlabel){ mLabel = newlabel; };
    std::string GetLabel(){return (mLabel);};
    std::string Get(){return (mValue);};
};

std::ostream& operator<< (std::ostream& stream, Field& obj);

#endif