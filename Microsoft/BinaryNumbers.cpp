#include<bits/stdc++.h>
using namespace std;
vector<string> generate(int N)
{
	// Your code here
	vector<string>v;
	queue<string>q;
	q.push("1");
	while(N--){
	    string temp=q.front();
	    v.push_back(temp);
	    q.pop();
	    q.push(temp+'0');
	    q.push(temp+'1');
	}
	return v;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}