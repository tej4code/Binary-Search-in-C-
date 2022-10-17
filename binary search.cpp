#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int n){
	int start = 0;
	int end = size - 1;
	int mid = (size+end)/2;
	
	while(start<=end){
		
		if(arr[mid]==n){
			return mid;
		}
		if(n>arr[mid]){
		    start =  mid + 1;
		}
		else{
			end = mid -1;
		}
		mid= (start+end)/2;
	
	}
	return -1;
}
int main(){
	
	int arr[10],n;
	
	cout<<"enter the 10 Number ";
	for(int i=0;i<10;i++){
		cin>>arr[i];
	}
	
	cout<<"enter the number to find ";
	cin>>n;
	
	int index = binarySearch(arr,10,n);

	cout<<" index of "<<n<<" is "<<index ;
	
}
