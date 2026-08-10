#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n = s.size();

    int vowelcount=0;
    int consonantcount=0;
    for(char &c:s){
        char lower=tolower(c);
        if(lower=='a'||lower=='e'||lower=='i'||lower=='o'||lower=='u'){
            vowelcount++;
        }
        else{
            consonantcount++;
        }
        if(isupper(c)){
            c=tolower(c);
        }
        else if(islower(c)){
            c=toupper(c);
        }
    }
    cout<<vowelcount<<" ";
    cout<<consonantcount<<" ";
    cout<<s;

}