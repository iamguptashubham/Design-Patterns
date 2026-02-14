#include "Payment.h"

class UPIPayment : public Payment
{
public:
    void pay(double amount) override
    {
        ::std::cout<<"Paid $ "<<amount<<" using UPI"<<::std::endl;
    }   
};
