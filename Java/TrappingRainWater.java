// Problem link: https://leetcode.com/problems/trapping-rain-water/#
class Solution {
    public int trap(int[] A) {
        int n = A.length;
        int temp,hght,lvl=0;
        int[] left = new int[n];
        int[] right= new int[n];
        int i,lmax=0,rmax=0;
        for(i=0;i<n;i++){
            if(A[i]>lmax)
                lmax=A[i];
            left[i]=lmax;
        }
        for(i=n-1;i>=0;i--){
            if(A[i]>rmax)
                rmax=A[i];
            right[i]=rmax;
        }
        for(i=0;i<n;i++){
            temp = Math.min(left[i],right[i]);
            hght = temp - A[i];
            lvl+=hght;
        }
        return lvl;
    }
}
