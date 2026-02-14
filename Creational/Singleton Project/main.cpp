#include<iostream>
#include "Logger.h"
#include "UserService.h"
#include "OrderService.h"

int main(){
    
    Logger::getInstance().log("Application Started !");

    UserService user;
    OrderService order;

    user.createUser("Shubham");
    order.placeOrder(1001);

    Logger::getInstance().log("Application Finished execution !!!");
    return 0;
}