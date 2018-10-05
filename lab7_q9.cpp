//Recursive function
//Write a program to find the factorial of a number using recursivefunction.

//including libraries
#include<iostream>
using namespace std;

//declaring recursive function
int fact(int n, int i, int fct){
	//checking condition
	if(i<=n){
		//multiplying number to find factorial
		fct=fct*i;
		//calling function again
		fact(n, i+1, fct);
	}
	else{
		//displaying output
		cout<<"Factorial of "<<n<<" = "<<fct<<endl;
		//terminating loop
		return 1;
	}
}

//declaring driver function
int main(){
	//declaring variables
	int num;
	//asking user to enter number
	cout<<"Enter number."<<endl;
	//accepting value
	cin>>num;
	//calling function
	fact(num, 1, 1);
	//returning integer value to main function
	return 0;
}

