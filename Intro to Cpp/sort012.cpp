#include <iostream>
using namespace std;

void sort012(int arr[], int n) {
    //Write your code here
    int zeros=0,twos=0,ones=0;
    int result[n];
    
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            zeros++;
        }
        else if(arr[i]==1){
            ones++;
        }
        else{
            twos++;
        }
    }
    for(int i=0; i<zeros; i++){
        arr[i]=0;
    }
        for(int i=zeros; i<zeros+ones; i++){
        arr[i]=1;
    }
        for(int i=zeros+ones; i<zeros+ones+twos; i++){
        arr[i]=2;
    }

}

int main() {
    int t;
    cin >> t;

    while (t > 0) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort012(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        t--;
    }
    return 0;
}
