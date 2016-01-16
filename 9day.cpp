#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int find_max(int c,int d){
    if(c > d)
        return c;
    else {
        //cout<<"returning d"<<d;
        return d;
    }
}
int find_min(int c,int d){
    if(c < d){
        ///cout<<"returning c"<<c;
        return c;
    }
    else 
        return d;
}
int find_gcd(int x,int y){
    //Write base condition
    int a =x;
    int b =y;
    if (b == 0)
        return a;
    else{
        a = find_max(x,y);
        b = find_min(x,y);
        //cout<<a<<b<<endl;
        return find_gcd(b,a%b);
    }        
}
int main() {
    int a,b;
    cin>>a>>b;
    int gcd=find_gcd(a,b);
    cout<<gcd;
    return 0;   
}

