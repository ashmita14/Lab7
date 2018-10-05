//Recursive functions
//Write a program to find sum of all natural numbers from 1 to n.

//including libraries
#include<iostream>
using namespace std;

//declaring recursive function
int sum(int n, int i, int sm){
	//checking condition
	if(i<=n){
		//adding numbers
		sm=sm+i;
		//calling function again
		sum(n, i+1, sm);
	}
	else{
		//displaying sum
		cout<<"Sum of all natural numbers from 1 to "<<n<<" = "<<sm<<endl;
		//terminating loop
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
	//calling function
	sum(num, 1, 0);
	//returning integer value to main function
	return 0;
}
