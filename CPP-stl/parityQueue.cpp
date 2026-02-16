#include<bits/stdc++.h>
using namespace std;
//Priority queue stores highest element  at the top to the low
void ExpriorityQueue_HightoLow(){
    priority_queue<int> pq;
    pq.push(10);
    pq.push(50);
    pq.push(60);
    pq.push(0);
    pq.push(8);
    pq.push(80);
    pq.push(88);

    //Prints highest value nuber
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;

    //Printing all the element of Priority queue
    cout<<"All elements in priority queue is :"<<endl;
    while(pq.empty()==false){
         cout<<pq.top()<<endl;
         pq.pop();
    }
}

 void priorityQueue_HightoLow(){
//storing element in queue form low to high
priority_queue<int,vector<int>,greater<int>>prq;
prq.push(6); 
prq.push(10); 
prq.push(80); 
prq.push(1); 
prq.push(8); 
prq.push(150); 
prq.push(0); 

cout<<"Low to high priority queue:";
while(prq.empty()==false){
    cout<<prq.top()<<" ";
    prq.pop();
}
}

int main(){
    ExpriorityQueue_HightoLow();
    priorityQueue_HightoLow();

    return 0;
}