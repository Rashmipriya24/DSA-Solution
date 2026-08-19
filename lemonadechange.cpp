#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>bills(n);
    for(int i =0;i<n;i++){
        cin>>bills[i];
    }
    int count5=0;
        int count10=0;
        
        for(int i =0;i<bills.size();i++){
            if(bills[i]==5){
                count5++;

            }
            else if(bills[i]==10){
                if(count5==0){
                    cout<<false;
                }
             
                    count10++;
                    count5--;
                

            }
            else if(bills[i]==20){
                if(count10>=1&&count5>=1){
                    count10--;
                    count5--;
                }
                else if(count5>=3){
                    count5-=3;
                }
                else{
                   cout<< false;
                }
            }
        }
        cout<<"true";
        return 0;
}