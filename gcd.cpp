#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int oddsum = n*n;
    int evensum = n*(n+1);
    cout<<__gcd(oddsum,evensum);
    return 0;
}5