#pragma once
#include<iostream>
#include<string>

class Logger
{
private:
    Logger(){}

public:
    Logger(const Logger&) = delete;
    Logger& operator=(const Logger& other) = delete;

    static Logger& getInstance()
    {
        static Logger instance;
        return instance;
    }

    void log(const ::std::string& message)
    {
        ::std::cout<<" [LOG] "<<message<<::std::endl;
    }

};