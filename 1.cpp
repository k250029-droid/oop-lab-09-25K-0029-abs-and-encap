#include<iostream>
using namespace std;

class Vehicle{
protected:
    string model;
    double rate;
public:
    Vehicle(string m,double r){
        model=m;
        rate=r;
    }
    virtual double getDailyRate()=0;
    virtual void displayDetails()=0;
};
class Car:public Vehicle{
public:
    Car(string m,double r):Vehicle(m,r){}
    double getDailyRate(){
        return rate;
    }
    void displayDetails(){
        cout<<"Car Model: "<<model<<endl;
        cout<<"Rate: "<<rate<<endl;
    }
};
class Bike:public Vehicle{
public:
    Bike(string m,double r):Vehicle(m,r){}
    double getDailyRate(){
        return rate;
    }
    void displayDetails(){
        cout<<"Bike Model: "<<model<<endl;
        cout<<"Rate: "<<rate<<endl;
    }
};

int main(){
    Vehicle* v1=new Car("Civic",5000000);
    Vehicle* v2=new Bike("Suzuki",150000);

    v1->displayDetails();
    cout<<"Daily Rate: "<<v1->getDailyRate()<<endl;

    v2->displayDetails();
    cout<<"Daily Rate: "<<v2->getDailyRate()<<endl;

    delete v1;
    delete v2;
}