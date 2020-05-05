# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
//# include<prettyprint.hpp>
using namespace std;
# define ll long long
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string s, str;
    char c;
    stack<char> st;
    scanf("%c", &c);
    while(!feof(stdin)){
        if (isalpha(c)){
            st.push(c);
        }else{
            while(st.size()){
                cout << st.top();
                st.pop();
            }
            cout << c;
        }
        scanf("%c", &c);
    }
    while(st.size()){
        cout << st.top();
        st.pop();
    }
    return 0;
}