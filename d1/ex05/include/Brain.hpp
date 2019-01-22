/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Brain.hpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eruaud <eruaud@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/19 17:10:40 by eruaud       #+#   ##    ##    #+#       */
/*   Updated: 2019/01/22 16:49:53 by eruaud      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <sstream>

class       Brain {
    std::string mAddress;
    public:
    Brain();
    ~Brain();
    std::string identify() const;
};

#endif