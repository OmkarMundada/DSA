/*
Isyana is given the number of visitors at her local theme park on N consecutive
days. The number of visitors on the i-th day is Vi
. A day is record breaking if it
satisfies both of the following conditions:
● The number of visitors on the day is strictly larger than the number of
visitors on each of the previous days.
● Either it is the last day, or the number of visitors on the day is strictly larger
than the number of visitors on the following day.
Note that the very first day could be a record breaking day!
Please help Isyana find out the number of record breaking days.
Input
The first line of the input gives the number of test cases, T. T test cases follow.
Each test case begins with a line containing the integer N. The second line
contains N integers. The i-th integer is Vi
.
Output
For each test case, output one line containing Case #x: y, where x is the test case
number (starting from 1) and y is the number of record breaking days.
Constraints
Time limit: 20 seconds per test set.
Memory limit: 1GB.
1 ≤ T ≤ 100.
0 ≤ Vi ≤ 2 × 105
.
Test set 1
1 ≤ N ≤ 1000.
Test set 2
1 ≤ N ≤ 2 × 105 for at most 10 test cases.
For the remaining cases, 1 ≤ N ≤ 1000.
*/

//Solution for Record Breaking

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    a[n] = -1;
    if(n==1){
        cout<<"1"<<endl;
        return 0;
    }
    int ans=0;
    int mx= -1;
    for(int i=0;i<n;i++){
        if(a[i]>mx && a[i]>a[i+1]){
            ans++;
        }
        mx=max(mx,a[i]);
    }
       
        
    cout<<ans<<endl;
	return 0;
}




/*
Problem
Given an array arr[] of size N. The task is to find the first repeating element in an
array of integers, i.e., an element that occurs more than once and whose index of
first occurrence is smallest.
Constraints
1 <= N <= 106
0 <= Ai <= 106
Example
Input:
7
1 5 3 4 3 5 6
Output:
2
Explanation:
5 is appearing twice and its first appearance is at index 2 which is less than 3
whose first occurring index is 3.
*/

//Solution for First Repeating Element

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int a[n];   
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    
    
    const int N=1e6+2;
    int idx[N];
    for(int i=0;i<N;i++)
    {
        idx[i]=-1;
    }
    
    int minimum=INT_MAX;
    
    for(int i=0;i<n;i++)
    {
        if(idx[a[i]]!=-1 && idx[a[i]]<minimum){
            minimum=idx[a[i]];
        }
        else{
            idx[a[i]]=i;
        }
    }
   if(minimum==INT_MAX){
       cout<<"-1"<<endl;
   }
   else{
       cout<<minimum+1<<endl;
   }
   return 0;
}
