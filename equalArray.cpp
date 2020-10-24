#include<iostream>
#include<map>
#include<vector>

using namespace std;

int main(){

	int size; cin>>size;
	vector<int> v(size);
	
	for(int i=0;i<size;i++){
		cin>>v[i];
	}

	map<int, int> M;

	for(int i:v){
		M[i]++;
	}

	for(auto &p: M){
		cout<<p.first<<"->"<<p.second<<endl;
	}

	int sum=0,mx=0;
	
	for(auto &p:M){
		if(mx<p.second)
			mx=p.second;
		
			sum=sum+p.second;
	
	}

	cout<<sum-mx;


	return 0;
}