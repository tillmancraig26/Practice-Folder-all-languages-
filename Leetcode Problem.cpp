// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
using namespace std;

bool palin(int x){
    string str = to_string(x);
    string newString = "";

    for(int i = str.length();i>i-i;i--){
        newString = newString + str[i-1];
    }
    int BacktoInt = stoi(newString);
    if(BacktoInt == x){
        return true; 
    }else{
        return false; 
    }
}


int main() {


    
    return 0;
}