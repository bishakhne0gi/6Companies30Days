#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
bool topo(vector<int> adj[],int *o,int *v,int i){
    v[i]=1;
    o[i]=1;
    bool res=false;
    for(int j=0;j<adj[i].size();j++){
        if(o[adj[i][j]]==1){
            return true;
        }else{
            if(v[adj[i][j]]==0){
                res=res|topo(adj,o,v,adj[i][j]);
                if(res){
                    return true;
                }
            }
        }
    }
    o[i]=0;
    return res;
}
	bool isPossible(int n, vector<pair<int, int> >& pre) {
	    int *ind=new int[n];
	    for(int i=0;i<n;i++){
	        ind[i]=0;
	    }
	    for(int i=0;i<pre.size();i++){
	        if(pre[i].first==pre[i].second){
	            return false;
	        }
	        ind[pre[i].first]++;
	    }
	    int c=0;
	    for(int i=0;i<n;i++){
	        if(ind[i]==0){
	            c++;
	        }
	    }
	    if(c==0){
	        return false;
	    }
	    vector<int> adj[n];
	    for(int i=0;i<pre.size();i++){
	        int j=pre[i].second;
	        adj[j].push_back(pre[i].first);
	    }
	    int *o=new int[n];
	    int *v=new int[n];
	    for(int i=0;i<n;i++){
	        v[i]=o[i]=0;
	    }
	    for(int i=0;i<n;i++){
	        if(v[i]==0){
	            if(topo(adj,o,v,i)){
	                return false;
	            }
	        }
	    }
	   return true;
	}
};
int main(){
	int tc;
	cin >> tc;
	while(tc--){
    	int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        Solution ob;
        if (ob.isPossible(N, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
	}
	return 0;
}  