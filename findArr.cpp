#include <iostream>
#include <algorithm>
using namespace std;

//Utility function to print the contents of an Array

void print(int arr[], int n){
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

// Utility function to reverse elements of an array
void reverse(int arr[], int n){
	reverse(arr, arr + n);
}

int main(){
	int arr[] =	{1,2,3,4,5,6,7,8,9,10};
	cout<< "The given array is: {1,2,3,4,5,6,7,8,9,10}"<<endl;
	int n = sizeof(arr)/sizeof(arr[0]);
	
	
	reverse(arr, n);
	cout<< "The element of the array in reverse is: ";
	print(arr, n);	

	
	return 0;

}
