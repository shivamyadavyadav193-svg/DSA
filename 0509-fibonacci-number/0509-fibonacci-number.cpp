class Solution {
public:
    int fib(int n) {
        int frist=0;
        int second=1;

        for(int i=0; i<n; i++){
            int next=frist+second;

            frist=second;
            second=next;
        }

        return frist;
        
    }
};