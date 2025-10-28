/*
* Vending Machine Project
* CSE-40477
*
* ProductRack.cpp
* YOU MUST IMPLEMENT THE FUNCTIONS IN THIS FILE.
*/
#include <cstring>
using std::strcmp;

#include "ProductRack.h"

Project1::ProductRack::ProductRack(
    StatusPanel &statusPanel,
    const char *allowedProductName,
    DeliveryChute &deliveryChute,
    unsigned productPriceCents)
    : statusPanel(statusPanel),
        deliveryChute(deliveryChute),
        productCount(0),
        productPriceCents(productPriceCents)
{
    // TODO: Implement
}

Project1::ProductRack::~ProductRack()
{
    deleate[] ProductRack;
    // TODO: Implement
}

bool
Project1::ProductRack::isCompatibleProduct(const char *productName) const
{
    // TODO: Implement
    return false;
}

bool
Project1::ProductRack::isFull() const
{
    if(this->productCount == MAX_PRODUCTS){
        cout<<"\nProduct rack is full.\n"
        returns true;
    }else{
        cout<<"\nProduct rack has room for "<< MAX_PRODUCTS - (this->productCount)<<" more products.\n"
        returns false;
    }
    
    // TODO: Implement
}

bool
Project1::ProductRack::isEmpty() const
{   if(this->productCount>0){ //checks if count is bigger than zero
        return false; //if yes, returns not Empty
    }else{
        return true; //else returns is Empty
    }
    // TODO: Implement
    return false;
}

bool
Project1::ProductRack::addProduct(Product* pProduct)
{
    if(!isFull){ //if not full
        this->products.push(pProduct); //add a product to the array
        this->productCount = this->products.size(); //update product count
        //this->productCount+=this->productCount; 

        return true;

    }else{
        return false; //else return false
    }
    // TODO: Implement
    return false;
}

bool
Project1::ProductRack::deliverProduct()
{
   // TODO: Implement
    return false;
}

unsigned
Project1::ProductRack::getNumProductsInRack() const
{
    // TODO: Implement
    return productCount;
}

unsigned
Project1::ProductRack::getProductPriceCents() const
{
    // TODO: Implement
    return this->productPriceCents;
}
