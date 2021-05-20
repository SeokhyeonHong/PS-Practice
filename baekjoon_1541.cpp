#include <iostream>

using namespace std;

int main()
{
    string equation;
    cin >> equation;

    bool minusFound = false;
    int num = 0, answer = 0;
    for(int i = 0; i <= equation.length(); ++i) {
        switch(equation[i]) {
            case '\0':
            case '+':
            case '-':
                if(minusFound)
                    answer -= num;
                else
                    answer += num;

                if(equation[i] == '-')
                    minusFound = true;
                num = 0;
                break;

            default:
                num = 10 * num + (equation[i] - '0');
                break;

        }
    }

    printf("%d\n", answer);
}