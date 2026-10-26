// #include <iostream>

// using namespace std;

// // This function returns the total number of ways to reach the bottom-right corner
// int gridWays(int x, int y, int N, int M) {
//     // ---------------------------------------------------------
//     // YOUR LOGIC GOES HERE
//     // ---------------------------------------------------------
    
//     // 1. BASE CASE 1: Reached the destination
//     // If x is N-1 and y is M-1, you have found 1 valid path. Return 1.
//     if(x==N-1 && y==M-1){
//         return 1;
//     }if(x>=N || y>=M){
//         return 0;
//     }
//     int right=gridWays(x,y+1,N,M);
//     int down=gridWays(x+1,y,N,M);

//     return right+down;


//     // 2. BASE CASE 2: Out of bounds
//     // If x or y goes outside the grid (x >= N or y >= M), this path is invalid. Return 0.


//     // 3. RECURSIVE CALLS:
//     // Calculate the number of ways if you move RIGHT (x, y+1)
//     // Calculate the number of ways if you move DOWN (x+1, y)


//     // 4. RETURN the sum of ways from both directions
//      // Replace this with your actual return
// }

// int main() {
//     // A 3x3 grid
//     int N = 3;
//     int M = 3;

//     // Start the recursion from top-left (0, 0)
//     int totalWays = gridWays(0, 0, N, M);

//     cout << "Total number of ways to reach the destination in a " 
//          << N << "x" << M << " grid is: " << totalWays << endl;

//     // Hint: For a 3x3 grid, the answer should be 6.
    
//     return 0;
// }

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// This is the function where you will put your logic!
void solveMaze(vector<vector<int>>& maze, int x, int y, int N, vector<vector<bool>>& visited, string path) {
    // ---------------------------------------------------------
    // YOUR LOGIC GOES HERE
    // ---------------------------------------------------------
    
    // 1. BASE CASE: 
    // If you have reached the destination (N-1, N-1), print the 'path' and return.
    if(x==N-1 && y==N-1){
        for(char c: path){
            cout<<c<<" ";
        }
        return;
    }


    // 2. MARK VISITED:
    // Mark the current cell (x, y) as visited so you don't step on it again in this path.
    visited[x][y]=true;


    // 3. RECURSIVE CALLS:
    // Try moving in all 4 directions: Down ('D'), Left ('L'), Right ('R'), Up ('U').
    // IMPORTANT: Before making a recursive call, ensure the next move is:
    //   - Inside the grid boundaries
    //   - An open path (maze[new_x][new_y] == 1)
    //   - Not already visited
    if(x+1<N && visited[x+1][y]==false && maze[x+1][y]==1){
        path+="Left";
        solveMaze(maze,x+1,y,N,&visited,path);
    }
    if(y+1<N && visited[x][y+1]==false && maze[x][y+1]==1){
        path+="Down";
        solveMaze(maze,x,y+1,N,&visited,path);
    }
    if(x+1<N && visited[x][y]==false && maze[x+1][y]==1){
        path+="Left";
        solveMaze(maze,x+1,y,N,&visited,path);
    }
    if(y+1<N && visited[x][y+1]==false && maze[x][y+1]==1){
        path+="Down";
        solveMaze(maze,x,y+1,N,&visited,path);
    }


    // 4. BACKTRACKING:
    // After exploring all paths from the current cell, mark it as unvisited (false) 
    // so it can be used in other potential paths.
    
}

int main() {
    // Sample Input from your prompt
    vector<vector<int>> maze = {
        { 1, 0, 0, 0 },
        { 1, 1, 0, 1 },
        { 1, 1, 0, 0 },
        { 0, 1, 1, 1 }
    };

    int N = maze.size();

    // NxN vector called visited, initialized with false values
    vector<vector<bool>> visited(N, vector<bool>(N, false));

    // String to keep track of the current path
    string path = "";

    // Edge case check: If the start cell is blocked, no path is possible
    if (maze[0][0] == 1) {
        // Start the recursive function from (0, 0)
        solveMaze(maze, 0, 0, N, visited, path);
    } else {
        cout << "Start cell is blocked!" << endl;
    }

    return 0;
}