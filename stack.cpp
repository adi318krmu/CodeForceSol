#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    stack<int> st2;
    st.push(2);
    st.push(9);

    while(!st.empty()){
        cout<<st.top()<<endl;
             int a=st.top();
             
        st2.push(a);
        st.pop();

    }
    return 0;
}