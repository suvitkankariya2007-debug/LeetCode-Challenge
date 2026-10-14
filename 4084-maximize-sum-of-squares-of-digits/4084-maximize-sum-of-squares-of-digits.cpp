class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string temp = "";
        while (num > 0) {
            temp += "9";
            num--;
        }
        int s = 9 * temp.size();
        int diff = s - sum;
        int i = temp.size() - 1;
        while (i >= 0) {
              if(diff<0){
                temp.erase();
                break;}
            while(diff>0&&temp[i] > '0') {
                int x = min(diff, 9);
                temp[i] =temp[i]- x;//This subtracts from the character's ASCII value.
               
                diff = diff - x;
               
            }

           
                i--;
        }
        return temp;
    }
};