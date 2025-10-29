/*
* Vending Machine Project
* CSE-40477
*
* VendingMachine.cpp
* YOU MUST IMPLEMENT THE FUNCTIONS IN THIS FILE.
*/
#include "VendingMachine.h"

Project1::VendingMachine::VendingMachine(
    ostream &statusPanelStream,
    const char *productNames[NUM_PRODUCT_RACKS],
    unsigned productPrices[NUM_PRODUCT_RACKS])
    : statusPanel(statusPanelStream),
        deliveryChute(statusPanel),
        numCoins(0),
        unspentMoneyCents(0)
{
    // TODO: Implement
    
}

Project1::VendingMachine::~VendingMachine()
{
    Coin::~Coin;
    DeliveryChute::~DeliveryChute;
    ProductButton::~ProductButton;
    Product::~Product;
    ProductRack::~ProductRack;
    StatusPanel::~StatusPanel;
    delete VendingMachine;
}

bool
Project1::VendingMachine::insertCoin(Coin *pCoin)
{
    Coin::Coin c(*pCoin);
    if(c.getDenomination() == COINTYPE_WOODEN_NICKEL){
        this-> statusPanel.displayMessage(MESSAGE_CODE_BAD_COIN);
        return false;
    }else{
        this->coinBox.push(c);
        this->numCoins = this->coinBox.size();
        cout<<"Updated numCoins to "<<this->numCoins<<endl;
        this->unspentMoneyCents += c.getValueCents();
        cout<<"Updated unspent cents to: "<<this->unspentMoneyCents<<endl;

        return true;
    }
   // Inserts a coin into the vending machine coin slot; this
        //      increases the current balance that can be used to purchase
        //      products.  If the coin is invalid (a wooden nickel) the coin
        //      will be rejected and MESSAGE_CODE_BAD_COIN will be output to
        //      the status panel.  It is safe to assume that no more than
        //      MAX_COINS will ever be inserted into the vending machine.
    // TODO: Implement
    return false;
}

bool
Project1::VendingMachine::pressButton(int button)
{
   // TODO: Implement
    return false;
}

Project1::Product *
Project1::VendingMachine::retrieveProduct()
{
    // TODO: Implement
    return 0;
}

bool
Project1::VendingMachine::addProduct(Product *pProduct)
{
    // TODO: Implement
    return false;
}

unsigned
Project1::VendingMachine::getProductCount(const char *productName) const
{
    // TODO: Implement
    return 0;
}

unsigned
Project1::VendingMachine::countTill() const
{
    // TODO: Implement
    return 0;
}

unsigned
Project1::VendingMachine::getNumCoinsInCoinBox() const
{
    // TODO: Implement
    return 0;
}
