#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

string removeAllOccurrencesOfChar(string input, char letter) {
    // Write your code here
    string result="";
    for(int i=0; i<input.size(); i++){
        if(input[i]!=letter){
            result+=input[i];
        }
    }
    return result;
}

int main() {
    string input;
    char c;
    cin >> input >> c;
    string output = removeAllOccurrencesOfChar(input, c);
    cout << output << endl;
    return 0;
}
