#include <iostream>

using namespace std;

int main(){

    int n; n=9  ;
    int t=1;
    for(int i=0; i<n/2+1; i++){
        
        for(int j=0; j<t; j++)
            cout << '@';
        t+=2;
        cout << endl;
    }


    

    for(int i=0; i<n; i++){
        for(int j=0; j<1; j++){
            cout<<'*';
        }
        cout << endl;
    }

    for(int i=0; i<n/2; i++){
        for(int j=0; j<=n; j++){
            if(j==0)    cout <<'*';
            else cout << '@';
        }
        cout << endl;
    }    

    return 0;
}