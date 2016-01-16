#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long int n;
    cin>> n;
    string nam,query;
    int number[n];
    string name [n];
    string queries[n];
   // vector<string> name ;
   // vector<string> queries;
    for (int k = 0; k < n; k++){
        cin>>name[k];
        cin>>number[k];
        //name.push_back(nam);
        //number.push_back(numb);
    }
	int s = 0;
    while(!cin.eof()){
        cin>>queries[s];
        
    }
    for(int j =0; j < s; j++){
        int flag =0;
        for ( int i= 0; i < n; i++ ){
            if (name[i] == queries[j]){
                cout<<name[i]<<"="<<number[i]<<endl;
                flag = 1;
                break;
            }

        }
        if(flag == 0){
            cout<<"Not found"<<endl;
        }
    }

    return 0;
}

