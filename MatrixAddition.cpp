#include<iostream>
using namespace std;




int main()
{
    int Row = 0;
    int Column = 0;
    cout<<"\n==============================================================================="<<endl;
    cout<<"Enter Row And Column (Both Are Same Size)";
    cout<<"\n==============================================================================="<<endl;
    cout<<"Enter The Value Of Row =>  ";
    cin>>Row;
    cout<<"Enter The Value Of Column =>  ";
    cin>>Column;
    cout<<"\n==============================================================================="<<endl;

   int Arr1[Row][Column];
   int Arr2[Row][Column];
   int Arr3[Row][Column];


    


    for(int i=0; i<Row; i++)
    {
        for(int j=0; j<Column; j++ )
        {
            cout<<"Enter The First Matrix Element ["<<i<<"]["<<j<<"]  =>  ";
            cin>>Arr1[i][j];
        }

        
    }

    cout<<"\n==============================================================================="<<endl;

    for(int i=0; i<Row; i++)
    {
        for(int j=0; j<Column; j++ )
        {
            cout<<"Enter The Second Matrix Element ["<<i<<"]["<<j<<"]  =>  ";
            cin>>Arr2[i][j];
        }
    }

    cout<<"\n================================================================================"<<endl;

    cout<<"\n\n=========================[Your First Matrix]=================================="<<endl;

    for(int i=0; i<Row; i++)
    {
        for(int j=0; j<Column; j++ )
        {
            
            cout<<Arr1[i][j]<<"  ";
            
        }

        cout<<endl;
    }
    cout<<"\n================================================================================="<<endl;

    cout<<"\n\n=========================[Your Second Matrix]=================================="<<endl;

    for(int i=0; i<Row; i++)
    {
        for(int j=0; j<Column; j++ )
        {
            
            cout<<Arr2[i][j]<<"  ";
            
        }

        cout<<endl;
    }
    cout<<"\n================================================================================="<<endl;

    cout<<"\n\n=========================[Your Matrix Addition]=================================="<<endl;

    for(int i=0; i<Row; i++)
    {
        for(int j=0; j<Column; j++ )
        {
            
            Arr3[i][j] = Arr1[i][j] + Arr2[i][j];
            cout<<Arr3[i][j]<<"  ";
            
        }

        cout<<endl;
    }
    cout<<"\n================================================================================="<<endl;

    cout<<"\n\n==================================[THE END]===================================="<<endl;



    return 0;
   
}