#include "OrderService.h"
#include "Logger.h"


void OrderService::placeOrder(int orderId)
{
    Logger::getInstance().log("Placing order of order id: "+::std::to_string(orderId));
}