#include "PaymentFactory.h"
#include<iostream>

int main(){
    Payment* upi = PaymentFactory::createPayment(UPI);
    Payment* crypto = PaymentFactory::createPayment(CRYPTO);

    upi->pay(63.5);
    crypto->pay(1001.5);

    delete upi;
    delete crypto;

    return 0;
}