#include <iostream>

using namespace std;

int N;
int bag_3kg = 0, bag_5kg = 0;
int answer;

int main()
{
    scanf("%d", &N);

    while(N > 0) {
        if(N % 5 == 0) {
            bag_5kg += N / 5;
            break;
        }
        bag_3kg++;
        N -= 3;
    }

    if(N < 0)
        answer = -1;
    else
        answer = bag_3kg + bag_5kg;
        
    printf("%d", answer);
}