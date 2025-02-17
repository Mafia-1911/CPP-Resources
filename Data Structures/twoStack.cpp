//Q. Implement two stacks usings one data structure
#include<iostream>
using namespace std;

class twoStack{
public:
    int top1;
    int top2;
    int* stackArr;

    twoStack(int size){
        stackArr=new int[size];
        this->top1=-1;
        this->top2=-1;
    }
    void push1(int value){
        if(top2-top1>1){
            top1++;
            stackArr[top1]=value;
        }else{
            cout<<"Stack Overflow"<<endl;
        }
    }

    void push2(int value){
        if(top2-top1>1){
            top2++;
            stackArr[top2]=value;
        }else{
            cout<<"Stack Overflow"<<endl;
        }
    }
    int pop1(){
        if(top1>=0){
           //popping is just changing the index
           cout<<stackArr[top1];
           top1--;
        }
    }

};
