#include <iostream>

using namespace std;

// count function should go here
unsigned int count(const string& str){
    unsigned int counter = 0;
    bool on_space = true;
    
    for(int i = 0; i < str.size(); i++){
        if(isspace(str[i])){
            on_space = true;
        }
        else if (on_space){
            counter++;
            on_space = false;
        }
    }
    return counter;
}
