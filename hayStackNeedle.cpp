#include<bits/stdc++.h>

using namespace std;

class Solution{
	
	public: 
		
		int strstr(string haystack, string needle){

              
            if(haystack=="" && needle!="")
                return -1;
    		
            if( (haystack!="" && needle=="") || ( haystack == needle))
			    return 0;        

			int needle_size = needle.size()-1;
			
			bool checked = false;

			for(int i=0; i<haystack.size(); i++){
				
                
				if(haystack[i]==needle[0]){
					
                    if(i+needle_size >= haystack.size())
                        return -1;
			
                    if(haystack[i+needle_size]==needle[needle_size]){

						int j=0,k=i;
						string s1="";

						while(haystack[k]==needle[j] && j<=needle_size){

							s1 = s1+haystack[k];
							k++;
							j++;	
						if(s1==needle)
							checked = true;
						}
					if(checked==true){
						return i;
					}
                    
                }
			}
		}
		return -1;
   	}
};

int main(int argc, char const *argv[])
{
	Solution checker;
	string haystack,needle;
	cout<<endl<<"Enter Haystack string: ";
	cin>>haystack;
	cout<<endl<<"Enter Needle string: ";
	cin>>needle;

	int t =	checker.strstr(haystack, needle);
	cout<<"I: "<<t<<endl;
	return 0;
}