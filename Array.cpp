//Min-Max element in the array
  

#include<iostream>
#include<climits>
using namespace std;
int main(){
int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
int maxno= INT_MIN;
int minno = INT_MAX;

for(int i=0;i<n;i++){
maxno= max(maxno,arr[i]);
minno= min(minno,arr[i]);
}

cout<<maxno<<" "<<minno<<endl;

return 0;
}

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

