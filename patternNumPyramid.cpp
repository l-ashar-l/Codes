#include <iostream>

using namespace std;

/*
			1
		   222
		  33333
		 4444444
		555555555
*/
int main(){

	int n; n=5;

	for(int i=0; i<n; i++){
		for(int j=n-i; j>0; j--)
			cout << ' ';
	
	for(int j=1; j<=(2*i)+1; j++)
		cout << i+1 ;

		cout << endl;
	}

/*		1
	   121
	  12321
	 1234321
	123454321
*/
	cout << endl;

	for(int i=0; i<n; i++){
		
		for(int j=n-i; j>0; j--)
			cout << ' ';

		for(int j=1; j<=i+1; j++)
			cout << j;


		for(int j=i; j>0; j--)
			cout << j;

		cout << endl;
	}

	cout << endl;

	return 0;
}