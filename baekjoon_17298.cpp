#include <iostream>
#include <stack>

using namespace std;

int N;
int A[1000001], answer[1000001];
stack<int> candidates;

int main()
{
    scanf("%d", &N);

    for(int i = 0; i < N; ++i)
        scanf("%d", &A[i]);
    
    for(int i = N - 1; i >= 0; --i) {
        while(!candidates.empty() && A[i] >= candidates.top())
            candidates.pop();

        if(candidates.empty())
            answer[i] = -1;
        else
            answer[i] = candidates.top();

        candidates.push(A[i]);
    }

    for(int i = 0; i < N; ++i)
        printf("%d ", answer[i]);
}