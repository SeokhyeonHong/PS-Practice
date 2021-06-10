#include <iostream>

using namespace std;

int main()
{
    int N;
    scanf("%d", &N);

    int distance = 1, max_room_num = 1;
    while(N > max_room_num) {
        max_room_num += 6 * distance;
        distance++;
    }
        
    printf("%d", distance);
}