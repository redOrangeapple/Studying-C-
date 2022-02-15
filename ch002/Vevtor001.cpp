#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v1;
    vector<int> v2(10); // 10개의 정수를 저장할수있는 벡터 모든 초기값 0 
    vector<int> v3(10,1); // 10개의 정수를 저장할수 있는 벡터를 1로 초기화
    vector<int> v4{10,20,30,40,50};
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);

    vector<int> v5(v4);

    vector<int> v6(v4.begin(),v4.begin()+3);
    
    // for(int i = 0 ; i <v6.size() ; i ++)
    // {
    //     cout << v6[i] << endl;
    // }

    // 벡터를 2차원 배열처럼 선언하기
    vector<vector<int>> mat1(2,vector<int>(3));

    vector<vector<int>> mat2{{1,2,3,},{4,5,6}};


    for(int r= 0 ; r < 2;r++)
    {

        for(int c= 0 ; c<3;c++)
        {
            cout << mat2[r][c] << " ,";
        }

        cout << endl;

    }


}

