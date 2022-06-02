#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //Write your code here
    double hra, da, pdf, pf, basic;
    double total_salary;
    long long int allow;
    char grade;
    cin >> basic >> grade;
    
    switch(grade){
        case 'A': 
            allow = 1700;
            break;
        case 'B':
            allow = 1500;
            break;
        case 'C':
            allow = 1300;
            break;   
        default:
            allow = 1300;
    }
    
    hra = basic*0.2;
    da = basic*0.5;
    pf = basic*0.11;
    
    double salary = basic + hra + da - pf;

    int ans = round(salary) + allow;

    cout << ans;
    

    return 0;
}
