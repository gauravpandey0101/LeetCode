class Solution {
    public int[] findIndices(int[] arr, int idxDiff, int diff) {
        int n = arr.length;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(Math.abs(i-j)>=idxDiff && Math.abs(arr[i]-arr[j])>=diff) return new int[]{i,j};
            }
        }
        return new int[]{-1,-1};
    }
}
