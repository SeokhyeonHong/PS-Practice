#include <iostream>

using namespace std;

int main()
{
    int T, n;
    scanf("%d", &T);

    int three_sum_cases[11] = { 0, 1, 2, 4 };
    for(int i = 4; i < 11; ++i)
        three_sum_cases[i] = three_sum_cases[i - 1] + three_sum_cases[i - 2] + three_sum_cases[i - 3];
        
    for(int i = 0; i < T; ++i) {
        scanf("%d", &n);
        printf("%d\n", three_sum_cases[n]);
    }
}