#include <iostream>

using namespace std;

int count[1000001];
int N;

int main()
{
    scanf("%d", &N);
    
    count[1] = 0;
    for(int i = 2; i <= N; ++i) {
        int ith_count = count[i - 1] + 1;
        if(i % 3 == 0)
            ith_count = min(ith_count, count[i / 3] + 1);
        if(i % 2 == 0)
            ith_count = min(ith_count, count[i / 2] + 1);
        count[i] = ith_count;
    }
    
    printf("%d", count[N]);
}