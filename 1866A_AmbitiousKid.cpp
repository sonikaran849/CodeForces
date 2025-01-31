#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int N;
    cin>>N;

    vector<int> arr(N);
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    int mini = INT_MAX;
    for(int i=0;i<N;i++){
        mini = min(mini, abs(0-arr[i]));
    }

    cout<<mini;
    

    return 0;
}