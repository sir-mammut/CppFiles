#include <iostream>

using namespace std;
// A function that find a factorial using Recursion.
// Parameter n stand for number 
int factorial(int n){
	if(n == 0)
		return 1;   //best case
	else{
		return n*factorial(n-1);  //work toward best case
	}
}
int main(){
	int number;
	cout<< "Enter a number to find its factorial"<<endl;
	cin>>number;
	int fact = factorial(number);
	cout << "The Factorial of "<<number<<" is "<<fact<<endl;
	
	return 0;
}
