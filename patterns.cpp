#include<iostream>
using namespace std;
// pattern 1 --> 
// int main()
// {
//     int n;
//     cin >> n;
//     int i =1;

//     while(i<=n){

//         int j=1;
//         while(j<=n)
//         {
//             cout<<"*";
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }
// pattern 2 -->
// int main ()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i <= n){
//         int j = 1;
//         while(j<=n){
//             cout << i ;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
//     return 0;
// }
//pattern 3 -->
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while (j<=n){
//             cout << j;
//             j += 1;
//         }
//         cout << endl;
//         i += 1;
//     }
//     return 0;
// }
// pattern 4 -->
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while (j<=n){
//             cout << n-j+1;
//             j += 1;
//         }
//         cout << endl;
//         i += 1;
//     }
//     return 0;
// }
// pattern 4-->
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     int count = 1;
//     while(i<=n){
//         int j = 1;
//         while (j<=n){
//             cout << count << " ";
//             count += 1;
//             j += 1;
//         }
//         cout << endl;
//         i += 1;
//     }
//     return 0;
// }
// // pattern 5 -->
// int main()
// {
//     int i = 1;
//     int n;
//     cin >> n;
//     int count = 1;
//     while(i<=n){
//         int j = 1;
//         while (j<=i){
//             cout << count <<" ";
//             count = count + 1;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
//     return 0;
// }
// pattern 6 -->
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
    
//     while(i<=n){
//         int j = 1;
//         int count = i;
//         while (j<=i){
//             cout << count;
//             count = count + 1;
//             j += 1;
//         }
//         cout << endl;
//         i += 1;
//     }
//     return 0;
// }
// pattern 7 -->
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while (j<=i){
//             cout << i-j+1 << " ";
//             j += 1;
//         }
//         cout << endl;
//         i += 1;
//     }
//     return 0;
// }
// pattern 8 -->
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         char ch = 'A' + i - 1;
//         while (j<=n){
//             cout << ch;
//             j += 1;
//         }
//         cout << endl;
//         i += 1;
//     }
//     return 0;
// }
// pattern 9 -->
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while(i<=n){
//         int j = 1; 
//         while (j<=n){
//             char ch = 'A' + j - 1;
//             cout << ch;
//             j += 1;
//         }
//         cout << endl;
//         i += 1;
//     }
//     return 0;
// }
// pattern 10 -->
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     char count = 'A';
//     while(i<=n){
//         int j = 1;
//         while (j<=n){
//             cout << count;
//             count = count + 1;
//             j += 1;
//         }
//         cout << endl;
//         i += 1;
//     }
//     return 0;
// }
//pattern 11 -->
// int main(){
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i<=n){
//         int j = 1;
//         while (j<=n){
//             char ch = 'A'+i+j-2;
//             cout << ch;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
//     return 0;
// }
// pattern 12 -->
// int main()
// {
//     int i = 1;
//     int n;
//     cin >> n;

//     while(i<=n){
//         int j = 1;
//         while (j<=i){
//             char ch = 'A' + i - 1;  
//             cout << ch << " ";
//             j += 1;
//         }
//         cout << endl;
//         i += 1;
//     }
//     return 0;
// }
// O/P --> 
// A
// B B 
// C C C 
// D D D D

// pattern 13 -->
// int main()
// {
//     int i=1;
//     int n;
//     cin>>n;
//     while(i<=n){
//         int j=1;
//         char value='A'+i-1;
//         while(j<=i){
//             cout<<value;
//             value=value+1;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
//     return 0;
// }
// o/p -->
// A
// B C 
// C D E 
// D E F G 

// pattern 14 -->
// int main()
// {
//     int i=1;
//     int n;
//     cin>>n;
//     while(i<=n){
//         int j=1;
//         char value='A'+n-i;
//         while(j<=i){
//             cout<<value;
//             value=value+1;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
//     return 0;
// }
// o/p
// D
// C D 
// B C D 
// A B C D 

// pattern 15 -->
// int main (){
//     int row = 1;
//     int n;
//     cin >> n;
//     while (row <= n)
//     {
//         int space = n - row;
//         while (space)
//         {
//             cout << " ";
//             space = space - 1;
//         }
//         int col = 1;
//         while (col<=row){
//             cout << "*" << " ";
//             col = col + 1 ;
//         }
//         cout << endl;
//         row = row + 1;
        
//     }
//     return 0;
// }
// o/p
//    *
//   * *
//  * * * 
// * * * * 
// pattern 16 --> 
// int main (){
//     int row = 1;
//     int n;
//     cin >> n;
//     while (row <= n)
//     {
//         int space = n - row;
//         while (space)
//         {
//             cout << " ";
//             space = space - 1;
//         }
//         int col = 1;
//         while (col<=row){
//             cout << "*";
//             col = col + 1 ;
//         }
//         cout << endl;
//         row = row + 1;
        
//     }
//     return 0;
// }
// o/p -->
//      *
//    * *
//  * * *
//* * * *
// pattern 17 -->
// int main (){
//     int row = 1;
//     int n;
//     cin >> n;
//     while (row <= n)
//     {
//         int col = 1;
//         while (col<=n-row){
//             cout << "*" << " ";
//             col = col + 1 ;
//         }
//         cout << endl;
//         row = row + 1;
//     }
//     return 0;
// }
// o/p -->
// * * * *
// * * *
// * *
// * 
// int main ()
// {
//     int i = 1;
//     int n;
//     cin >> n;

//     while (i<=n){
//         int space = i - 1;
//         while (space){
//             cout << " ";
//             space = space + 1;
//         }
//         int j = 1;
//         while(j<=n-i+1){
//             cout << "*";
//             j = j - 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
//     return 0;
// }
// pattern 18 -->
//  int main (){
//      int row = 1;
//      int n;
//      cin >> n;
//      while (row <= n)
//      {
//          // spaces 
//          int space = n - row;
//          while (space)
//          {
//              cout << " ";
//              space = space - 1;
//          }
//          // pattern 1
//          int j = 1;
//          while (j<=row){
//              cout << j;
//              j = j + 1 ;
//          }
//          // pattern 2 
//          int start = row - 1;
//          while(start){
//              cout << start;
//              start = start - 1;
//          }
//         cout << endl;
//         row = row + 1;
//      }
//      return 0;
//  }
// o/p -->
//      1 
//    1 2 1
//  1 2 3 2 1 
//1 2 3 4 3 2 1
// pattern 19 -> 
int main()
{
    int i = 1;
    int n;
    cin >> n;

    while(i <= n){
        // int count = n - i - 1;
        int j = 1;
        while (j<=n-i+1){
            cout << j;
            // count = count + 1;
            j = j + 1;
        }
        int space = i - 1;
        while(space){
            cout << "*";
            space = space - 1;
        }
        int start = i+1-1-1;
        while(start){
            cout << "*";
            start = start - 1;
        }
        int val = n-i+1;
        while(val){
            cout << val;
            val = val - 1;
        }
        cout << endl;
        i = i + 1;
    }
}
// o/p --> very important achievment
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1