#include <iostream>

using namespace std;

int main(){

	cout << endl;

	int n=7;

	for(int i=0; i<n-1; i++){
		for(int j=0; j<i+1; j++)
			cout << '*';
		if(i==n-2){
			for(int j=0; j<n; j++)
				cout << ' ';
			cout << '*';
		}
		cout << endl;
	}



	for(int i=0; i<n; i++){
		for(int j=n-1; j>i-1; j--)
			cout << '*';

		if(i==0){
			for(int j=0; j<n; j++)
				cout << '*';
			cout << '*';
		}

		if(i==1){
			for(int j=0; j<n; j++)
				cout << ' ';
			cout << '*';
		}

		cout << endl;
	}

	cout << endl;

	return 0;
}