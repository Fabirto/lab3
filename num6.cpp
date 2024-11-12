#include <iostream>
#include <string>
using namespace std;

int main(){
    int i = 0, i2=0 ,lenght1 = 0, lenght2=0;   // ввод фамилий
    cout << "Enter first surname ";
    string surname1,surname2;
    cin >> surname1;
    cout << "Enter second surname ";
    cin >> surname2;


    while (surname1[i] != '\0')    // считаем буквы у фамилий
    {
        lenght1 += 1;
        i += 1;
    }
    
    
    while (surname2[i2] != '\0') 
    {
        lenght2 += 1;
        i2 += 1;
    }
    
    if (lenght2> lenght1) {
        cout << "second surname is longer";
    }
    else {
        cout << "first surname is longer";
    }

    
}