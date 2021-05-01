#include <iostream>
#include <set>

using namespace std;

int N;
int answer = 0;

int main()
{
    scanf("%d", &N);
    for(int i = 0; i < N; ++i) {
        string word;
        cin >> word;

        set<char> group;
        bool isGroup = true;
        for(int j = 0; j < word.length(); ++j) {
            while(j + 1 < word.length() && word[j] == word[j + 1])
                j++;
            if(group.find(word[j]) != group.end()) {
                isGroup = false;
                break;
            }
            else
                group.insert(word[j]);
        }
        if(isGroup)
            answer++;
    }
    printf("%d", answer);
}