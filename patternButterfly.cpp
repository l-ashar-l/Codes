#include <iostream>

using namespace std;

int main(){

	int n; n=5;

	cout << endl;
	for(int i=0; i<n; i++){
		
		for(int j=0; j<i+1; j++)
			cout << '*';
		
		for(int j=n-i; j>0; j--)
			cout << ' ';

		for(int j=n-i; j>0; j--)
			cout << ' ';

		for(int j=0; j<i+1; j++)
			cout << '*';

		cout << endl;
	}

	for(int i=0; i<n; i++){
		
		for(int j=n-i; j>0; j--)
			cout << '*';

		for(int j=0; j<i+1; j++)
			cout << ' ';

		for(int j=0; j<i+1; j++)
			cout << ' ';

		for(int j=n-i; j>0; j--)
			cout << '*';

		cout << endl;
	}


	return 0;
}	