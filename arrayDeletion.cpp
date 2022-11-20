#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int arr[10];
    int length = 0;

    // cout << "deletion at end " << endl;
    for(int i=0; i<6; i++){
        arr[length] = i;
        length++;
    }

    // cout << "before: " << endl;
    // for(int i=0; i<length; i++){
    //     cout << arr[i] << " ";
    // }cout << endl;

    length--;

    cout << "at last " << endl;
    for(int i=0; i<length; i++){
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    // length++;
    // for(int i=0; i<length; i++){
    //     cout << arr[i] << " ";
    // }

    // cout << "deletion at the start: " << endl;
    // // i/p
    // //  1 2 3 4 5
    // // o/p
    // //  2 3 4 5 
    // for(int i=0;i <length; i++){
    //     cout << arr[i] << " ";
    // }cout << endl;

    for(int i=0; i<length; i++){
        // arr[i-1] = arr[i];  //either you go for this or,
        arr[i] = arr[i+1]; // this one
    }
    length--;

    cout << "at first " << endl;
    for(int i=0; i<length; i++){
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    // cout << length << endl; // and for this length = 

    // int len = sizeof(arr) / sizeof(arr[0]); // capacity = length
    // cout << len << endl;

    // deletion from in-between or from any place
    // we have
    // i/p : 1 2 3 4 
    // o/p : 1 3 4 
    // for(int i=0; i<length; i++){
    //     cout << arr[i] << " ";
    // }cout << endl;

    // to do this first take out the index of the number which is to be deleted
    int index = 0;
    for(int i=0; i<length; i++){
        if(arr[i] == 2){
            cout << i << endl;
            index = i;
        }
    }
    //  then start the next loop from index + 1 itself to delete the number that you wanted to delete probably 
    for(int i = index+1; i<length; i++){
        arr[i-1] = arr[i];
    }
    length--;

    cout << "at any position " << endl;
    for(int i=0; i<length; i++){
        cout << arr[i] << " ";
    }cout << endl;
    return 0;
}