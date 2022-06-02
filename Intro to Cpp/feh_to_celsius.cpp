#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int start, end, step;
    cin >> start >> end >> step;
    for(int i = start; i<=end; i+=step){
        float celsius = (i-32)/1.8;
        cout << i << " " << (int)celsius << endl;
    }
    return 0;
}
