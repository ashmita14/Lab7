//Recursive Function
//Write a program to find the HCF of two numbers using recursive function.

//including libraries
#include<iostream>
using namespace std;

//declaring recursive function
int HCF(int n1, int n2){
	//declaring variables
	int r;
	//assuming n1>n2
	r=n1%n2;
	//checking value of remainder
	if(r!=0){
		//calling function again
		HCF(n2, r);
	}
	else{
		//displaying HCF
		cout<<"HCF of the two numbers = "<<n2<<endl;
		//terminating recursive function
		return 1;
	}
}

//declaring driver function
int main(){
	//declaring variables
	int num1, num2;
	//asking user for numbers
	cout<<"Enter two numbers."<<endl;
	//accepting values
	cin>>num1>>num2;
	//checking which number is bigger
	if(num1>num2){
		//calling function
		HCF(num1,num2);
	}
	else{
		//calling function
		HCF(num2,num1);
	}
	//returning integer value to main function
	return 0;
}
