#include <iostream>
#include <cstring>
using namespace std;

string removeConsecutiveDuplicates(string input)
{
    // Write your code here
    string tmp="";
    bool consecutive=false;
    for(int i=0; i<input.size(); i++){
        if(input[i]==input[i-1]){
            consecutive=true;
        }else{
            consecutive=false;
        }
        if(!consecutive){
            tmp.push_back(input[i]);
        }
    }
    return tmp;
}

int main()
{
    string str;
    cin >> str;
    string ans = removeConsecutiveDuplicates(str);
    cout << ans << endl;
}
