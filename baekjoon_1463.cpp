#include <iostream>

using namespace std;

int answer[1000001] = { 0 };
int N;

int main()
{
    scanf("%d", &N);
    
    for(int i = 2; i <= N; ++i) {
        int ith_count = answer[i - 1] + 1;
        if(i % 3 == 0)
            ith_count = min(ith_count, answer[i / 3] + 1);
        if(i % 2 == 0)
            ith_count = min(ith_count, answer[i / 2] + 1);
        answer[i] = ith_count;
    }
    
    printf("%d", answer[N]);
}