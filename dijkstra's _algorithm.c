#include<stdio.h>
#include <stdlib.h>

void dijkstras(int n, int cost[10][10], int s, int dist[10]);

int main(){
    int i,j,n,s,cost[10][10], dist[10];
    
    // Input number of nodes
    printf("\nEnter the number of nodes: ");
    scanf("%d",&n);
    
    // Input cost matrix
    printf("Enter the cost adjacency matrix (0 for no edge):\n");
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&cost[i][j]);
            if(cost[i][j]==0 && i != j) { // No edge condition
                cost[i][j] = 999;  // Set to a large value to represent infinity
            }
        }
    }

    // Input source vertex
    printf("\nEnter source vertex: ");
    scanf("%d",&s);
    
    // Call Dijkstra's algorithm
    dijkstras(n, cost, s, dist);
    
    // Output the shortest path
    printf("\nShortest paths from vertex %d:\n", s);
    for(i=1;i<=n;i++){
        if(s != i){
            printf("%d -> %d = %d\n", s, i, dist[i]);
        }
    }

    return 0;
}

void dijkstras(int n, int cost[10][10], int s, int dist[10]){
    int i,v,count=1,min,visited[10];
    
    // Initialize distances and visited array
    for(i=1;i<=n;i++) {
        visited[i] = 0;
        dist[i] = cost[s][i];
    }
    visited[s] = 1;  // Mark source node as visited
    dist[s] = 0;     // Distance to itself is 0
    
    while(count < n) {
        min = 999;
        
        // Find the minimum distance unvisited vertex
        for(i=1;i<=n;i++) {
            if(dist[i] < min && visited[i] == 0) {
                min = dist[i];
                v = i;
            }
        }
        
        visited[v] = 1;  // Mark the selected vertex as visited
        count++;
        
        // Update distances for the neighboring vertices of the selected vertex
        for(i=1;i<=n;i++) {
            if(dist[i] > dist[v] + cost[v][i] && visited[i] == 0) {
                dist[i] = dist[v] + cost[v][i];
            }
        }
    }
}

