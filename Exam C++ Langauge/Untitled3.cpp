#include <iostream>
using namespace std ;

class Vehicle {
	protected:
	    string model;
	    double speed;
	
	public:
	    Vehicle( string model, double speed) 
		{
			this->model = model ;
			this->speed = speed ;
		}
	
	    void setModel( string model) {
	        this->model = model;
	    }
	
	    string getModel() const {
	        return model;
	    }
	
	    void setSpeed(double speed) {
	        this->speed = speed;
	    }
	
	    double getSpeed() const {
	        return speed;
	    }
	
};

class Car : public Vehicle {
	public:
	    Car( string model, double speed) : Vehicle(model, speed) 
		{
		}
	
	    double calculateTime(double distance) {
	        return distance / speed;
	    }
};

class Bike : public Vehicle {
	public:
	    Bike( string model, double speed) : Vehicle(model, speed) {}
	
	    double calculateTime(double distance) 
		{
	        return distance / (speed * 1.5);
	    }
};

int main() {
    Car car("Toyota", 120);
    Bike bike("Yamaha", 90);

    double distance = 100;

     cout << "Time taken by Car: " << car.calculateTime(distance) << " hours" <<  endl;
     cout << "Time taken by Bike: " << bike.calculateTime(distance) << " hours" <<  endl;

    return 0;
}
