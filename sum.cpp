#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long newno=0;
    long long sum = 0;
    long long place = 1;
    while(n>0){
        int digit=n%10;
        if(digit!=0){
            newno+=digit*place;
            sum+=digit;
            place*=10;
        }
        n/=10;
    }
    cout<<newno*sum;
    return 0;
}