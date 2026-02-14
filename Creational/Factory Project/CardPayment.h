#include "Payment.h"

class CardPayment : public Payment
{
public:
    void pay(double amount) override
    {
        ::std::cout<<"Paid $ "<<amount<<" using Card"<<::std::endl;
    }   
};
