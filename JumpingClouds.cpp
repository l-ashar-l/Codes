#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	int size; 
	cin>>size;
	
	vector<int> clouds(size);
	for(int i=0;i<size;i++)
		cin >> clouds[i];

	int pointer=0, jumps=0;
	
	vector<int> temp(size, 1000000);

	for(int i=0; i<clouds.size(); i++){
		if(clouds[i]==1)
			temp[i] = -1;
	}
	temp[0] = 0;

	for(int i=0;i< size - 1;i++){
		// cout<< i << ' ';
		if (temp[i] == -1)
			continue;
		if (i + 1 < size && temp[i + 1] != -1)
			temp[i + 1] = min(temp[i + 1], temp[i] + 1);
		if (i + 2 < size && temp[i + 2] != -1)
			temp[i + 2] = min(temp[i + 2], temp[i] + 1);
		// break;
	}
	// cout << endl;
	for (auto i : temp)
		cout << i << ' ';
	// cout << temp[temp.size() - 1] << endl;
    
	return 0;
}