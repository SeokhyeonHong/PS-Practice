#include <iostream>

using namespace std;

int N;
int answer = 0;

int main()
{    
    scanf("%d", &N);
    for(int i = 0; i < N; ++i) {
        bool alreadyFound[26] = { false };
        string word;
        cin >> word;

        bool isGroup = true;
        for(int j = 0; j < word.length(); ++j) {
            while(j + 1 < word.length() && word[j] == word[j + 1])
                j++;
            if(alreadyFound[word[j] - 'a']) {
                isGroup = false;
                break;
            }
            else
                alreadyFound[word[j] - 'a'] = true;
        }
        if(isGroup)
            answer++;
    }
    printf("%d", answer);
}