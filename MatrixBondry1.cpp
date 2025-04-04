#include <iostream>
using namespace std;

int main() {
   
    cout<<"\n--------------------------------------------------------------"<<endl;
    int r=0;
    cout<<"Enter Number Of Row :-> ";
    cin>>r;
    cout<<"\n--------------------------------------------------------------"<<endl;
    int arr[r][r] ;

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<r; j++)
        {
            cout<<"Enter Element ["<<i<<"]["<<j<<"] => ";
            cin>>arr[i][j];
        }
    }

    cout<<"\n--------------------------------------------------------------"<<endl;

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<r; j++)
        {
            cout<<arr[i][j]<<" ";
        }

        cout<<endl;
    }

    cout<<"\n--------------------------------------------------------------"<<endl;
    for (int j = 0; j < r; j++) {
        cout << arr[0][j] << " ";
    }

  
    for (int i = 1; i < r; i++) {
        cout << arr[i][r-1] << " ";
    }

    
    for (int j = r-2; j >= 0; j--) {
        cout << arr[r-1][j] << " ";
    }

    
    for (int i = r-2; i > 0; i--) {
        cout << arr[i][0] << " ";
    }

    cout<<"\n--------------------------------------------------------------"<<endl;

    return 0;
}
