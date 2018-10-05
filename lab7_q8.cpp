//Recursive function
//Write a program to find the sum of digits of any number.

//including libraries
#include<iostream>
using namespace std;

//declaring recursive function
int sumdigit(int n, int sum){
	//declaring variables
	int x;
	//adding digits
	x=n%10;
	sum=sum+x;
	n=n/10;
	//checking condition 
	if(n!=0){
		//calling function again
		sumdigit(n,sum);
	}
	else{
		//displaying number
		cout<<"Sum of the digits = "<<sum<<endl;
		//terminating loop
		return 1;
	}
}

//declaring driver function
int main(){
	//declaring variables
	int num;
	//asking user to enter a number
	cout<<"Enter a number."<<endl;
	//accepting value
	cin>>num;
	//calling function
	sumdigit(num, 0);
	//returning integer value to main function
	return 0;
}
