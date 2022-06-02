#include <iostream>
using namespace std;

int main() {
    //Write your code here
    char a;
    int ascii_value;
    cin >> a;
    ascii_value=int(a);
    if(ascii_value>= 97 && ascii_value<= 122){
        cout << 0 << endl;
    }
    else if(ascii_value>=65 && ascii_value<=90){
        cout << 1 << endl;
    }
    else{
        cout << -1 << endl;
    }
    return 0;
}
