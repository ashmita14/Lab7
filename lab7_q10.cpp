//Recursive function
//Write a function to generate nth number of Fibonacci series.

//including libraries
#include<iostream>
using namespace std;

//declaring recursive function
int Fibo(int n, int x, int i1, int i2){
	//declaring variables
	int tr;
	//checking condition
	if(x<n){
		//finding the next term
		tr=i1+i2;
		//displaying the third term
		cout<<tr<<endl;
		//changing values of variables storing the previous terms
		i1=i2;
		i2=tr;
		//incrementing counter variable x
		x++;
		//calling the function again
		Fibo(n,x,i1,i2);
	}
	else{
		//terminating function
		return 1;
	}
}

//declaring driver function
int main(){
	//declaring variables
	int num;
	//asking user to enter limit
	cout<<"Enter limit."<<endl;
	//accepting value
	cin>>num;
	//printing first two terms
	cout<<0<<endl;
	cout<<1<<endl;
	//calling function
	Fibo(num,2,0,1);
	//returning integer value to main function
	return 0;
}
	
	 
