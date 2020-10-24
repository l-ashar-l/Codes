#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int price, difference, min, total;

	cin>>price>>difference>>min>>total;
	
	int cost=0, item=0;
	
	while(true){
		
		cost=cost+(price);
		//	cout<<cost<<" :cost"<<endl;
		if(price>=min){

		price=price-difference;
		
		}
		if(price<min)
			price=min;

		if(cost>total)
			break;
		//cout<<price<<" :price"<<endl;
		item++;

		
	}
cout<<item;
	return 0;
}