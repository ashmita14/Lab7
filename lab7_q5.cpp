//Recursive Function
//Write a program to find the sum of even or odd numbers in a given range.

//including libraries
#include<iostream>
using namespace std;

//declaring recursive function to find the sum of even numbers
int even(int n1, int n2, int sumeven){
	//checking condition
	if(n1<=n2){
		//checking even number
		if(n1%2==0){
			//adding numbers
			sumeven=sumeven+n1;
		}
		//calling function again
		even(n1+1, n2, sumeven);
	}
	else{
		//displaying sum
		cout<<"The sum of all even numbers is = "<<sumeven<<endl;
		//terminating function
		return 1;
	}
}

//declaring recursive fucntion to find the sum of odd numbers
int odd(int n1, int n2, int sumodd){
	//checking condition
	if(n1<=n2){
		//checking odd number
		if(n1%2!=0){
			//adding numbers
			sumodd=sumodd+n1;
		}
		//calling function again
		odd(n1+1, n2, sumodd);
	}
	else{
		//displaying sum
		cout<<"The sum of all odd numbers is = "<<sumodd<<endl;
		//terminating function
		return 1;
	}
}

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
	//asking user to enter choice
	cout<<"1. Sum of all even numbers between lower and upper limit."<<endl;
	cout<<"2. Sum of all odd numbers between lower and upper limit."<<endl;
	cout<<"Enter your choice."<<endl;
	//accepting value
	cin>>ch;
	//checking value
	if(ch==1){
		//calling function
		even(num1, num2, 0);
	}
	else if(ch==2){
		//callin function
		odd(num1, num2, 0);
	}
	else{
		cout<<"Invalid response."<<endl;
	}
	//returning integer value to main function
	return 0;
}
