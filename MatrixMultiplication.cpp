#include<iostream>
using namespace std;




int main()
{
    int Row1 = 0;
    int Row2 = 0;
    int Column1 = 0;
    int Column2 = 0;
    cout<<"\n==============================================================================="<<endl;
    cout<<"Enter Row And Column (Both Are Same Size)";
    cout<<"\n==============================================================================="<<endl;
    cout<<"Enter The Value Of First Matrix Row =>  ";
    cin>>Row1;
    cout<<"Enter The Value Of First Matrix Column =>  ";
    cin>>Column1;
    cout<<"\n==============================================================================="<<endl;
    cout<<"Enter The Value Of Second Matrix Row =>  ";
    cin>>Row2;
    cout<<"Enter The Value Of Second Matrix Column =>  ";
    cin>>Column2;
    cout<<"\n==============================================================================="<<endl;

   int Arr1[Row1][Column1];
   int Arr2[Row2][Column2];
   int Arr3[Row1][Column2];


   if(Row2 != Column1)
   {
      cout<<" [ Sorry ] => We Can Not Multiply the Matrix (Matrix-A & Matrix=B)... "<<endl;
   }
   else
   {
            for(int i=0; i<Row1; i++)
            {
                for(int j=0; j<Column1; j++ )
                {
                    cout<<"Enter The First Matrix Element ["<<i<<"]["<<j<<"]  =>  ";
                    cin>>Arr1[i][j];
                }

                
            }

            cout<<"\n==============================================================================="<<endl;

            for(int i=0; i<Row2; i++)
            {
                for(int j=0; j<Column2; j++ )
                {
                    cout<<"Enter The Second Matrix Element ["<<i<<"]["<<j<<"]  =>  ";
                    cin>>Arr2[i][j];
                }
            }

            cout<<"\n================================================================================"<<endl;

            cout<<"\n\n=========================[Your First Matrix]=================================="<<endl;

            
            for(int i=0; i<Row1; i++)
            {
                for(int j=0; j<Column1; j++ )
                {
                    
                    cout<<Arr1[i][j]<<"  ";
                    
                }

                cout<<endl;
            }
            cout<<"\n================================================================================="<<endl;

            cout<<"\n\n=========================[Your Second Matrix]=================================="<<endl;

            for(int i=0; i<Row2; i++)
            {
                for(int j=0; j<Column2; j++ )
                {
                    
                    cout<<Arr2[i][j]<<"  ";
                    
                }

                cout<<endl;
            }
            cout<<"\n================================================================================="<<endl;

            // Matrix Multiplication Logic

            for(int i=0; i<Row1; i++)
            {
                for(int j=0; j<Column2; j++ )
                {
                    Arr3[i][j]=0;

                    for(int k=0; k<Column1; k++)
                    {
                        Arr3[i][j] = Arr3[i][j] + Arr1[i][k] * Arr2[k][j];
                    }
                
                }

            }

            cout<<"\n\n=======================[Your Matrix Multiplication]==============================="<<endl;

            for(int i=0; i<Row1; i++)
            {
                for(int j=0; j<Column2; j++ )
                {
                    
                    cout<<Arr3[i][j]<<"  ";
                    
                }

                cout<<endl;
            }
    }
    cout<<"\n================================================================================="<<endl;

    cout<<"\n\n==================================[THE END]===================================="<<endl;



    return 0;
   
}