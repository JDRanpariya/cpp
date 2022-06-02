#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int sum_even=0, sum_odd=0, num, tmp;
    cin >> num;
    while(num!=0){
        tmp = num%10;
        if(tmp%2==0){
            sum_even+=tmp;
        }
        else{
            sum_odd+=tmp;
        }
        num /= 10;
    }
    
    cout  << sum_even << " " << sum_odd << endl;
    
        
        

    return 0;
}
