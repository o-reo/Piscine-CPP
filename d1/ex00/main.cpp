/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eruaud <eruaud@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/19 16:39:16 by eruaud       #+#   ##    ##    #+#       */
/*   Updated: 2019/01/19 16:53:28 by eruaud      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Pony.hpp"

void    ponyOnTheHeap() {
    Pony    *myPony = new Pony();
    myPony->SetShit(1);
    myPony->Shits();
    delete myPony;
}

void    ponyOnTheStack() {
    Pony    myPony;
    myPony.SetShit(0);
    myPony.Shits();
}

int     main(void) {
    ponyOnTheHeap();
    ponyOnTheStack();
}