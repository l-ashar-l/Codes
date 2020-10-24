#include<iostream>

using namespace std;

class Solution {
public:
    int trailingZeroes(int n) {
        
        int r=0;

      for(long long i=5; n/i>0; i=(long long)i*5)
           r += n/i;

        return r;
    }
};

int main(int argc, char const *argv[])
{
    Solution S;
    int n;
    cout<<"Number: ";
    cin>>n;

    int t;
    t = S.trailingZeroes(n);
    cout<<endl<<t<<" <-";
    return 0;
}