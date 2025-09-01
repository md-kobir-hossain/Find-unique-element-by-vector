#include<bits/stdc++.h>
using namespace std;




int main(){
    vector<int>vec;
    int ans=0;
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        vec.push_back(a);
    }
    for(int i=0;i<n;i++){
        ans=ans^vec[i];
    }

    cout<<ans;





return 0;
}
