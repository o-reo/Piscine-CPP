/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   megaphone.cpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eruaud <eruaud@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/17 13:37:17 by eruaud       #+#   ##    ##    #+#       */
/*   Updated: 2019/01/17 14:35:08 by eruaud      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <iostream>

void    print_upper(char *str)
{
    while (*str)
    {
        std::cout << (unsigned char) toupper((unsigned char)*str);
        str++;
    }
}

int     main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i = 1; i < ac; i++)
            print_upper(av[i]);
        std::cout << std::endl;
    }
    return (0);
}