
class Solution: 
    def luckyPermutations(self, N, M, arr, graph):
        # Code here
        edges = set()
        for [a, b] in graph:
            edges.add((a, b))
            edges.add((b, a))
        dp = dict()
        ans = 0
        for i in range(N):
            state = (i << 16) + (1 << i)
            ans += self.backtracking(state, dp, arr, edges)
        return ans
        
    def backtracking(self, state, dp, arr, edges):
        if state not in dp:
            i = state >> 16
            visited = state - (i << 16)
            if visited + 1 == 1 << len(arr):
                ans = 1
            else:
                ans = 0
                for j in range(len(arr)):
                    if i == j \
                    or (arr[i], arr[j]) not in edges \
                    or visited & (1 << j) != 0:
                        continue
                    state2 = visited + (j << 16) + (1 << j)
                    ans += self.backtracking(state2, dp, arr, edges)
            dp[state] = ans
        return dp[state]
        
