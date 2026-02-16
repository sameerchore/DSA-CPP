#include<bits/stdc++.h>
using namespace std;
void basicVec(){
    
    vector<int> vec ={1,6,5};
    vec.push_back(10);
    vec.push_back(11);
    //in vector it container now : 1,6,5,110,11.
    for(int i=0;i<vec.size();i++){
    cout<<vec[i]<<" "; }
    cout<<endl;


    //empty vector of size 5.
    vector<int> vec1(5); //this create 5 empty element value :0
    vec1.push_back(10);
    vec1.push_back(11);
     for(int i=0;i<vec1.size();i++){
     cout<<vec1[i]<<" ";}
     cout<<endl;
    //this prits: 0,0,0,0,0,10,11.

    //pop_back()  used to pop last element
    vec1.pop_back();

    //front,back element print
    cout<<"Front element is: "<<vec1.front()<<endl;
    cout<<"BAck element is: "<<vec1.back()<<endl;
}

    void duplicateVec(){
    vector<int> v ={1,2,3,4,5};
    vector<int> v2(v.begin()+2,v.end()-1);
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";}
        cout<<endl;
}


//printing 5 times 8 by vector shortcut
void fiveEightVec(){
vector<int> v5(5,8);
for(int i=0;i<v5.size();i++){
    cout<<v5[i]<<" ";}
    cout<<endl;
}

void erase(){
    vector<int> num;
    num.push_back(1);
    num.push_back(2);  
    num.push_back(3);
    num.push_back(4);
    num.push_back(5);
    num.erase(num.begin());  //this deletes first 1 element
    cout<<num.front();       //prints 2
    cout<<endl;
    // num.clear()  //erase all the element in the vector
}

void swap(){
    vector<int> vector1 ={1,2,3};
    vector<int> vector2 ={4,5,6};
    swap(vector1,vector2);
    for(int x: vector1){cout<<x<<" ";}
    cout<<endl;
}

void insert(){
    vector<int> box ={1,2,3,4,7};
    box.insert(box.begin()+4,5);  //this insert 5 at 4th index
    for(int y: box){ cout<<y<<" "; }

}


   int main(){
   basicVec(); 
   duplicateVec(); 
   fiveEightVec();
   erase();
   swap(); //this swaps the vector od 2 vectors
   insert();// this function used to insert element in anywhere of the vector
}