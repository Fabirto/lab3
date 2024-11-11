
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
    
    
    vector<int> v = generate_random_vector<int>(20, -10, 50);
    vector<int> negative;  //копия 
    vector<int>  no_even;
    cout << "start" << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " "; // вывели вектор начальный
    }
    cout << endl << "without the first negative:" <<endl;
    bool passed = false;
    for (int i = 0; i < v.size(); i++) {
        if ((v[i] <0) and (not passed)) {   // удаляем 1 отриц элем
        passed = true;
        }
        else {
            negative.push_back(v[i]);
        }
    }
    
   
   cout << endl;


   for (int i = 0; i < negative.size(); i++) {
        cout << negative[i] << " "; }   
        
        
        
        
        
        // теперь удаляем последний четный
        cout <<endl << "without the last even: " << endl;
        bool passed1 = false;
    for (int i = negative.size()-1; i >-1; i--) {
        if ((negative[i]%2==0) and (not passed1)) {   // удаляем последний четный
        passed1 = true;
        }
        else {
            no_even.push_back(negative[i]);
        }
    }
    
    
    for (int i = no_even.size()-1; i >-1 ; i--) {
        cout << no_even[i] << " "; }   
    
    

    return 0;
}
