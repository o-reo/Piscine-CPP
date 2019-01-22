/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Human.hpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eruaud <eruaud@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/19 17:22:24 by eruaud       #+#   ##    ##    #+#       */
/*   Updated: 2019/01/22 16:31:57 by eruaud      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"
# include <iostream>


class       Human {
    const Brain     mBrain;
    public:
    Human();
    ~Human();
    const Brain     getBrain();
    std::string     identify() const;
};

#endif