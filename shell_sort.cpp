#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	cin.ignore();
	string line;
	getline(cin,line);
	stringstream ss(line);
	vector<int>a;
	int x;
	while(ss>>x){
		a.push_back(x);
	}
	if(a.size()!=n){
		cout<<-1;
		return 0; 
	}
	for(int gap=n/2;gap>=1;gap/=2){
		for(int j=gap;j<n;j++){
			for(int i=j-gap;i>=0;i-=gap){
				if(a[i+gap]>a[i]){
					break;
				}else
					swap(a[i+gap],a[i]);
			}
		}
	}
	for(int i=0;i<n;i++){
		if(i==n-1){
			cout<<a[i];
		}else
			cout<<a[i]<<" ";
	}
}