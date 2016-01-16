#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    while(t--){
        long int a;
        cin>>a;
        string b = "";
        while( a > 0){
            b = to_string(a % 2)  + b ;
            a = a / 2;
        }
        cout<< b << endl;
    }
    return 0;
}

