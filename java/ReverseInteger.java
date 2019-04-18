public class Solution {
    public int reverse(int x) {
        int temp=0;
        int num=Math.abs(x);
        while(num!=0){
            if (temp>(Integer.MAX_VALUE-num%10)/10)  
                  return 0;
            temp=temp*10+num%10;
            num/=10;
        }
        return x>0?temp:-temp;
    }
}
