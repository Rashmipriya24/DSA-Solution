#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
      int largest=-1;
        int secondlargest=-1;
        while(n>0){
            int digit=n%10;
            if(digit>largest){
                
                secondlargest=largest;
                largest=digit;
            }
            else if(digit>secondlargest){
                secondlargest=digit;
            }
            n/=10;
        }
        cout<<largest*secondlargest;
}