/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eruaud <eruaud@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/17 13:37:17 by eruaud       #+#   ##    ##    #+#       */
/*   Updated: 2019/01/19 15:44:29 by eruaud      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/phone.hpp"

int         main()
{
    Phonebook       pb;
    std::string     cmd;

    while (cmd != "EXIT") {
        std::cout << "type a command: ";
        std::cin >> cmd;
        if (cmd == "SEARCH") {
            std::cout << pb;
            pb.Search();
         }
        else if (cmd == "ADD")
            pb.Add();
    }
    std::cout << "goodbye!" << std::endl;
    return (0);
}