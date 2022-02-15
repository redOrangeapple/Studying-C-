#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v1{1,2,3,4};

     v1.push_back(5);
     v1.push_back(6);

   
    cout << v1.capacity() << " : " << v1.size()  << endl;

    v1.insert(v1.begin(),0);
     cout << v1.capacity() << " : " << v1.size()  << endl;



    v1.erase(v1.begin()+1,v1.begin()+3);
     cout << v1.capacity() << " : " << v1.size()  << endl;
    










}