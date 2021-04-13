#include <iostream>

using namespace std;

//       @
//      @@@
//     @@@@@
//     *   *    
//    **   **
//     *   *

int main(){


    cout << endl << endl;

    int n; n=9;
    
    for(int i=0; i<n/2+2; i++){

        for(int j=n-i; j>0; j--)
            cout<<' ';

        for(int j=0; j<i*2+1; j++)
            cout << '@';
        
        cout << endl;
    }


    for(int i=0;i<n/2; i++){
        
        // First space
        for(int j=n/2; j>i; j--)
            cout << ' ';

        for(int j=0; j<i+1; j++)
            cout << '*';



        //  Blank middle space
        for(int j=0; j<n; j++){
            cout << ' ';
        }
        

        //end @ pattern
        
        for(int j=0; j<i+1; j++)
            cout << '*';


        cout << endl;
    }
    for(int j=0; j<n/2+1; j++)
        cout << '*';

    for(int j=0; j<n; j++)
        cout << '@';

    for(int j=0; j<n/2+1; j++)
        cout << '*';

    cout << endl;

    for(int i=0; i<n/2; i++){

        // Starting Space
        for(int j=0; j<i+1; j++)
            cout << ' ';
        // Starting '*'
        for(int j=n/2-i-1; j>=0; j--)
            cout << '*';

        for(int j=0; j<n; j++)
            cout << ' ';

        for(int j=n/2-i; j>0; j--)
            cout << '*'; 

        cout << endl;

    }


    cout << endl;

    return 0;
}