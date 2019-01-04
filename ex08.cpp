#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string s = "anagram", t = "nagaram";

    int s_con[26], t_con[26];
    for(int i = 0; i < 26; ++i){
        s_con[i] = t_con[i] = 0;
    }
    for(int i = 0; i < s.size(); ++i) {
        s_con[s[i] - 'a']++;
        t_con[t[i] - 'a']++;
    }
    for(int i = 0; i < 26; ++i) {
        if(s_con[i] != t_con[i]) {
            cout << "false" << endl; 
        }
    }
    cout << "true" << endl; 
    return 0;
}
