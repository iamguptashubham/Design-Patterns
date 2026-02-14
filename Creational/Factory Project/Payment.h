#pragma once
#include<iostream>

class Payment
{
public:
    virtual void pay(double amount) = 0;
    virtual ~Payment() {}
};