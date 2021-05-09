#include <queue>
#include <stack>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    queue<int> columns[30];
    for(int i = 0; i < board.size(); ++i) {
        for(int j = 0; j < board[i].size(); ++j) {
            columns[j].push(board[i][j]);
        }
    }
    
    for(int i = 0; i < board[0].size(); ++i) {
        while(columns[i].front() == 0)
            columns[i].pop();
    }
    
    int answer = 0;
    stack<int> bucket;
    for(int i = 0; i < moves.size(); ++i) {
        if(columns[moves[i] - 1].empty())
            continue;
        
        int front = columns[moves[i] - 1].front();
        if(bucket.empty())
            bucket.push(front);
        else {
            if(bucket.top() == front) {
                answer += 2;
                bucket.pop();
            }
            else
                bucket.push(front);
        }
        columns[moves[i] - 1].pop();
    }
    
    return answer;
}