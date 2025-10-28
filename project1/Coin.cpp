/*
 * Vending Machine Project
 * CSE-40477
 *
 * Coin.cpp
 * YOU MUST IMPLEMENT THE FUNCTIONS IN THIS FILE.
 */

#include "Coin.h"
#include <iostream>
using namespace::std;

Project1::Coin::Coin(CoinType denomination) : denomination(denomination) {
  cout<<"Coin type: ";
  switch (denomination){ //And return a message based on coin type if known, or UNKNOWN if not.
    case COINTYPE_WOODEN_NICKEL:
      cout<<"A wooden Nickel.\n";
      break;
    case COINTYPE_PENNY:
      cout<<"A penny.\n";
      break;
    case COINTYPE_NICKEL:
      cout<<"A nickel.\n";
      break;
    case COINTYPE_DIME:
      cout<<"A dime.\n";
      break;
    case COINTYPE_QUARTER:
      cout<<"A quarter.\n";
      break;
    case COINTYPE_HALF_DOLLAR:
      cout<<"Half a dollar.\n";
      break;
    case COINTYPE_DOLLAR:
      cout<<"A dollar.\n";
      break;
    default:
      cerr<<"UNKNOWN.\n";
      break;
  }

}

Project1::Coin::CoinType Project1::Coin::getDenomination() const {
  return denomination;
}

unsigned Project1::Coin::getValueCents() const {
  // TODO: Implement
return static_cast<unsigned>(denomination);
}