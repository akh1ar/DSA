/*
Sprial Matrix
 1 2 3 4
 5 6 7 8
 9 10 11 12
 13 14 15 16

 approach:
 top->right->bottom->left.
 srow++
 scol++
 erow--
 ecol--
*/
#include <iostream>
using namespace std;
void sprialMatrix(int matix[][4], int n, int m)
{
    int srow = 0, scol = 0;
    int erow = n - 1, ecol = m - 1;

    while (srow <= erow && scol <= ecol)
    {
        // top
        for (int j = scol; j <= ecol; j++)
        {
            cout << matix[srow][j] << " ";
        }
        // right
        for (int i = srow + 1; i <= erow; i++)
        {
            cout << matix[i][ecol] << " ";
        }
        // bottom
        for (int j = ecol - 1; j >= scol; j--){
            /*if middle part is already print in top
            then print bottom
            */
            // if(srow==erow){//middle
            //     break;
            // }
            cout << matix[erow][j] << " ";
        }
        // left
        for (int i = erow - 1; i >= srow + 1; i--){
            // if(scol==ecol){//middle
            //     break;
            // }
            cout << matix[i][scol] << " ";
        }
        srow++;
        scol++;
        erow--;
        ecol--;
    }
    cout << endl;
}
int main()
{
    // int n=4,m=4;
    int arr[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};
    sprialMatrix(arr, 4, 4);

    int arr2[3][4] = {{1, 2, 3, 4},
                      {5, 6, 7, 8},
                      {9, 10, 11, 12}};
    sprialMatrix(arr2,3,4);
    return 0;
}