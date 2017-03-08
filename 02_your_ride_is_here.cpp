/*
ID:siriusl1
LANG: C++11
TASK: ride
*/


#include<cstdio>
#include<iostream>
using namespace std;


int main(void){

	char in ; int comet =1 , group=1;

	freopen("ride.in","r",stdin);
 	freopen("ride.out","w",stdout);


	while(scanf("%c",&in))
		if(in!='\n')
	    	  comet*=(int)in-64;
		else
		   break;

	while(scanf("%c",&in))

		if(in!='\n')
		   group*=(int)in-64;
		else
		   break;

	if(comet%47 ==	group%47)
		cout<<"GO"<<endl;

	else
	   cout<<"STAY"<<endl;


	return 0;
}	


