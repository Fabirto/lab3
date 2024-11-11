
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
    
    
    vector<int> v = generate_random_vector<int>(20, 1, 50);
    cout << "start" << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " "; // вывели вектор начальный
    }
    cout << endl;
   
   
   
   swap(v[0],v[v.size()-3]);
   swap(v[1],v[v.size()-2]);
   swap(v[2],v[v.size()-1]);
   cout << "swapped first 3 elements: " <<endl;
   for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " "; // вывели вектор начальный
    }
    
    

    return 0;
}
