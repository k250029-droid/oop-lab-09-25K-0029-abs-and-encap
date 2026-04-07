#include<iostream>
using namespace std;

class SmartDevice{
public:
    virtual void turnOn()=0;
    virtual void turnOff()=0;
    virtual void getStatus()=0;
};
class LightBulb:public SmartDevice{
    bool isOn;
    int brightness;
public:
    LightBulb(){
        isOn=false;
        brightness=50;
    }
    void turnOn(){
        isOn=true;
    }
    void turnOff(){
        isOn=false;
    }
    void getStatus(){
        cout<<"LightBulb is "<<(isOn?"ON":"OFF")<<endl;
        cout<<"Brightness: "<<brightness<<endl;
    }
};
class Thermostat:public SmartDevice{
    bool isOn;
    double temperature;
public:
    Thermostat(){
        isOn=false;
        temperature=22.5;
    }
    void turnOn(){
        isOn=true;
    }
    void turnOff(){
        isOn=false;
    }
    void getStatus(){
        cout<<"Thermostat is "<<(isOn?"ON":"OFF")<<endl;
        cout<<"Temperature: "<<temperature<<endl;
    }
};
int main(){
    SmartDevice* d1=new LightBulb();
    SmartDevice* d2=new Thermostat();

    d1->turnOn();
    d2->turnOn();

    d1->getStatus();
    d2->getStatus();

    d1->turnOff();
    d2->turnOff();

    d1->getStatus();
    d2->getStatus();

    delete d1;
    delete d2;
}