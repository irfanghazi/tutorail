#include<iostream>
using namespace std;

int main(){
    int n = 10;
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    for(int i = 1; i <= n; i++){
        int sum = a + b;
        cout << sum << " ";
        a = b;
        b = sum;
    }   

}

// 0 1 1 2 3 5 8 13 21