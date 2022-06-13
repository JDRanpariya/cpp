#include <iostream>
using namespace std;

class Car {
    // Write your constructor and printCarInfo method here.
    public:
    int noOfGears;
    string color;
    Car(int Gears, string Color){
        this->noOfGears=Gears;
        this->color=Color;
    }
        public:
    void printCarInfo(){
        cout << "noOfGear: " << noOfGears << endl;
        cout << "color: " << color << endl;
    
    }
    
   
    
};


class RaceCar: public Car {
    // Write your constructor and printRaceCarInfo method here.
    public:
    int maxSpeed;
    int noOfGears;
    string color;
    RaceCar(int Gears, string Color, int maxSpeed):Car(Gears, Color){
        this->noOfGears=Gears;
        this->color=Color;
        this->maxSpeed=maxSpeed;
    }
    public:
    void printInfo(){
        printCarInfo();
        cout << "maxSpeed: " << maxSpeed << endl;
    }
};


int main() {
    int noOfGear, maxSpeed;
    string color;
    cin >> noOfGear >> color >> maxSpeed;
    RaceCar raceCar(noOfGear, color, maxSpeed);
    raceCar.printInfo();
    return 0;
}
