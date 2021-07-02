#include <iostream>
#include <cmath>

using namespace std;

int sumSq[100001];

int main()
{
    int N;
    scanf("%d", &N);

    for(int i = 0; i <= N; ++i)
        sumSq[i] = i;

    for(int i = 1; i <= N; ++i)
        for(int j = 1; j * j <= i; ++j)
            sumSq[i] = min(sumSq[i], 1 + sumSq[i - j * j]);
    
    printf("%d", sumSq[N]);
}