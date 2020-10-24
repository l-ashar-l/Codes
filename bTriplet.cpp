#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main(int argc, char const *argv[])
{
	int size; cin>>size;
	vector<int>v(size);

	int d; cin>>d;

	for(int i=0;i<size;i++)
		cin>>v[i];

	map<int, vector<int> > m;
	for (int i = 0; i < size; i++){

		m[v[i]].push_back(i);		

	}
	
	for(auto i:m){
	
		cout<<i.first<<" first"<<endl;
		for(auto j=i.second[0];j<i.second.size();j++){
			cout<<j<<" second"<<endl;
		}
	}

	return 0;
}