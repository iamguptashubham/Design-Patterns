#pragma once
#include "UPIPayment.h"
#include "CardPayment.h"
#include "CryptoPayment.h"

enum PaymentType
{
    UPI,
    CARD,
    CRYPTO
};

class PaymentFactory
{
public:
    static Payment* createPayment(PaymentType type)
    {
        switch(type)
        {
            case UPI:
                return new UPIPayment();
            case CARD:
                return new CardPayment();
            case CRYPTO:
                return new CryptoPayment();
            default:
                return nullptr;
        }
    }
};