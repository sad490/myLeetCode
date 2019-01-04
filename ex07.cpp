#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    string str = "loveleetcode";
    unordered_map<char, int> m;
    for(int i = 0; i < str.size(); ++i) {
        if(!m.count(str[i])) {
            m[str[i]] = 1;
        } else {
            m[str[i]] = m[str[i]] + 1;
        }
    }
    for(unordered_map<char, int>::iterator it = m.begin(); it != m.end(); ++it) {
        cout << (*it).first << "  " << (*it).second << endl;
    }
    return 0;
}
