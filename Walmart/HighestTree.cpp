
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    int height(int N){
        int d = sqrt(1+ (8*N)) ; 
        int ans = -1 + d ; 
        return ans/2 ;
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.height(N)<<endl;
    }
    return 0;
} 