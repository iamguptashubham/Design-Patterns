#include<iostream>
using namespace std;

class Singleton
{
private:
static Singleton* instance;
    Singleton()
    {
        //
    }
public:
    static Singleton* getInstance()
    {
        if(instance == nullptr)
        {
            instance  = new Singleton();
        }
        return instance;
    } 
    void display()
    {
        cout<<"SingleTon object is created @ "<<instance<<endl;
    } 
};

Singleton* Singleton::instance = nullptr;

int main(){
    Singleton* s = Singleton::getInstance();
    Singleton* s2 =Singleton::getInstance();
    s->display();
    s2->display();    
    return 0;
}