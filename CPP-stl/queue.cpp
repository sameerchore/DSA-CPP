#include<bits/stdc++.h>
using namespace std;

//Queue is the FIFO
void exQueue(){
queue<int> qt;
qt.push(10);
qt.push(20);
qt.push(30);
qt.push(40);
qt.push(50);
cout<<"Front element is :"<<qt.front()<<endl;
cout<<"Size of the queue is :"<<qt.size()<<endl;

//printing all the element in the queue
 cout<<"Elements are:";
while(qt.empty()==false){
    
    cout<<qt.front()<<" ";
    qt.pop();

}

}


int main(){
exQueue();

    return 0;
}