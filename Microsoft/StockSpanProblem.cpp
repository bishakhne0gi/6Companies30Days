#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    vector <int> calculateSpan(int price[], int n)
    {
       stack<int> st;
       vector<int> ans;
       ans.push_back(1);
       st.push(0);
       for(int i=1;i<n;i++){
           while(!st.empty() && price[i]>=price[st.top()]){
               st.pop();
           }
           int store = st.empty()? i+1: i-st.top();
           ans.push_back(store);
           st.push(i);
       }
       return ans;
    }
};
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}