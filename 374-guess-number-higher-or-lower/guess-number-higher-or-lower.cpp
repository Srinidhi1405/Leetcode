/** 
 * Forward declaration of guess API.
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {

        int s = 1;
        int e = n;

        while (s <= e) {

            int mid = s + (e - s) / 2;

            int ans = guess(mid);

            if (ans == 0)
                return mid;

            else if (ans == 1)
                s = mid + 1;

            else
                e = mid - 1;
        }

        return -1;
    }
};