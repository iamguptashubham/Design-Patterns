#include "Payment.h"

class CryptoPayment : public Payment
{
public:
    void pay(double amount) override
    {
        ::std::cout<<"Paid $ "<<amount<<" using Crypto"<<::std::endl;
    }   
};
