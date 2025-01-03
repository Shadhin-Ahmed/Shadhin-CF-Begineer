// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;


int main(){

    int x;
    int t;
    cin>>t;
    while(t--){
        cin>>x;

        if((360%(180-x) == 0)){
            cout<<"YES"<<endl;
        }
        
        else {
            cout<<"NO"<<endl;    
        }
    }
    return 0;
}