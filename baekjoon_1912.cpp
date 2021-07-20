#include <iostream>

using namespace std;

int main()
{
    int N;
    scanf("%d", &N);

    int arr[N], dp[N];
    for(int i = 0; i < N; ++i)
        scanf("%d", arr[i]);
    
    dp[0] = arr[0];
    int answer = dp[0];
    for(int i = 1; i < N; ++i) {
        dp[i] = max(dp[i - 1] + arr[i], arr[i]);
        answer = max(answer, dp[i]);
    }

    printf("%d", answer);
}