#include<iostream>
#include<map>

using namespace std;

int main()
{
	string str("ZZYYXXXXAAABBCCCCD");
	
	char ch;

	int count=0;
	
	for(int i=0;i<str.size();i++){
		ch=str[i];
		count=0;
		while(str[i]==str[i+1]){
			count++;
			i++;
		}
		cout<<count+1<<str[i];
	}

	return 0;
}