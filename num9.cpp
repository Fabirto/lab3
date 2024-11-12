#include <iostream>
#include <string>
using namespace std;

int main(){
    int i = 0, lenght = 0;
    string city;      // вводим слово
    cin >> city;


    while (city[i] != '\0')   //считаем кол-во букв
    {
        lenght += 1;
        i += 1;
    }
         // выводим звездочки
    for (int i=0; i<lenght;i++) {
        cout << "*";
    }
    cout <<city;
    for (int i=0; i<lenght;i++) {
        cout << "*";}
}