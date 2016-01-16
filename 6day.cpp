#include <iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    for(int i = n; i > 0; i--){
        int j = 0;
        while(j<i-1){
            cout<<" ";
            j++;
        }  
        while(j<n){
            cout<<"#";
            j++;
        } 
        cout<<"\n";
    }
    return 0;
}

