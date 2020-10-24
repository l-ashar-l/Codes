#include<iostream>
#include<stack>

using namespace std;


string checker(string str){

	if(str.size()%2 !=0)
		return "NO";

	stack<char> s;

	for(auto i:str){

		switch(i){

		 case '{':
		 case '[':
		 case '(':
		 	s.push(i);
	
		 break;

		case')':if(s.empty() || s.top()!='(')
		 			return "NO";
				  
				else
				  	s.pop();
				break;

		case']':if(s.empty() || s.top()!='[')
					return "NO";
	
				else
					s.pop();
				break;

		case'}':if(s.empty() || s.top()!='{')
					return "NO";
				else
					s.pop();
				break;
		}
	}

	return s.empty()? "YES" : "NO";

}

int main(int argc, char const *argv[])
{
	int t; cin>>t;

	while(t--){

		string str; cin>>str;
	
		string answer;
		answer=checker(str);
		cout<<answer<<endl;

	}
	return 0;
}