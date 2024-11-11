
#include <algorithm>
#include <iostream>
#include <random>
#include <vector>
using namespace std;

template<class T>
vector<T> generate_random_vector(size_t num, T min = -10, T max = 10)
{
    random_device rd;
    mt19937 e2(rd());
    uniform_real_distribution<> dist(min, max);

    auto lambda = [&e2, &dist] () -> T { return dist(e2); };

    vector<T> result(num);
    generate_n(result.begin(), num, lambda);
    return result;
}


int main()
{
    int a;
    cout << "enter A"; // ввод а
    cin >> a;
    vector<int> v = generate_random_vector<int>(10, 1, 50);
    cout << "start" << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " "; // вывели вектор начальный
    }
    
    cout <<endl << "double nums" << endl;
    for (int i = 0; i < v.size(); i++) {
        v[i] *=2;   // вывели двойной вектор
    }
    cout << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    
    
    
    cout <<endl << "substracted A" << endl;
    // вычитаем а 
    for (int i = 0; i < v.size(); i++) {  
        v[i] -=a;
    }
     // выводим после вычитания
    cout << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    
    
    
    
    
    cout <<endl << "division by the first elem " << v[0] <<endl;
    // делим на 1 элем и сразу выводим
    for (int i = 1; i < v.size(); i++) {  
       cout << double(v[i]*(1.0)/v[0]) << " "; // v[i] надо превратить в дабл, потом поделить
    }

    
    
    

    return 0;
}
