#include<iostream>
#include<memory>

class Vehicle
{
public:
    //Pure virtual function ---> SubClasses must override this function
    virtual void printVehicle() = 0;
    virtual ~Vehicle(){}
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

class Vehiclefactory
{
public:
    virtual Vehicle* createVehicle() = 0;
    virtual ~Vehiclefactory() {}
};

class BikeFactory : public Vehiclefactory
{
public:
    Vehicle* createVehicle() override
    {
        return new Bike();
    }
};

class CarFactory : public Vehiclefactory
{
public:
    Vehicle* createVehicle() override
    {
        return new Car();
    }
};

class BusFactory : public Vehiclefactory
{
public:
    Vehicle* createVehicle() override
    {
        return new Bus();
    }
};


class User
{
private:
    Vehicle* pVehicle;
public:
    User(Vehiclefactory* factory)
    {
        this->pVehicle = factory->createVehicle();
    }

    Vehicle* getVehical()
    {
        return this->pVehicle;
    }

    ~User()
    {
        if(this->pVehicle != nullptr)
        {
            delete this->pVehicle;
            this->pVehicle = nullptr;
        }
    }
};

//Driver program
int main()
{
    Vehiclefactory* bikeFactory = new BikeFactory();
    User bikeUser(bikeFactory);
    Vehicle* bike = bikeUser.getVehical();
    bike->printVehicle();
    delete bikeFactory;

    Vehiclefactory* busFactory = new BusFactory();
    User busUser(busFactory);
    Vehicle* bus = busUser.getVehical();
    bus->printVehicle();
    delete busFactory;

    return 0;
    
}