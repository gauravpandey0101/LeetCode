class Solution {  
public int majorityElement(int[] nums) {     
int ansIndex=0; 
int count=1; 

    for(int i=1;i<nums.length;i++){ 
        if(nums[i]==nums[ansIndex]){
            count++;
        }
        else{
            count--;
        }
        if(count==0){
            ansIndex=i;
            count=1;
        }
    }
    
    int MajoCount=0;
    
    for(int i=0;i<nums.length;i++){
        if(nums[i]==nums[ansIndex]){
            MajoCount++;
        }
    }
    return nums[ansIndex];
}
}
