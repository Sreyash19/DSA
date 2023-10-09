#include <iostream>
#include <vector>
using namespace std;
 
int pivotIndex(vector<int> nums) {
        
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        int sum1=0,sum2=0;
        while(s<e){
			cout<<"entering while loop";
            int i=0;
            while(i<=mid-1){
                sum1+=nums[i];
                i++;
            }
            int j=mid+1;
            while(j<nums.size()){
                sum2+=nums[j];
                j++;
            }
            if(sum1==sum2){
                return mid;
            }
            else if(sum1<sum2){
                s=mid+1;
            }
			else if(sum1>sum2){
                e=mid-1;
            }
        }
        return -1;
    
};
int main(){
   vector<int> arr{1,7,3,6,5,6};
    cout<<pivotIndex(arr);
    return 0;
}