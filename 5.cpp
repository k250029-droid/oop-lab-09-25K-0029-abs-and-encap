#include <iostream>
using namespace std;

class Activity{
public:
virtual double calculateCaloriesBurned()=0;
};

class Running:public Activity{
double distance;
double time;
public:
Running(double d,double t){
distance=d;
time=t;
}
double calculateCaloriesBurned(){
return distance*60;
}
};

class Cycling:public Activity{
double speed;
double time;
public:
Cycling(double s,double t){
speed=s;
time=t;
}
double calculateCaloriesBurned(){
return speed*time*5;
}
};

int main(){
Running r(5,30);
Cycling c(20,1);
cout<<r.calculateCaloriesBurned()<<endl;
cout<<c.calculateCaloriesBurned()<<endl;
return 0;
}