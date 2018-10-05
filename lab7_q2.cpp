//Recursive Function
//Write a program to print all natural numbers from 1 to n.

//including library
#include<iostream>
using namespace std;

//declaring recursive function
int natural(int n, int i){
	//checking condition
	if(i<=n){
		//printing number
		cout<< i<< endl;
		//calling function
		natural(n,i+1);
	}
	//terminating recursive function
	else{
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
	cin>> num;
	cout<<"All natural numbers from 1 to "<<num<<endl;
	//calling function
	natural(num,1);
	//returning integer value to main function
	return 0;
}
