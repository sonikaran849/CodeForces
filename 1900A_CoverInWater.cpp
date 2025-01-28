#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        
        string sub = "...";
        if(str.find(sub) != string::npos){
            cout<<2<<endl;
        }
        else{
            int cnt = 0;
            for(int i=0;i<n;i++){
                if(str[i] == '.'){
                    cnt++;
                }
            }
            cout<<cnt<<endl;
        }
    }

    return 0;
}