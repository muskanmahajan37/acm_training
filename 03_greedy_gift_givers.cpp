/*
ID:siriusl1
LANG: C++11
TASK: gift1
*/


#include<iostream>
#include<stddef.h>
#include<stdio.h>
using namespace std;


int main(void){



	struct list{
	   string name;
	   int money=0;
	};
	

	int n;

	freopen("gift1.in","r",stdin);
	freopen("gift1.in","w",stdout);

	
	 cin.ignore();

	struct list gift_giver[n];

	for(size_t i = 0 ; i<n ; i++)
	    cin>>gift_giver[i].name;
	
	for(size_t i=0; i<n ;i++){
	   
	   string temp ; cin>>temp ;
	   int amount  ; cin>>amount; cin.ignore();
	   int n_people; cin>>n_people; cin.ignore();
	 	
	   if(n_people>0)
	      amount/=n_people;

	  
	
		 
	 for(size_t l=0 ;  l<n  ; l++)
	    if(temp==gift_giver[l].name){ 
   	        gift_giver[l].money-=amount*n_people;
	        break;
  	       }

	 

	  for(size_t j=0; j<n_people ; j++){
    	     
		string temp2; cin>>temp2;

	    for(size_t k=0 ; k<n ; k++){
		if(temp2==gift_giver[k].name){
		   gift_giver[k].money+=amount;
		   break;
		   }
		
		 }
	     }	
	  }

	  for(size_t  i =0; i<n ; i++)
		cout<<gift_giver[i].name<<" "<<gift_giver[i].money<<endl;
	
	   cout<<"\n"<<endl;
	
	
	 	
	return 0;

}


	










