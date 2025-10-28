/*
 * Vending Machine Project
 * CSE-40477
 *
 * DeliveryChute.cpp
 * YOU MUST IMPLEMENT THE FUNCTIONS IN THIS FILE.
 */
#include "DeliveryChute.h"

Project1::DeliveryChute::DeliveryChute(StatusPanel &statusPanel)
    : statusPanel(statusPanel), pProduct(0) {
  // TODO: Implement
}

Project1::DeliveryChute::~DeliveryChute() {
  // TODO: Implement
  if (pProduct != 0)
    delete pProduct;
}

bool Project1::DeliveryChute::insertProduct(Product *pProduct) {
  // TODO: Implement
  if(this->pProduct==0){
    this->pProduct = *pProduct;
    return true;
  }else{
    this->statusPanel = ESSAGECODE_CHUTE_FULL;
    return false;
  }
  
}

Project1::Product *Project1::DeliveryChute::retrieveProduct() {
  // TODO: Implement
  if(pProduct == 0){
    return 0;
  }else{
  Product *temp = this->pProduct; //copy value of pProduct
  this->pProduct = 0; //sets product back to 0 since product was retrieved
  return temp; //returns the previous value (not 0) or pProduct
  }
}

bool Project1::DeliveryChute::containsProduct() const {
  // TODO: Implement
  if(pProduct>0){
    return true;
  }else{
  return false;
  }
}