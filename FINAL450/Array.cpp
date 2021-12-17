//  Reverse the array

#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	int j=n-1,temp;
	for(int i=0;i<j;i++){
	   temp=arr[i];
	   arr[i]=arr[j];
	   arr[j]=temp;
	   j--;
	}
	
	for(int i=0;i<n;i++){
	    cout<<arr[i]<<" ";
	}
    return 0;
}

// Find the maximum and minimum element in an array

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	int mx=INT_MIN,mn=INT_MAX;
	for(int i=0;i<n;i++){
	   mn=min(mn,arr[i]);
	   mx=max(mx,arr[i]);
	}
	cout<<mx<<" "<<mn<<endl;
    return 0;
}

