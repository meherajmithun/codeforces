#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    getline(cin,a);
    for(int i=0;i<a.size();i++){
        if(a[i]=='\\'){
            break;
        }
        cout<<a[i];
    }
}
