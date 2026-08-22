#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
       int sum=0;
        int product=1;
        int ans=0;
        int temp=n;
        while(n>0){
            int digit=n%10;
            sum+=digit;
            product*=digit;
            n=n/10;
        }
        ans=product+sum;
        if(temp%ans==0){
            cout<<"true";
        }
        else{
            cout<<" false";}
        return 0;
}