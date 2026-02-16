#include<bits/stdc++.h>
using namespace std;

void exStack(){
stack<int> sk;
sk.push(1);
sk.push(2);
sk.push(3);
sk.push(4);
sk.push(7);
sk.push(55);
sk.push(9);
sk.push(50);

cout<<"Size of stack is :"<<sk.size()<<endl;
cout<<"Top of the stack is :"<<sk.top()<<endl;
sk.pop();
cout<<"Top of the stack is :"<<sk.top()<<endl;

//to print all element in stack is by poping and printing the top
cout<<"All list element n stack is :";
while(sk.empty()==false){
    cout<<sk.top()<<" ";
    sk.pop();}
}

int main(){
    exStack();
 return 0;   
}