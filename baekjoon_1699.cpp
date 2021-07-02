#include <iostream>
#include <cmath>

using namespace std;

int sumSq[100001];

int getSqNum(int N)
{
    if(sumSq[N] != 0)
        return sumSq[N];
    
    int s = (int)sqrt(N);
    int s_sq = s * s;
    if(s_sq == N)
        sumSq[N] = 1;
    else {
        sumSq[N] = 1 + getSqNum(N - 1);
        for(int i = 2; i <= s; ++i)
            sumSq[N] = min(sumSq[N], 1 + getSqNum(N - i * i));
    }
        
    return sumSq[N];
}

int main()
{
    int N;
    scanf("%d", &N);

    int answer = getSqNum(N);
    printf("%d", answer);
}