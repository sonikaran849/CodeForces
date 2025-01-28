#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int maxi = 0;
        int prev = 0;
        for(int i=0;i<n;i++){
            maxi = max(maxi, arr[i] - prev);
            prev = arr[i];
        }
        if(x > prev){
            maxi = max(maxi, 2*(x-prev));
        }
        
        cout<<maxi<<endl;
    }

    return 0;
}