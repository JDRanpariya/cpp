#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int n,sum=0;
    cin >> n;
    if(n>=2){
    for(int i=2; i<=n; i+=2){
        sum += i;
    }
    }
    else{
        sum=0;
    }
    cout << sum;
    return 0;
}
