#include<iostream>

using namespace std;

class Person {
    string Name;
    int Age;
    // Complete the class
    public:
    Person(string name, int age){
        Name=name;
        Age=age;
    }
    
    void getValue(){
        cout << "The name of the person is " << Name << " and the age is " << Age << "." << endl;
    }
    
    void setValue(string name, int age){
        Name=name;
        Age=age;
    }

};

int main() {

    //Write your code here
    int age;
    string name;
    cin >> name;
    cin >> age;
    
    Person person(name,age);
    person.getValue();

    return 0;
}
