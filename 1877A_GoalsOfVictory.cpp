#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n-1);
        for(int i=0;i<arr.size();i++){
            cin>>arr[i];
        }

        int ans = 0;

        for(int i=0;i<arr.size();i++){
            ans += arr[i];
        }

        cout<<(ans*-1)<<endl;
        
    }

    return 0;
}