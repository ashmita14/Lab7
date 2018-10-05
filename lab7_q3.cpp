//Recursive functions
//Write program to to print all even or odd numbers in a particular range using recursive functions.

//including libraries
#include<iostream>
using namespace std;

//declaring recursive function for printing even numbers
int even(int n1, int n2){
	//checking condition
	if(n1<=n2){
		if(n1%2==0){
			//printing the number
			cout<< n1<<endl;
		}
		//calling function again
		even(n1+1, n2);
	}
	//terminating recursive function
	else{
		return 1;
	}
}

//declaring recursive function for printing odd numbers
int odd(int n1, int n2){
	//checking condition
	if(n1<=n2){
		if(n1%2!=0){
			//printing the number
			cout<< n1<<endl;
		}
		//calling function again
		odd(n1+1, n2);
	}
	//terminating recursive function
	else{
		return 1;
	}
}

//declaring driver function
int main(){
	//declaring variables
	int num1, num2, ch;
	//asking user to enter upper and lower limit
	cout<<"Enter lower limit."<<endl;
	//accepting value
	cin>>num1;
	cout<<"Enter upper limit."<<endl;
	//accepting value
	cin>>num2;
	//asking user for choice
	cout<<"1. Print all even numbers between "<<num1<<" and "<<num2<<"."<<endl;
	cout<<"2. Print all odd numbers between "<<num1<<" and "<<num2<<"."<<endl;
	cout<<"Enter choice."<<endl;
	//accepting value
	cin>>ch;
	//checking condition
	if(ch==1){
		//calling function for even numbers
		even(num1, num2);
	}
	else if(ch==2){
		//calling function for odd numbers
		odd(num1, num2);
	}
	else{
		cout<<"Invalid response."<<endl;
	}
	//returning integer value to main function
	return 0;
}

