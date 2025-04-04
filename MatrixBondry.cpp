#include<iostream>
using namespace std;
 
 
int main()
{
 
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(i==0)
            {
                cout<<arr[i][j]<<" ";
            }  
        }

        for(int j=0; j<4; j++)
        {
            if(((i>0))&&(j==3))
            {
                cout<<arr[i][j]<<" ";
            }  
        }

        for(int j=4-2; j>=0; j--)
        {
            if((i==3)&&(j<4-1))
            {
                cout<<arr[i][j]<<" ";
            }  
        }


    }
    cout<<arr[2][0]<<" "<<arr[1][0];
    

 
 
 return 0;
}