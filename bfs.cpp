void bfs(int s) {
    queue<int> q;
    vector<bool> visited(n);

    visited[s] = true;
    q.push(s);

    while (!q.empty()) {
        int currentNode = q.pop();

        for (auto neighbour: graph[currentNode]) {
            if (!visited[neighbour]) {
                visited[neighbour] = true;
                q.push(neighbour);
            }
        }
    }
}
