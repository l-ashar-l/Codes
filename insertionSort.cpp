#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
/*
Best case - O(n)
Worst/average case - O(n²)
*/

//insert the min element to the beginning in every check

void insertion_sort(vector<int> a){

	int size = a.size();
	int i, key, j;

	for(i=1; i<size; i++){

		key = a[i];
		j = i-1;

			while(j>=0	&& a[j] > key){		

				a[j+1] = a[j];	// shifting every element to their next
				j--; 	// decrementing j to beginning
			
			}
			a[j+1] = key;
		
	}

	for(auto i: a)
		cout<<i<<" ";

} 

int main(){

	cout<<"Enter size of list: ";
	int size; cin>>size;

	cout<<endl<<"Enter elements: "<<endl;

	vector<int> list(size);

	int i=0;

	while(i<size){

		cin>>list[i];

		i++;
	}

	insertion_sort(list);

	return 0;
}