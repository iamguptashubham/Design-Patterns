#include<iostream>

class Vehicle
{
public:
    //Pure virtual function ---> SubClasses must override this function
    virtual void printVehicle() = 0;
};


class Bike : public Vehicle
{
public:
    void printVehicle() override
    {
        ::std::cout<<"I am bike"<<::std::endl;
    }
};


class Car : public Vehicle
{
public:
    void printVehicle() override
    {
        ::std::cout<<"I am Car"<<::std::endl;
    }
};


class Bus : public Vehicle
{
public:
    void printVehicle() override
    {
        ::std::cout<<"I am Bus"<<::std::endl;
    }
};

class User
{
private:
    Vehicle* vehicle;

public:
    User(int type)
    {
        switch (type)
        {
        case 1:
            this->vehicle = new Bike();
            break;
        case 2:
            this->vehicle = new Car();
            break;
        case 3:
            this->vehicle = new Bus();
            break;
        default:
            this->vehicle = nullptr;
            break;
        }
    }
    void cleanup()
    {
        if(this->vehicle != nullptr)
        {
            delete this->vehicle;
            this->vehicle = nullptr;
        }
    }

    Vehicle* getVehicle()
    {
        return this->vehicle;
    }
};


// Driver Code
int main()
{
    User user(30);
    Vehicle *pVehicle = user.getVehicle();
    if (pVehicle != nullptr)
    {
        pVehicle->printVehicle();
    }
    user.cleanup();
    return 0;
}
