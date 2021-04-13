#include <iostream>

using namespace std;

int main(){


	int n = 5;

	for(int i=0; i<n; i++){
		
		for(int j=0; j<n*2; j++)
			cout << ' ';

		for(int j=0; j<i+1; j++)
			cout << ' ';
		
		for(int j=0; j<n*2-i*2; j++){

			if(j%2 == 0)	cout << '*';
			
			else cout << ' ';
		}

		cout << endl;
	
	}

	for(int i=1; i<n; i++){
		
		for(int j=0; j<n*2; j++)
			cout << ' ';

		for(int j=n; j>i; j--)	cout << ' ';
		
		for(int j=0; j<i*2+1; j++){

			if(j%2 == 0)	cout << '*';

			else cout << ' ';
		}

		cout << endl;
	}
	cout << ' ';

	for(int j=0; j<n*2; j++)
			cout << ' ';

	for(int i=0; i<n*2; i++){
		
		if(i%2==0) cout << '@';
		else	cout << ' ';
	}

	cout << endl;

	for(int i=0; i<n/2-1; i++){
		cout << ' ';

		if(i<n/2)
		for(int j=0; j<n*2; j++)
			cout << ' ';

		for(int j=1; j<n*2; j++){

			if(j==1 || j == n*2-1)	cout << '@';

			else cout << ' ';

		}

		cout << endl;
	}

	for(int i=0; i<n/2+1; i++){
		
		for(int j=n; j>i*2-1; j--)
			cout << ' ';

		for(int j=0; j<(2*i+1)*2-1; j++)
			if(j%2 == 0)	cout << '@';
			else cout << ' '; 

		for(int j=0; j<n-1-i*2; j++)
			cout << ' ';
		cout << '@';


		for(int j=n*2-2; j>0; j--){
			if(j==1) cout << '@';
			else cout << ' ';
		}

		for(int j=n-i-1; j>i; j--)
			cout << ' ';

		for(int j=0; j<i*4+1; j++){
			if(j%2 == 0)	cout << '@';
			else cout << ' ';
		}

		cout << endl;
	}
		
	return 0;
}