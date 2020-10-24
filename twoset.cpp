#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int size1,size2;
	cin>>size1>>size2;

	vector<int> a(size1), b(size2);

	for(int i=0;i<size1;i++)
	 cin>>a[i];

	for(int i=0;i<size2;i++)
	 cin>>b[i];

	int count=0;

	for(int i=0;i<size2;i++){

		bool flag=false;

		for(int j=0;j<size1;j++){
			if(b[i]%a[j]==0){
				flag=true;
			}
			else
				flag=false;
		}
		if(flag==true)
			count++;
	}

	cout<<count;

	return 0;
}