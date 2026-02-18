#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t-- > 0){
        int n,count =0;
        cin>>n;
        vector<int> a(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i] == 0){
                count++;
            }

        }
        if(count ==0 || a[n-1] == 1 || a[0] == 1){
            cout<<"Alice"<<endl;
        }else{
            cout<<"Bob"<<endl;
        }
    }
}
        