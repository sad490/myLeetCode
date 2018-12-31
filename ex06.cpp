#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> digits = {9, 9, 9, 9};

    int plus = 1, i = digits.size();
    stack<int> temp;
    while( i > 0 ) {
        int a = digits[i];
        temp.push((a + plus) % 10);
        plus = (a + plus) / 10;
        --i;
    }

    for(int i = 0 ; i < temp.size(); ++i) {
        cout << temp.top() << endl;
        temp.pop();
    }

    return 0;
}
