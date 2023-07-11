#include <iostream>

using namespace std;

int main()
{
    system("clear");
    int matriz[4][4]{
        {3, 4, 6, 8},
        {5, 9, 0, 4},
        {4, 6, 8, 12},
        {35, 678, 67, 89}};

    for ( int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<< " "<< matriz[i][j];
        }
        cout<<endl;
        
    }
    
}