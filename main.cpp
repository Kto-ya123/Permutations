#include <iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;

int factorial (int x)
{
    if( x == 0 ) return 1;
    return x * factorial (x - 1);
}

int main()
{
    vector<int> numbers;
    int N;
    cin >> N;
    for(int i(N); i > 0; i--){
        numbers.push_back(i);
    }
    for(int i(0); i < factorial(N); i++){
        for(const int& number : numbers){
            cout << number << " ";
        }
        cout << endl;
        next_permutation(numbers.begin(), numbers.end(), [](int a, int b){return a > b;});
    }
    return 0;
}
