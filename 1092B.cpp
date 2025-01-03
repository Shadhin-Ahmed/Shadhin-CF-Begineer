// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    int count =0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i+=2){
        count+=(a[i+1]-a[i]);
    }
    cout<<count<<endl;
    return 0;
}