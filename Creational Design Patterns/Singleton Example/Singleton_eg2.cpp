#include<iostream>
using namespace std;

class Singleton
{
private:
    Singleton() {}

public:
    Singleton(const Singleton&) = delete; //Restrict copy constructor
    Singleton& operator=(const Singleton& other) = delete;  //Restrict Assignment 

    static Singleton& getInstance()
    {
        static Singleton instance;
        return instance;
    }

    void display()
    {
        cout<<"Object is @ "<<this<<endl;
    }
};


int main(){
    Singleton& s = Singleton::getInstance();
    s.display();  
    return 0;
}