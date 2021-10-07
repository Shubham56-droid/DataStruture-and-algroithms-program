//contributed by subhash karthik.

class Solution {
    public boolean isPalindrome(int x) {
        int temp = x;
        
        boolean flag = false;
        if(x < 0){
            return flag;
        }
        
        int ans = 0;
        while(x != 0){
            ans = ans * 10 + (x % 10);
            x = x / 10;
        }
        
        if(ans == temp){
            flag = true;
        }
        
        return flag;
    }
}
