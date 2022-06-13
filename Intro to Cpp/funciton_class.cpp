#include<iostream>

#include<algorithm>

using namespace std;

class Fraction {
    public:
        int Numerator, Denominator;
    
        Fraction(){
            Numerator=0;
            Denominator=0;
        }
    
        Fraction(int N, int D){
            Numerator=N;
            Denominator=D;
        }
    
        void add(Fraction y){
            Numerator=Numerator*y.Denominator + y.Numerator*Denominator;
            Denominator=Denominator*y.Denominator;
            int gcd = __gcd(Numerator,Denominator);
            Numerator/=gcd;
            Denominator/=gcd;
        }
    
        void multiply(Fraction y){
            Numerator=Numerator*y.Numerator;
            Denominator=Denominator*y.Denominator;
            int gcd = __gcd(Numerator,Denominator);
            Numerator/=gcd;
            Denominator/=gcd;
        }
    
        void simplify(Fraction x){
            
        }
    
        void Print(){
            cout << Numerator << "/" << Denominator << endl;
        }
    // Complete the class

};

int main() {

    //Write your code here
    int N,D,optime, Ny, Dy, query;
    cin >> N >> D;
    cin >> optime;

    
    
       Fraction f1(N,D);
       
    for(int i=0; i<optime; i++){
        cin >> query >> Ny >> Dy;
        Fraction f2(Ny,Dy);
       switch(query){
           case 1:
               f1.add(f2);
               break;
           case 2:
               f1.multiply(f2);
               break;
    }
   f1.Print();
    }
    


    return 0;
}
