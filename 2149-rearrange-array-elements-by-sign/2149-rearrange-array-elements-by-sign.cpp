class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;  
        vector<int> neg;

    for(int i=0; i<nums.size(); i++){
        if(nums[i]>=0){
            pos.push_back(nums[i]);
        }
        else{
            neg.push_back(nums[i]);

        }

}
     int j=0; int i=0;
     while(i< pos.size() && i<neg.size()){
       nums[j]=pos[i];
        j++;
         nums[j]=neg[i];
         j++;
         i++;
     }   
     return nums;
    }
};