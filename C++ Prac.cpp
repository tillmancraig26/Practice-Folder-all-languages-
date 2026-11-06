// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    string fname;
    int age;
    
    cout<<"Enter your first name:";
    cin>>fname;
    cout<<"Enter your age:";
    cin>>age;

    if(age>=18){
        cout<<"You are eligible to vote "<<fname<<".";
    } else{
        cout<<"You are not eligible to vote "<<fname<<".";
    }

    return 0;
}