#include <iostream>

using namespace std;

    //Write your countBits function here
int countBits(int n){
    int reminder=0,count=0;
    while(n>0){
        reminder = n%2;
        if(reminder){
            count++;
        }
        n /= 2;
    }
 
    return count;
}

int main() {
    int n;
    cin >> n;
    cout << countBits(n);
    return 0;
}
