#include <iostream>

using namespace std;

int main(){

	int n; n=5;

	for(int i=0; i<n/2+1; i++){
		
		for(int j=0; j<i+1; j++)
			cout << ' ';

		for(int j=n-i; j>i; j-- )
			cout << '@';

		cout << endl;
	}


	for(int i=1; i<n/2+1; i++){

		for(int j=n/2+1; j>i; j--)
			cout << ' ';

		for(int j=0; j<2*i+1; j++)
			cout << '@';

		cout << endl;
	}

	for(int i=0; i<n+2-1; i++){
		for(int j=0; j<n; j++)
			cout << ' ';
			cout << '*';
		cout << endl;
	}

	for(int i=0; i<n; i++)
		cout << ' ';
	for(int i=0; i<n+2; i++){
		if(i==0 || i==n+2-1)	cout << '*';
		else cout << '@';
	}
	cout << endl;

	for(int i=0; i<n; i++){
		for(int j=0; j<=n*2; j++)
			cout << ' ';
		cout << '*';
		cout << endl;
	}

	int n_space = n*2;

	for(int i=0; i<n/2+1; i++){
		
		for(int j=0; j<n_space; j++)
			cout << ' ';
		
		for(int j=0; j<i+1; j++)
			cout << ' ';

		for(int j=0; j<n-2*i; j++)
			cout << '@';
		cout << endl;
	}

	for(int i=0; i<n/2; i++){
		
		for(int j=0; j<n*2; j++)
			cout << ' ';

		for(int j=n/2; j>=i+1; j--)
			cout << ' ';

		for(int j=0; j<=2*i+2; j++)
			cout << '@';

		cout << endl;
	}


	return 0;
}