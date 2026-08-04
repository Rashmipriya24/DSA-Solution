#include<bits/stdc++.h>
using namespace std;
int start=0;
        int maxlen=1;
 void expand(string &s,int left,int right){
            while(left>=0&&right<s.size()&&s[left]==s[right]){
                int currlen=right-left+1;
                if(currlen>maxlen){
                    maxlen=currlen;
                    start=left;
                }
                left--;
                right++;
            }
        }
int main(){
    string s;
    cin>>s;
     int n = s.size();
       for(int i = 0;i<n;i++){
        expand(s,i,i);
        expand(s,i,i+1);
       }
       cout<<s.substr(start,maxlen);
       return 0;

}