#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class TwoStacks{
public:
    int *arr;
    int top1;
    int top2;
    int size;

    TwoStacks(int s){
        this ->size = s;
        arr = new int[s];
        top1 = -1;
        top2 = s;
    }

    void push1(int element){
        if(top2 - top1 > 1){
            top1++;
            arr[top1] = element;
        }
    }

    void push2(int element){
        if(top2-top1>1){
            top2++;
            arr[top2] = element; 
        }
    }

    int pop1(){
        if(top1 >= 0){
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else{
            return -1;
        }
    }

    int pop2(){
        if(top1 < size){
            int ans = arr[top1];
            top2++;
            return ans;
        }
        else{
            return -1;
        }
    }
};

int main()
{
    TwoStacks s(5);

    
    return 0;
}