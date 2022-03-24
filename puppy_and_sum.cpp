#include <iostream>
using namespace std;

int sumF(int x,int y){
    
        int D=x,N=y,F,s;
	    while(D!=0){
	        F=N*(N+1)/2;
	        s=F;
	        N=s;
	        D--;
	    }
	    cout << N << "\n";
	    return N;
	}

int main() {
	// your code goes here

	
	
	int i=0,t;
	
	cin >> t;
	for(i=0;i<t;i++){
	    int x,y;
	    cin >> x >> y ;
	    sumF(x,y);
	}
	return 0;
}
