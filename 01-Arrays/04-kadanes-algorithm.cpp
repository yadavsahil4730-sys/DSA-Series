#include<iostream>
using namespace std;
int main(){
    int arr[]={3,-4,5,4,-1,7,-8};
    int size=7;
    int currSum=0;
   int maxSum=INT_MIN;
   for (int i=0; i<size; i++){
    currSum= currSum+arr[i];
    maxSum=max(currSum,maxSum);
    if(currSum<0){
        currSum=0;
    }
    cout<<"max sum is"<<maxSum<<endl; 


   }
   return 0;
}