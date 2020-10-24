#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

/*
average case/worst case- O(n²)

best case- O(n)
*/

/*
	pass = no. of elements-1
*/

void bubble_sort(vector<int> a){

	int pass=a.size();

	for(int t=0; t<pass; t++){

		for(int i=0, j=i+1; i<j, j<pass; i++, j++){

			if(a[i]>a[i+1])
				swap(a[i], a[j]);
		}
	}
	cout<<endl;
	for(auto i:a)
		cout<<i<<" ";
}

int main()
{
	cout<<"Enter size of list: ";
	int size; cin>>size;

	cout<<endl<<"Enter elements: "<<endl;

	vector<int> list(size);

	int i=0;

	while(i<size){

		cin>>list[i];
		i++;
	}

	bubble_sort(list);

	return 0;
}