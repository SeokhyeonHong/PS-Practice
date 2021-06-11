#include <iostream>

using namespace std;

int main()
{
    int N, W, H, L;
    scanf("%d %d %d %d", &N, &W, &H, &L);

    int answer = min(N, (W / L) * (H / L));
    printf("%d", answer);
}