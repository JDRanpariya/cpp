#include <iostream>
using namespace std;

int * reverseArr(int arr [], int n){
    int tmp=0, s=0,e=n-1;
    while(s<=e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return arr;
}

int main() {
    //Write your code here
    int n;
    cin >> n;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    reverseArr(arr, n);

    return 0;
}
