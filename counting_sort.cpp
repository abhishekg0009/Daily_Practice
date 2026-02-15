#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	cin.ignore();
	string line;
	getline(cin,line);
	stringstream ss(line);
	vector<int>ans;
	int x;
	while(ss>>x){
		ans.push_back(x);
	}
	if(ans.size()!=n){
		cout<<-1;
		return 0;
	}
	int max_val=*max_element(ans.begin(),ans.end());
	int min_val=*min_element(ans.begin(),ans.end());
	int range=max_val-min_val+1;
	vector<int>count(range,0);
	for(int i=0;i<n;i++){
		count[ans[i]-min_val]++;
	}
	int index=0;
	for(int i=0;i<range;i++){
		while(count[i]--){
			ans[index++]=i+min_val;
		}
	}
	for(int i=0;i<n;i++){
		if(i==n-1){ 
		cout<<ans[i];
			}
		else{
			cout<<ans[i]<<" ";
		}
	}
	return 0;
}