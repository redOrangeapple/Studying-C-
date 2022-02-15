#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{


    int scores[5] ={50,60,70,80,90};

    //int sz = sizeof(scores)/sizeof(int);
    int s =  0;
    int sz = size(scores);
    for (int i = 0; i < sz; i++)
    {
        s+= scores[i];
    }
    float m = (float) s/sz;

    cout << "Mean Score " << m << endl;
 

    return 0;
}
