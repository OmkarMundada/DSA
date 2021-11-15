// Selection Sort

#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	for(int i=0;i<n-1;i++){
	    for(int j=i+1;j<n;j++){
	        if(arr[j]<arr[i]){
	            int temp=arr[j];
	            arr[j]=arr[i];
	            arr[i]=temp;
	        }
	    }
	}
	for(int i=0;i<n;i++){
	cout<<arr[i]<<endl;
	    
	}
	return 0;
}

// Bubble Sort

#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	int count=0;
	while(count<n-1){
	for(int i=0;i<n-count-1;i++){
	    if(arr[i]>arr[i+1])
	    {
	        
	            int temp=arr[i];
	            arr[i]=arr[i+1];
	            arr[i+1]=temp;
	        
	        }
	    }
	    count++;
	}
	
	for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
	    
	}
	cout<<endl;
	return 0;
}

//Insertion Sort

#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}

for(int i=1;i<n;i++){
    int current=arr[i];
    int j=i-1;
    while(arr[j]>current && j>=0){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=current;
}
	
	for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
	    
	}
	cout<<endl;
	return 0;
}
