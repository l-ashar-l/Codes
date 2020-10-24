#include<iostream>
#include<cmath>

using namespace std;

string minutes(int);
string mins(int);
string hours(int);

int main(int argc, char const *argv[])
{
	
	int hh,mm; cin>>hh>>mm;
	string strHH,strMM;
	
	strHH=hours(hh);

	if(mm==0)
		cout<<strHH<<" o' clock";
	
	if(mm==15)
		cout<<"quarter past "<<strHH;
	
	if(mm!=15 && mm!=30 && mm!=45 && mm!=0){
		if(mm<30){
			
		strMM=mins(mm);
		
		if(mm==1)
			cout<<strMM<<" minute past "<<strHH;
		else
		cout<<strMM<<" minutes past "<<strHH;
		}
	}

	if(mm==30)
		cout<<"half past "<<strHH;

	if(mm==45 && hh!=12){
		int h=hh+1;
		string strHH;

		strHH=hours(h);
		
		cout<<"quarter to "<<strHH;
	}

	if(mm==45 && hh==12){
		cout<<"quarter to one";
	}

	if(mm==59){
		string strMM=minutes(mm);
		hh=hh+1;
		
		if(hh>12)
			cout<<strMM<<" minute to one";
		
		else{
		strHH=hours(hh);
		cout<<strMM<<" minute to "<<strHH;
		
		}		
	}
	
	if(mm>30 && mm<59 && mm!=45){
		string strMM=minutes(mm);

		hh=hh+1;

		if(hh>12)
			cout<<strMM<<" minutes to one";
		
		else{

		strHH=hours(hh);
		cout<<strMM<<" minutes to "<<strHH;
		
		}
	}

	return 0;
}

string hours(int hh){
	
	string strHH;

	if(hh==1)
		strHH="one";
	if(hh==2)
		strHH="two";
	if(hh==3)
		strHH="three";
	if(hh==4)
		strHH="four";
	if(hh==5)
		strHH="five";
	if(hh==6)
		strHH="six";
	if(hh==7)
		strHH="seven";
	if(hh==8)
		strHH="eight";
	if(hh==9)
		strHH="nine";
	if(hh==10)
		strHH="ten";
	if(hh==11)
		strHH="eleven";
	if(hh==12)
		strHH="twelve";

	return strHH;
}

string mins(int mm){
		
	string strMM;
		
	if(mm==1)
			strMM="one";
	if(mm==2)
			strMM="two";
	if(mm==3)
			strMM="three";
	if(mm==4)
			strMM="four";
	if(mm==5)
			strMM="five";
	if(mm==6)
			strMM="six";
	if(mm==7)
			strMM="seven";
	if(mm==8)
			strMM="eight";
	if(mm==9)
			strMM="nine";
	if(mm==10)
			strMM="ten";
	if(mm==11)
			strMM="eleven";
	if(mm==12)
			strMM="twelve";
	if(mm==13)
			strMM="thirteen";
	if(mm==14)
			strMM="fourteen";
	if(mm==16)
			strMM="sixteen";
	if(mm==17)
			strMM="seventeen";
	if(mm==18)
			strMM="eighteen";
	if(mm==19)
			strMM="nineteen";
	if(mm==20)
			strMM="twenty";
	if(mm==21)
			strMM="twenty one";
	if(mm==22)
			strMM="twenty two";
	if(mm==23)
			strMM="twenty three";
	if(mm==24)
			strMM="twenty four";
	if(mm==25)
			strMM="twenty five";
	if(mm==26)
			strMM="twenty six";
	if(mm==27)
			strMM="twenty seven";
	if(mm==28)
			strMM="twenty eight";
	if(mm==29)
			strMM="twenty nine";

	return strMM;
}

string minutes(int mm){
	
	string strMM;

	if(mm==31)
		strMM="twenty nine";
	if(mm==32)
		strMM="twenty eight";
	if(mm==33)
		strMM="twenty seven";
	if(mm==34)
		strMM="twenty six";
	if(mm==35)
		strMM="twenty five";
	if(mm==36)
		strMM="twenty four";
	if(mm==37)
		strMM="twenty three";
	if(mm==38)
		strMM="twenty two";
	if(mm==39)
		strMM="twenty one";
	if(mm==40)
		strMM="twenty";
	if(mm==41)
		strMM="nineteen";
	if(mm==42)
		strMM="eighteen";
	if(mm==43)
		strMM="seventeen";
	if(mm==44)
		strMM="sixteen";
	if(mm==46)
		strMM="fourteen";
	if(mm==47)
		strMM="thirteen";
	if(mm==48)
		strMM="twelve";
	if(mm==49)
		strMM="eleven";
	if(mm==50)
		strMM="ten";
	if(mm==51)
		strMM="nine";
	if(mm==52)
		strMM="eight";
	if(mm==53)
		strMM="seven";
	if(mm==54)
		strMM="six";
	if(mm==55)
		strMM="five";
	if(mm==56)
		strMM="four";
	if(mm==57)
		strMM="three";
	if(mm==58)
		strMM="two";
	if(mm==59)
		strMM="one";

	return strMM;
}