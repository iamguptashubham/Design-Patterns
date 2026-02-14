#include "UserService.h"
#include "Logger.h"

void UserService::createUser(const std::string &user)
{
    Logger::getInstance().log("Creating user: "+ user );
}