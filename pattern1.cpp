#include <iostream>

using namespace std;

/*

  *********
	*****
	 ***
	  *

*/
int main(){

	int n = 11;

	cout << endl << endl;
	
	if(n%2 == 0 || n <= 1) return 0;	

	int i, j;


	for (int i = 0; i < n/2 +1; ++i){

		for(j=0; j<=i; j++)
			cout << ' ';
		for(j = i+1; j < n - i + 1 ; j++)
			cout << '@';
		cout << endl;
	}	// pyramid

	for(i=0; i<n; i++){
		if(i==0){
			for(j=0; j<n; j++)
				cout << '*';
			cout << endl;
		}
		else{
			for(j=0; j<n; j++){
				if(j==0 || j==n-1)
					cout << '*';
				else
					cout << ' ';
			}
			cout << endl;
		}
	}

	return 0;
}