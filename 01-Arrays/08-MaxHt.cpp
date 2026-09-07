#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

vector<int> height={1,8,6,2,5,4,8,3,7};
 int maxWater=0;
 int lp=0 , rp=height.size()-1;
 while(lp<rp){
    int w =rp-lp;
    int h = min(height[lp], height[rp]);
    int currWater = w * h;
    maxWater= max (maxWater,currWater);

    if(height[lp]<height[rp]){
        lp++;
    }
      else{
        rp--;
      }
 }
 cout<<"maxwater:"<<maxWater;
 return 0;

}