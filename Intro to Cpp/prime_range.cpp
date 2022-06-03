#include <iostream>
#include <cmath>

using namespace std;

//Write your totalPrime function here
int isPrime(int number){
    int count=0, tmp=0;
    if(number<0){
        return 0;
    }
    for(int i=2; i<=number/2; i++){
        if(number%i==0){
            return 0;
        }
        
    }
    return 1;
}


int totalPrime(int S, int E){
    int count=0;
    
    for(int i=S; i<=E; i++){
        if(isPrime(i)==1){
            count++;
        }
    }
    
    return count;
}


int main() {
    int S, E;
    cin >> S >> E;
    cout << totalPrime(S, E);
    return 0;
}
