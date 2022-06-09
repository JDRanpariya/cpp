#include<iostream>

using namespace std;

class ComplexNumbers {
    // Complete this class
    int real, imaginary;
    public:
    ComplexNumbers(int real, int imaginary){
        this->real=real;
        this->imaginary=imaginary;
    }
    
    void plus(ComplexNumbers c2){
        real=real+c2.real;
        imaginary=imaginary+c2.imaginary;
    }
    
    void multiply(ComplexNumbers c2){
        int tmp_real=(real*c2.real-imaginary*c2.imaginary);
        int tmp_img=(imaginary*c2.real+ real*c2.imaginary);
        real=tmp_real;
        imaginary=tmp_img;
    }
    
    void print(){
        cout << real << " +" << " i" << imaginary << endl;
    }

};

int main() {
    int real1, imaginary1, real2, imaginary2;

    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;

    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);

    int choice;
    cin >> choice;

    if (choice == 1) {
        c1.plus(c2);
        c1.print();
    } else if (choice == 2) {
        c1.multiply(c2);
        c1.print();
    } else {
        return 0;
    }

}
