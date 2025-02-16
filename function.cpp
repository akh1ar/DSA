#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <char> vec = {'a','b','c','d','e'};
    for(char v : vec){
        cout<<v<<" ";
    }
    //size function show the number of element present in vector.
    cout<<endl<<"Size = "<<vec.size()<<endl;
    //push_back: add the element in vector in last.
    vec.push_back('f');
    vec.push_back('g');
    for(char v : vec){
        cout<<v<<" ";
    }
    cout<<endl<<"Size = "<<vec.size()<<endl;
    //pop_black function delete the value in last.
    vec.pop_back();//delete the last index value
        for(char v : vec){
        cout<<v<<" ";
    }
    cout<<endl<<"Size = "<<vec.size()<<endl;
    //front and back.
    cout<<vec.front()<<endl<<vec.back()<<endl;
    //at is anthor syntax print the value particular index.
    cout<<vec.at(2)<<endl;
    //capacity function show how vector to capable to to store element.
    vector <int> vec1;
    vec1.push_back(1);
    vec1.push_back(2);
    vec1.push_back(2);
    cout<<"size of vec1 :"<<vec1.size()<<endl;
    cout<<"capacity of vec1 :"<<vec1.capacity()<<endl;
    vec1.push_back(4);
    cout<<"size of vec1 :"<<vec1.size()<<endl;
    cout<<"capacity of vec1 :"<<vec1.capacity()<<endl;
    //awlays min size not avlaible in vector vector automatic double its capcity.
    vec1.push_back(5);
    cout<<"size of vec1 :"<<vec1.size()<<endl;
    cout<<"capacity of vec1 :"<<vec1.capacity()<<endl;
    return 0;
}