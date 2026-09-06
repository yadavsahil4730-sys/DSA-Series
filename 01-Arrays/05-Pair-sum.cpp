#include<iostream>
using namespace std;
int main(){
    int nums[]={2,7,11,15};
    int size=4;
    int target=13;
    int i=0;
    int j=size-1;
    while(i<j){
        int pairSum = nums[i]+nums[j];
        if(pairSum>target){
            j--;
        }else if(pairSum<target){
             i++;
        }else{
        cout<<"pairsum"<<pairSum<<endl;
        cout << i << " " << j;
        return 0;
        }
    }
}
