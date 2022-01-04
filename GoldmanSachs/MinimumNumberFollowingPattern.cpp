#include <bits/stdc++.h>
using namespace std;

void findMinFromPattern(string s){
	stack<int> st;
	for(int i=0;i<=s.length();i++){
		st.push(i+1); 
		if(s.length()==i || s[i]=='I' ){ 
			while(!st.empty()){ 
				cout<<st.top();
				st.pop();
			}
		}
	}
	cout<<endl;
}

int main(){
	cout<<"enter pattern\n";    
	string s;
	cin>>s;
	
	if(s.length()>8){
		cout<<"Not possible,length>8\n";
	}
	else{
		cout<<"The minimum number generated is:\n";
		findMinFromPattern(s);
	}
	
	return 0;
}