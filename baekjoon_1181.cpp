#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(string lhs, string rhs)
{
    if(lhs.length() == rhs.length())
        return lhs < rhs;
    else
        return lhs.length() < rhs.length();
}

int main()
{
    int inputNum;
    string input;
    vector<string> inputs;
    
    cin >> inputNum;
    for(int i = 0; i < inputNum; ++i) {
        cin >> input;
        inputs.push_back(input);
    }

    sort(inputs.begin(), inputs.end(), cmp);

    string prev = "";
    for(int i = 0; i < inputNum; ++i) {
        if(prev == inputs[i])
            continue;
        cout << inputs[i] << endl;
        prev = inputs[i];
    }
}