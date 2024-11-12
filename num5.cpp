#include <iostream>
#include <string>
using namespace std;

int main(){
    int i = 0, lenght = 0;
    string city;
    cin >> city;


    while (city[i] != '\0') 
    {
        lenght += 1;
        i += 1;
    }
    
    
    if (lenght % 2 == 0) {
        cout << "even" << endl;
    }
    else {
        cout << "odd" << endl;
    }
}