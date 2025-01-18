#include <iostream>
using namespace std;
int main()
{
    int students[3][3] = { {100, 100, 100},
                           {85, 74, 89},
                           {63, 72, 65} };
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        cout<<students[i][j]<<", ";
        }cout<<endl;
    }
    return 0;
}