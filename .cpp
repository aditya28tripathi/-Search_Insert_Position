class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=0; int e= nums.size()-1;
        while(s<=e){ int mid= (s+e)/2;
            if(s == e){
                if(nums[mid] < target){
                    return e + 1; 
                }else{
                    return e;}
            }if(nums[mid]==target){
                return mid;
            } else if(nums[mid]<target){
                s=mid+1;
                } else{e=mid-1;}
        }
        return s;
    }};
    
