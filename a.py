from collections import defaultdict
import heapq

def dfs(node, parent, weight, k, graph, weights, query):
    if node == query:
        if len(weights) < k:
            heapq.heappush(weights, weight)
        else:
            if weight > weights[0]:
                heapq.heappushpop(weights, weight)
        return
    
    for neighbor, edge_weight in graph[node]:
        if neighbor != parent:
            dfs(neighbor, node, edge_weight, k, graph, weights, query)

def main():
    import sys
    input = sys.stdin.read
    data = input().split()
    
    idx = 0
    
    # Read N
    N = int(data[idx])
    idx += 1
    
    # Read M
    M = int(data[idx])
    idx += 1
    
    # Skip the number of columns in E (always 3)
    idx += 1
    
    # Read graph edges
    graph = defaultdict(list)
    for _ in range(M):
        u = int(data[idx])
        v = int(data[idx + 1])
        weight = int(data[idx + 2])
        graph[u].append((v, weight))
        graph[v].append((u, weight))
        idx += 3
    
    # Read Q
    Q = int(data[idx])
    idx += 1
    
    # Skip the number of columns in queries (always 2)
    idx += 1
    
    # Process each query
    results = []
    for _ in range(Q):
        query = int(data[idx])
        k = int(data[idx + 1])
        idx += 2
        weights = []
        
        # Perform DFS
        dfs(1, -1, 0, k, graph, weights, query)
        
        if len(weights) < k:
            results.append(0)
        else:
            results.append(max(weights))
    
    # Print results
    for result in results:
        print(result)

if __name__ == "__main__":
    main()
