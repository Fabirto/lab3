#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "enter your word" <<endl;
    string word;
    cin >> word;
    int i = 0, m, n;   // ввод слова
    cout<< "enter the boundaries" <<endl;
    cin >> m;
    cin >>n;


    while (word[i] != '\0')    // выводим
    {
         
        if (i>=m-1 and i<=n-1){
            cout << word[i];
        }
       i += 1;
    }
    
    
}
    
    




    
