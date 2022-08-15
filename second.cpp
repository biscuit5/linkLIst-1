#include <bits/stdc++.h>
using namespace std;

// array of c++;

// int main(){
//         char ar[50];
//         cin.getline(ar,50);
//         cout<<ar<<" ";
//         return 0;
// }

// this a swap function empliment kora

// int main(){
//         int a[]={2,3,4,5,6}, n=5;
//         for (int i = 0; i < n-1; i++)
//         {
//                for (int j = i+1; j < n; j++)
//                {
//                         if(a[i]>a[j]){
//                                 // int tarp = a[i];
//                                 // a[i] = a[j];
//                                 // a[j] = tarp;
//                                 swap(a[i],a[j]);
//                         }
//                }

//         }
//         for (int i = 0; i < n; i++)
//         {
//                cout<<a[i]<<" ";
//         }

//         return 0;
// }

// this sort function empliments function

// int main(){
//         int ar[5]={5,3,4,2,1};
//         int n = 5;
//         sort(ar,ar+n);
//         for (int i = 0; i < n; i++)
//         {
//               cout<<ar[i]<<endl;
//         }
//         return 0;

// }

// two dimonational array ;

// int main(){
//         int row = 4,col=4;
//         int a[row][col];
//         for (int i = 0; i < row; i++)
//         {
//                for (int j = 0; j < col; j++)
//                {
//                         cin>>a[i][j];
//                }

//         }
//         for (int i = 0; i < row; i++)
//         {
//                for (int j = 0; j < col; j++)
//                {
//                         cout<<a[i][j]<<" ";
//                }
//                cout<<endl;

//         }
//         return 0;
// }

// digonal array sum problem;
// int main(){
//         int row,col,i,j;
//         cin>>row>>col;
//         int a[row][col];
//         for ( i = 0; i < row; i++)
//         {
//               for ( j = 0; j< col; j++)
//               {
//                         cin>>a[i][j];
//               }

//         }
//         int sum =0;
//         for ( i = 0; i < row; i++)
//         {
//               for ( j = 0; j< col; j++)
//               {
//                         if (i==j)
//                         {
//                                sum +=a[i][j];
//                         }

//               }

//         }
//         cout<<sum<<endl;

//         return 0;
// }

// 2nd array requite colum or row

// int main(){
//         int row,col,i,j;
//         cin>>row>>col;
//         int a[row][col];
//         for ( i = 0; i < row; i++)
//         {
//                 for ( j = 0; j < col; j++)
//                 {
//                         cin>>a[i][j];
//                 }

//         }
//         int req_col;
//         cin>>req_col;
//         for ( i = 0; i < row; i++)
//         {
//              cout<<a[i][req_col]<<" ";
//         }

//         return 0;
// }

// check the digonal and sclar and identity ;

// int main(){

//         int row,col,i,j;
//         cin>>row>>col;
//         int a[row][col];
//         for ( i = 0; i < row; i++)
//         {
//                for(j =0;j<col;j++){
//                  cin>>a[i][j];
//                }
//         }
//         if (row !=col)
//         {
//                 cout<<"NO"<<endl;
//                 return 0;
//         }
//         for ( i = 0; i < row; i++)
//         {
//                 for ( j = 0; j < col; j++)
//                 {
//                        if(i==j){
//                         continue;
//                        }
//                        if(a[i][j]>0){
//                                 cout<<"No"<<endl;
//                                 return 0;
//                        }
//                 }

//         }
//         int save;
//        for ( i = 0; i < row; i++)
//        {
//                 for ( j = 0; j < col; j++)
//                 {
//                        if (i==j )
//                        {
//                                 if (i==0 && j == 0) save =a[i][j];
//                                 else
//                                 {
//                                         if (save !=a[i][j])
//                                         {
//                                                 cout<< "NOT Sclar"<<endl;
//                                                 return 0;
//                                         }
//                                 }

//                        }

//                 }

//        }

//         cout<< "sclar"<< endl;
//         cout<<save<<endl;

//         return 0;
// }
int main()
{
        int row, col, i, j;
        cin >> row >> col;
        int a[row][col];
        for (i = 0; i < row; i++)
        {
                for (j = 0; j < col; j++)
                {
                        cin >> a[i][j];
                }
        }
        for (i = 0; i < row; i++)
        {
                for (j = 0; j < col; j++)
                {
                        if (a[i][j] != a[j][i])
                        {
                                cout << "NO" << endl;
                                return 0;
                        }
                }
        }

        cout << "Yes" << endl;
        return 0;
}