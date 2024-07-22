class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //MOORE'S VOTING ALGORITHM
        int vote=0;
        int candidate;

        for(int i=0; i<nums.size();i++){ 
            if(vote==0){
                candidate=nums[i];
            }
            if(nums[i]==candidate){
                vote++;
                }
              else{
                  vote--;
              }     
            
        }
        return candidate;
        
    }
};