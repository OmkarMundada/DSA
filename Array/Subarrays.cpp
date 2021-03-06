
// All subarrays of array

#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
for(int i=0;i<n;i++){
  for(int j=i;j<n;j++){
      for (int k=i; k<=j; k++){
    cout<<arr[k]<<" ";
      }cout<<endl;
  }
}
  return 0;
}

//Sum of all Individual subarrays
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
int sum=0;
for(int i=0;i<n;i++){
    int sum=0;
  for(int j=i;j<n;j++){
      
    sum+=arr[j];
    cout<<sum<<" ";
    cout<<endl;
    
  }
}
  return 0;
}

//Sum of all subarrays of an array

#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
int sum=0,res=0;
for(int i=0;i<n;i++){
    int sum=0;
  for(int j=i;j<n;j++){
    sum+=arr[j];
    res+=sum;
    }
}
  cout<<res<<endl;
  return 0;
}

// Longest Arithmatic Subarray

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=2;
    int d=a[1]-a[0];
    int j=2;
    int c=2;
    while(j<n){
        if(a[j]-a[j-1]== d){
            c++;
        }
        else{
            d=a[j]-a[j-1];
            c=2;
        }
        ans=max(ans,c);
        j++;
    }
    cout<<ans<<endl;
	return 0;
}

//Subarray with given Sum
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }


    int curr_sum=0,S;
    cin>>S;

    int i=0;
    int j=i;

    while(j<n)
    {
        curr_sum+=a[j];          
        if(curr_sum==S)         
            break;
        else if(curr_sum>=S)    
        {
            i++;                
            curr_sum=0;
            j=i;
            continue;
        }
        else{
        j++;
        }
    }

    cout<<i+1<<" "<<j+1;
    
    return 0;
}


//Maximum Subarray Sum


#include <iostream>
#include<climits>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	int sum=0;
	int maxsum=INT_MIN;
	for(int i=0;i<n;i++){
	    sum+=a[i];
	    if(sum<0){
	        sum=0;
	    }
	    maxsum=max(maxsum,sum);
	}
	cout<<maxsum<<endl;
	return 0;
}


//Maximum  Circular Subarray Sum

#include <iostream>
#include <climits>
using namespace std;

int kadane(int arr[],int n){
    int sum=0;
	int maxsum=INT_MIN;
	for(int i=0;i<n;i++){
	    sum+=arr[i];
	    if(sum<0){
	        sum=0;
	    }
	    maxsum=max(maxsum,sum);
	}
	return maxsum;
}


int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	int sum1;
	int sum2;
	
	sum2=kadane(arr,n);
	int tot=0;
	for(int i=0;i<n;i++){
	    tot+=arr[i];
	    arr[i]=-arr[i];
	}
	sum1=tot+kadane(arr,n);
	cout<<max(sum1,sum2);
	
	
	return 0;
}
