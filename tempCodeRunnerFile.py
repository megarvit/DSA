def countGreatArrays(N, M, K):
    mod = 10**9 + 7
    dp = [[0]*(1<<M) for _ in range(N)]
    
    # Initialize the base case
    for i in range(1<<M):
        dp[0][i] = 1
    
    # Fill up the dp table
    for i in range(1, N):
        for j in range(1<<M):
            for k in range(1<<M):
                if bin(j&k).count('1') == K:
                    dp[i][k] = (dp[i][k] + dp[i-1][j]) % mod
    
    # Calculate the final answer
    ans = 0
    for i in range(1<<M):
        ans = (ans + dp[N-1][i]) % mod
    
    return ans

def main():
    N = int(input())
    M = int(input())
    K = int(input())
    
    ans = countGreatArrays(N, M, K)
    print(ans)

if __name__ == "__main__":
    main()