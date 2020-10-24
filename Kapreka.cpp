#include<bits/stdc++.h>

using namespace std;

int main()
{
	int p,q; cin>>p>>q;
	bool answerFound=false;

	for(int i=p;i<=q;i++){
		// i start from p 
		if(i==1)
			cout<<1<<" ";

		if(i==9)
			cout<<9<<" ";

		else if(i>9){

			long long temp=(long long)i*i;
			//cout<<temp<<endl;
			
			string s=to_string(temp);
			//cout<<s<<" :s"<<endl;
			
			int size=s.size();

			int mid=size/2;

			string s1(""), s2("");
			
			for(int j=0;j<mid;j++){
				s1=s1+s[j];
			}
			for(int k=mid;k<s.size();k++){
				s2=s2+s[k];
			}

			/*cout<<s1<<" : s1" <<endl;
			cout<<s2<<" : s2"<<endl;
			*/
			long int p1=stoll(s1);
			long int p2=stoll(s2);
			

			if(p1+p2==i){
				cout<<i<<" ";
				answerFound=true;
				}
			}

		}
		
		if(answerFound==false)
				cout<<"INVALID RANGE";



return 0;

}