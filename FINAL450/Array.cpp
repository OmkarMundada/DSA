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

// Find the "Kth" max and min element of an array 

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	sort(arr,arr+n);
	cout<<arr[k-1]<<" "<<arr[n-k]<<endl;
	return 0;
}

// Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo

#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n];
	int count0=0,count1=0,count2=0;
	for(int i=0;i<n;i++){
	    cin>>a[i];
	    if(a[i] == 0){
            count0++;}
        else if(a[i] == 1){
            count1++;}
        else{
            count2++;}
	}
	for(int i=0;i<n;i++){
	    if(count0 != 0){
	        a[i]=0;
	        count0--;
	    }
	    else if(count1 !=0){
	        a[i]=1;
	        count1--;
	    }
	    else if(count2 !=0){
	        a[i]=2;
	        count2--;
	    }
	}
	
	for(int i=0;i<n;i++){
	    cout<<a[i]<<" ";
	}		
	return 0;
}
