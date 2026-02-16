#include<bits/stdc++.h>
using namespace std;

void vectorEx(){
   vector<int> vec;
   vec.push_back(1);  //this do insertion of ele in vector
   vec.push_back(2);
   vec.push_back(3);
   vec.push_back(4);
   vec.emplace_back(5);  //this do insertion as well

   for(int i=0;i<vec.size(); i++){
    cout<<vec[i]<<" ";
   }
   cout<<endl;


   //using iterator
   //now print first element by  .begin() funciton
   vector<int> :: iterator BeginItr = vec.begin(); //this itr store memory location where 1st element is stored
   vector<int> :: iterator EndItr = vec.end(); //this itr store memory location after the last element is present
   cout<< "The first element in vector is: "<<*BeginItr<<endl;
   cout<< "The end element in vector is: "<<*(EndItr-1)<<endl;  //to print last element we have to make minus one 


    //another method to write upper part is below 
    // auto BeginItr = vec.begin();
    // auto EndItr = vec.end(); 
     for(auto i=BeginItr;i<EndItr;i++){
    cout<<*i<<" ";
  }
      cout<<endl;

  //Another shortcut form is by for each loop
  for(auto j:vec){
    cout<<j<<" ";}
    cout<<endl;


    //Reverse iterator vector Printing
    cout<<"Reverse vector sequence is:"<<endl;
    auto revBegin = vec.rbegin();
    auto revEnd = vec.rend();
    for(auto i=revBegin;i<revEnd;i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    
}
int main(){
vectorEx();
    return 0;
}