class Solution {
    public boolean isPowerOfFour(int n) { 
        for(int i=0;i<30;i++)
        {
            double result = Math.pow(4,i); 
            if(result == n)
            { 
                return true;
            }
        }
        return false;
        
    }
}
