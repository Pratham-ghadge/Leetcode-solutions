class Solution {
public:
    // int solve(int n, vector<int>& memo) {
    //     if (n <= 1) return n;

    //     if (memo[n] != -1) return memo[n];

    //     return memo[n] = solve(n - 1, memo) + solve(n - 2, memo);
    // }

    // int fib(int n) {
    //     if (n == 0) return 0;
    //     vector<int> memo(n + 1, -1);
    //     return solve(n, memo);
    // }

    int fib(int n) {
        if(n <= 1) return n;
        vector<int> vec(n+1);
        vec[0] = 0;
        vec[1] = 1;
        for (int i = 2; i <= n; i++) {
            vec[i] = vec[i - 1] + vec[i - 2];
        }
        return vec[n];
    }
};