/*
* Vending Machine Project
* CSE-40477
*
* ProductButton.cpp
* YOU MUST IMPLEMENT THE FUNCTIONS IN THIS FILE.
*/
#include <cstring>
using std::strcpy;

#include "ProductButton.h"

Project1::ProductButton::ProductButton(ProductRack &productRack)
    : productRack(productRack)
{
    // TODO: Implement
}

bool
Project1::ProductButton::press()
{
    this->&productRack.deliverProduct();
    // TODO: Implement
    //return false;
}

unsigned
Project1::ProductButton::getProductPriceCents() const
{
    cout>>"Return price in cents.\n";
    this->&productRack.getProductPriceCents;
    // TODO: Implement
    //return 0;
}
