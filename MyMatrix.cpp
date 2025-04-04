#include<iostream>
using namespace std;

class MyMatrix
{
    int row;
    int col;
    int **ptr;

    public :

    MyMatrix()
    {
        cout<<"Default Constructor called..."<<endl;
        row=3;
        col=3;

        ptr = new int*[row];

        for(int i=0; i<row; i++)
        {
            ptr[i] = new int [col];
        }

        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                ptr[i][j]=0;
            }
        }
    }

    MyMatrix(int rc)
    {
        cout<<"One Parameter Constructor called..."<<endl;
        
        row = col = rc;

        ptr = new int*[row];

        for(int i=0; i<row; i++)
        {
            ptr[i] = new int [col];
        }

        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                ptr[i][j]=0;
            }
        }
    }
    
    MyMatrix(int r , int c)
    {
        cout<<"Two parameter Constructor called..."<<endl;

        row=r;
        col=c;

        ptr = new int*[row];

        for(int i=0; i<row; i++)
        {
            ptr[i] = new int [col];
        }

        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                ptr[i][j]=0;
            }
        }

    }

    MyMatrix(MyMatrix &m)
		{
			row=m.row;
			col=m.col;
			
			ptr=new int *[row];
			for(int i=0;i<row;i++)
			{
				ptr[i]=new int[col];
			}
			
			
			for(int i=0;i<row;i++)
			{
				for(int j=0;j<col;j++)
				{
					ptr[i][j] = m.ptr[i][j];
				}
			}
		}

        const MyMatrix &operator =(const MyMatrix &m)
		{
			for(int i=0;i<row;i++)
			{
				delete []ptr[i];
			}

			delete []ptr;
			
			row=m.row;
			col=m.col;

			ptr=new int *[row];
			for (int i=0;i<row;i++)
			{
				ptr[i]=new int[col];
			}

			for(int i=0;i<row;i++)
			{
				for(int j=0;j<col;j++)
				{
					ptr[i][j] = m.ptr[i][j];
				}
				
			}
			return *this;
		}

        MyMatrix  operator +(const MyMatrix &m)
		{
			MyMatrix temp;
			for(int i=0;i<row;i++)
			{
			
				for(int j=0;j<col;j++)
				{
					temp.ptr[i][j] = ptr[i][j] + m.ptr[i][j];
				}
			}
			return temp;
			
		}

        MyMatrix  operator - (const MyMatrix &m)
		{
			MyMatrix temp;
			for(int i=0;i<row;i++)
			{
			
				for(int j=0;j<col;j++)
				{
					temp.ptr[i][j] = ptr[i][j] - m.ptr[i][j];
				}
			}
			return temp;
			
		}

        MyMatrix operator * (const MyMatrix &m)
		{
			MyMatrix temp;
			for(int i=0;i<row;i++)
			{
				for(int j=0;j<col;j++)
				{
					temp.ptr[i][j]=0;
					for(int k=0;k<col;k++)
					{
						temp.ptr[i][j] = temp.ptr[i][j] + ptr[i][k] * m.ptr[k][j];
					}
				}
			}
			return temp;
		}
		

   

    ~MyMatrix()
    {
        for(int i=0; i<row; i++)
        {
            delete []ptr[i];
        }

        delete [] ptr;


    }


    void Accept_Array()
    {
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                cout<<"\n Enter Element Array PTR of ["<<i<<"]["<<j<<"] => ";
               cin>>ptr[i][j];
            }
        }
    }
    void Display_Array()
    {
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
               cout<<ptr[i][j]<<" ";
            }

            cout<<endl;
        }
       
    }



};

int main()
{
    MyMatrix m;
	m.Accept_Array();
	m.Display_Array();

	cout<<endl;

	MyMatrix m1(3,3);
	m1.Accept_Array();
	m1.Display_Array();

	cout<<endl;

	MyMatrix m2;
	m2=m1+m;
	m2.Display_Array();

	cout<<endl;

	MyMatrix m3;
	m3=m1-m;
	m3.Display_Array();

	cout<<endl;
    
	MyMatrix m4;
	m4=m*m1;
	m4.Display_Array();



    return 0;

}