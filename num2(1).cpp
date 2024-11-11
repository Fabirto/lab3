
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
    int k1,k2,s1,s2;
    cout << "enter k1" << endl;
    cin>> k1;
    cout << "enter k2" << endl;
    cin>> k2;
    cout << "enter s1" << endl;
    cin>> s1;
    cout << "enter s2" << endl;
    cin>> s2;
    
    vector<int> v = generate_random_vector<int>(10, 1, 50);
    cout << "start" << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " "; // вывели вектор начальный
    }
    int sum = 0; 
    for (int i = 0; i < v.size(); i++){   
        sum += v[i];   // считаем сумму 
    }
    cout << endl << "sum: " << sum<< endl; //выводим сумму
    
    
    
    int sumpow = 0; 
    for (int i = 0; i < v.size(); i++){   
        sumpow += pow(v[i],2);   // считаем сумму 
    }
    cout << endl << "sumpow: " << sumpow; //выводим сумму
    
    
    
    int sumk1k2 = 0; 
    for (int i = k1-1; i < k2; i++){   
        sumk1k2 += v[i];   // считаем сумму от к1 до к2
    }
    cout << endl << "sum from k1 to k2: " << sumk1k2; //выводим сумму
    
    
    int averag = 0; 
    int amount = 0;
    for (int i = s1-1; i < s2; i++){   
        averag += v[i];   // считаем сумму от к1 до к2
        amount++;
    }
    cout << endl << "average: " << double(averag*1.0/amount); //выводим среднее арифм
   
    
    

    return 0;
}
