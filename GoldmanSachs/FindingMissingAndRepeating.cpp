#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> arr = {1,3,3};
	int n = arr.size();
	// Note : arr[i]-1 is used instead of arr[i] as we want to use all 64 bits
	int bitOr = (1 << (arr[0]-1));
	int repeating, missing;
	for(int i=1; i<n; i++){
		if((bitOr | (1 << (arr[i]-1))) == bitOr) {
			repeating = arr[i];
			continue;
		}
      cout<<bitOr;
		bitOr = (bitOr | (1 << (arr[i]-1)));
	}
	for(int i=0; i<n; i++){
		if((bitOr | (1 << i)) != bitOr) {
			missing = i+1;
			break;
		}
	}
	
	cout << "Repeating : " << repeating << "\nMissing : " << missing;
	return 0;
}
