#include <iostream>

using namespace std;

int main(){
	int number;
	cout << "Enter a number to check if it Even or Odd"<<endl;
	cin >> number;
	
	if(number % 2 == 0){
		cout <<number<<" is Even number." << endl;
	}else{
		cout <<number<<" is Odd number" << endl;
	}
	return 0;
}
