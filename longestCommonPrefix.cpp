#include<iostream>
#include<string>
#include<vector>

using namespace std;

class CommonCollector
{

private:
	vector<string> sentences;

public:

	string lcp(vector<string> &sentences){

		string prefix = "";
		char c = sentences[0][0];
		int count=0;

		for(int i=0; i<sentences.size(); i++){

			string st = sentences[i];

			if(i==sentences.size()-1 && sentences[i][count]==c){
				prefix += c;
				count++;
				i=0;
				if(count==st.size())
					break;

				c = sentences[i][count];

			}

			if(sentences[i][count]==c)
				continue;
			

			else 
				break;
		
		}

	
		return prefix;

	}

	void setter(vector<string> &sentence){

		sentences = sentence;
	}
	
	vector<string> getter(){
		return  sentences;		
	}

};

int main(int argc, char const *argv[])
{
	CommonCollector sentence;

	cout<<"Enter the size: ";
	int size; cin>>size;

	vector<string> temps(size);

	cout<<"Enter Strings to find common prefix: "<<endl;
		for(int i=0; i<size; i++)
			cin>>temps[i];

	sentence.setter(temps);
	
	vector<string>sense = sentence.getter();

/*	for(int i=0; i<sense.size(); i++)
		cout<<sense[i]<<" ";
*/
	cout<<endl<< sentence.lcp(temps);

	return 0;
}