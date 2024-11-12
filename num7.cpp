#include <iostream>
#include <string>
using namespace std;

int main(){
    int i = 0, i2=0, i3=0 ,lenght1 = 0, lenght2=0, lenght3=0;   // ввод городов
    cout << "Enter first city ";
    string city1,city2,city3;
    cin >> city1;
    cout << "Enter second city ";
    cin >> city2;
     cout << "Enter third city ";
    cin >> city3;


    while (city1[i] != '\0')    // считаем буквы у городов
    {
        lenght1 += 1;
        i += 1;
    }
    
    
    while (city2[i2] != '\0') 
    {
        lenght2 += 1;
        i2 += 1;
    }
    
    while (city3[i3] != '\0') 
    {
        lenght3 += 1;
        i3 += 1;
    }
    
    if (lenght1>lenght2 and lenght1>lenght3)  // выводим макс
    {
        cout<< "first city has the longest name " << city1;
    }
    if (lenght2>lenght1 and lenght2>lenght3)
    {
        cout<< "second city has the longest name " << city2;
    }
    if (lenght3>lenght2 and lenght3>lenght1)
    {
        cout<< "third city has the longest name " << city3;
    }

    cout << endl;
    
    if (lenght1<lenght2 and lenght1<lenght3)   //выводим мин
    {
        cout<< "first city has the shortest name " << city1;
    }
    if (lenght2<lenght1 and lenght2<lenght3)
    {
        cout<< "second city has the shortest name " <<city2;
    }
    if (lenght3<lenght2 and lenght3<lenght1)
    {
        cout<< "third city has the shortest name " <<city3;
    }







    }

    
