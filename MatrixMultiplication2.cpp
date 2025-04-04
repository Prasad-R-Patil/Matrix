#include<iostream>
using namespace std;

void Matrix_Multiplication(int (*Arr1)[3] , int (*Arr2)[3] , int (*Arr3)[3])
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            Arr3[i][j]=0;
            for(int k=0; k<3; k++)
            {
                Arr3[i][j] = Arr3[i][j] + Arr1[i][k] * Arr2[k][j] ;
            }
        }
    }

}

void Accept_Array(int (*Arr)[3])
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<"Enter Array Element => ["<<i<<"]["<<j<<"]";
            cin>>Arr[i][j];
        }
    }
}

int main()
{
    int Arr1[3][3];
    int Arr2[3][3];
    int Arr3[3][3];


    cout<<"\n=====================[ Insert Element in Arr1 ]============================\n";

    Accept_Array(Arr1);

    cout<<"\n===========================================================================\n";

    cout<<"\n=====================[ Insert Element in Arr2 ]============================\n";
    Accept_Array(Arr2);

    cout<<"\n===========================================================================\n";

    Matrix_Multiplication(Arr1,Arr2,Arr3);

    cout<<"\n===================[ After Matrix-Multiplication ]==========================\n";
   
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<Arr3[i][j]<<"   ";
        }
        cout<<endl;
    }
    cout<<"\n===========================================================================\n";

    return 0;


}