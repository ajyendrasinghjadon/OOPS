#include <bits/stdc++.h>
#include <stack>
using namespace std;

int precedence(char op)
{
    if(op == '+'||op == '-')
      return 1;
    if(op == '*'||op == '/' || op == '%')
        return 2;
    if(op == '^')
        return 3;
            return 0;
}
bool isrightAssociative(char op)
    {
    return op=='^';
}

int main(){
    string Q , P;
    cout<<"Enter infix expression : ";
    cin>>Q;
    reverse(Q.begin(),Q.end());
    for (int i=0;i<Q.length();i++)
    {
        if(Q[i]=='(')
            Q[i]=')';
        else if(Q[i]==')')
            Q[i]='(';
    }
    stack<char> s;
    for (int i = 0; i < Q.length(); i++) {
        
    }
}



// A/B*C-D+E/F/(G+H)