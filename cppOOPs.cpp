#include<iostream>
#include<string>

using namespace std;

class Classy{ // constructor is called automatically when an object is created
  		   	 //  i.e., kind of a method which executes

  private: 	
  		string word;

  public: // public:- Very Bad practice
  		 //public:"if main() wants to use a function"
  		//use Set and Get methods in public setter and getter
	
	/*  		
	* Define constructor inside public if want to be pre valued
  	* constructor never have return type
  	* name of constructor is always same as class name
	*/
  		Classy(string w){
  			setWord(w);	
  		}

  		void setWord(string s){
  			word = s;
  		}

  		string getWord(){
  			return word;
  		}	
};


int main(int argc, char const *argv[])
{
/*	
	. separates methods and variables to Class of object	
Syntax for constructor: 
 Classname objectname(parameters datatype of constructor);
each object has its own constructor hence parameter they are distinct
*/
	Classy classified("Hello Wordl!");

	cout<<classified.getWord();

	return 0;
}