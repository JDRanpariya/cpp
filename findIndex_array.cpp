#include <iostream>
using namespace std;

int findIndex(int arr [], int n, int x){
    for(int i=0; i<n; i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}

int main() {
    //Write your code here
    int n;
    cin >> n;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    int x;
    cin >> x;
    
    cout << findIndex(arr,n,x);

    return 0;
}
