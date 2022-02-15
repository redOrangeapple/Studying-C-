#include<iostream>
#include<array>
using namespace std;
int main(int argc, char const *argv[])
{
        array<int,5> scores = {50,60,70,80,90};

        int s= 0;

        for(int i = 0 ; i <scores.size();i++)
        s+= scores[i];

        cout << s << endl;
        


    return 0;
}
