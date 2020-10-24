#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
 	string str;
	string str2;
	
	getline(cin, str);
	
	for(int i=0;i<str.size();i++){
		if(str[i]!=' ')
			cout<<str[i];
		if(str[i]==' ' && str[i+1]!=' ')
			cout<<str[i];
		else
			continue;
	}

 return 0;
}