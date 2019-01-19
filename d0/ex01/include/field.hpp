/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   field.hpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eruaud <eruaud@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/17 17:24:40 by eruaud       #+#   ##    ##    #+#       */
/*   Updated: 2019/01/17 18:53:13 by eruaud      ###    #+. /#+    ###.fr     */
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
    std::string value;
    std::string label;

    public:
                Field();
                ~Field();
    void        set();
    void        setLabel(std::string newlabel){ label = newlabel; };
    std::string get(){return (value);};
};

#endif