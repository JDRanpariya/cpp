#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int x,n, pow_of_num=1;
    cin >> x >> n;
    for(int i=1; i<=n; i++){
        pow_of_num *= x;
    }
    cout << pow_of_num;
    return 0;
}
