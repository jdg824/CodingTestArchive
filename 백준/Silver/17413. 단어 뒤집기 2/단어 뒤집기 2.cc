#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    stack<char> st;
    string str, ans;
    getline(cin, str);

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '<') {
            while (!st.empty()) {
                ans += st.top();
                st.pop();
            }
            while (1) {
                ans += str[i];
                if (str[i] == '>')
                    break;
                i++;
            }
        }

        else if (str[i] == ' ') {
            while (!st.empty()) {
                ans += st.top();
                st.pop();
            }
            ans += ' ';
        }

        else
            st.push(str[i]);
    }
    
    //마지막 부분 해주기 위해서
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    
    cout << ans;
}
