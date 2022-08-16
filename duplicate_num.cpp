//  There is only one repeated number in nums, return this repeated number.
//  Find the Duplicate Number in vector

int findDuplicate(vector<int> &arr)     
{
    // Write your code here
	int ans =0,i;
    for(i=0;i<arr.size();i++)
    {
        ans = ans^arr[i];
    }
    for(i=1;i<arr.size();i++)
    {
        ans = ans^i;
    }
    return ans;
}
