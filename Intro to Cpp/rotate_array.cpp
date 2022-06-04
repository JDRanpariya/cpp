#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int n;
    cin >> n;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    int k;
    cin >> k;
    
    for(int i=0; i<k; i++){
        int tmp=arr[0];
        for(int j=0; j<n; j++){
                arr[j] = arr[j+1];           
        }
        arr[n-1]=tmp;
    }
    
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
