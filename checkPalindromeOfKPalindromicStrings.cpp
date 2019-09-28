#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,k;
    cin>>t;
    while(t--){
        string s,temp;
        cin>>s>>k;
        temp=s;
        int len = s.length();
        if(len%k!=0){
            cout<<"NO"<<endl;
        }
        else{
            int n = len/k;
            for(int i=0;i<len;i+=n){
                reverse(s.begin()+i,s.begin()+i+n);
            }
            if(temp==s){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}
