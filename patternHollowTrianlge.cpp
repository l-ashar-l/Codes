#include <iostream>

using namespace std;

int main(){


	char a[100][100];

	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++)
			a[i][j] = ' ';
	}

	cout << endl << endl;

	int n; n=6;

	for(int i=0; i<n; i++){
		for(int j=n-1; j>0; j--){
				a[0][j] = '*';
				a[i][0] = '*';
			
			if(i+j == n-1)
				a[i][j] = '*';
		}

	}

	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++)
			cout << a[i][j] << ' ';
		cout << endl;
	}


	return 0;

}