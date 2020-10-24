#include<iostream>

using namespace std;

int main()
{
	int t; cin>>t;
	while(t--){

	int max_budget, chocolate_cost, min_wrappers;
	cin>>max_budget>>chocolate_cost>>min_wrappers;

	int total_chocolates=max_budget/chocolate_cost;


	if(total_chocolates==min_wrappers)
		cout<<total_chocolates+1<<endl;
		
	if(total_chocolates<min_wrappers)
		cout<<total_chocolates<<endl;
	
	else if(total_chocolates>min_wrappers){

		int wrappers=total_chocolates;
		
		while(wrappers>=min_wrappers){
			wrappers=wrappers-min_wrappers;
			total_chocolates++;
			wrappers++;
		}

		cout<<total_chocolates<<endl;

	}
	
	}

	return 0;
}