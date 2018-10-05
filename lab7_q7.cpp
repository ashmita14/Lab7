//Recursive function
//Write a program to check if a number is palindrome or not.

//including libraries
#include<iostream>
#include<cmath>
using namespace std;

//declaring recursive function
int reverse(int n, int numr){
	//declaring variables
	int m, i, x;
	//initializing m and i and x
	m=n; i=0; x=1;
	//running loop to count the number of digits
	while(m>0){
		m=m/10;
		i++;
	}
	//switching digit positions
	x=n%10;
	numr=numr+x*(pow(10,i-1));
	n=n/10;
	//checking condition 
	if(n!=0){
		//calling function again
		reverse(n,numr);
	}
	else{
		//terminating loop
		return numr;
	}
}

//declaring driver function
int main(){
	//declaring variables
	int num, revnum;
	//asking user to enter a number
	cout<<"Enter a number."<<endl;
	//accepting value
	cin>>num;
	//calling function
	revnum=reverse(num, 0);
	//checking if number is palindrome or not
	if(revnum==num){
		//displaying message
		cout<<"The number is palindrome."<<endl;
	}
	else{
		//displaying message
		cout<<"The number is not palindrome."<<endl;
	}
	//returning integer value to main function
	return 0;
}

   
