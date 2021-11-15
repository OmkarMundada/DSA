// Linear Search
  
#include <iostream>

using namespace std;

int linearsearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int key;
    cin>>key;
    
    cout<<linearsearch(arr,n,key)<<endl;

    return 0;
}


//  Binary Search
  


#include <iostream>

using namespace std;

int binarysearch(int arr[],int n,int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int key;
    cin>>key;
    
    cout<<binarysearch(arr,n,key)<<endl;

    return 0;
}

// Ternary Search

#include <iostream>

using namespace std;

int ternarysearch(int arr[],int n,int key){
int l=0;
int r=n;
while (r >= l){
        int  mid1 = l + (r-l) / 3;
        int  mid2 = r - (r-l) / 3;
        if (key == arr[mid1]){ 
            return mid1;}
        if (key == arr[mid2]){ 
            return mid2;}
        if (key < arr[mid1]){ 
            r = mid1 - 1;}
        else if (key > arr[mid2]){
            l = mid2 + 1;}
        else{
            l = mid1 + 1;
            r = mid2 - 1;}
}    return -1;
}
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
 cin>>arr[i];
}
  int key;
 cin>>key;
 
cout<<ternarysearch(arr,n,key)<<endl;

 return 0;
}
