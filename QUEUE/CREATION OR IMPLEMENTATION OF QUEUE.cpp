#include <iostream>
using namespace std;
class Queue{
    public:
    int *arr;
    int size;
    int front ;
    int rear;

    //constructor
    Queue(int size){
        this->size=size;
        arr=new int[size];
        front =0;
        rear=0;
    }
    void push(int data){
        if(rear==size){
            cout<<"Queue is full"<<endl;
        }
        else{
            arr[rear]=data;
            rear++;
          
        }
    }
    void pop(){
        if(front==rear){
            cout<<"queue is already full";
        }
        else{
            arr[front]=-1;
            front++;
            if(front==rear){
                front=0;
                rear=0;
            }
        }
    }
    int getfront(){
        if(rear==front){
            cout<<" Queue is empty"<<endl;
        }
        else
        return arr[front];
    }
    int getsize(){
        return rear-front;
    }

};
int main(){

    Queue q(5);
    q.push(10);
    q.push(20);
    // cout<<q.getTop()<<endl;
    // q.pop();
    // q.push(10);
    // cout<<q.getTop()<<endl;
    // q.pop();
    // q.push(20);
    // cout<<q.getTop()<<endl;
    // q.pop();
    //  cout<<"yr"<<q.getsize()<<endl;

    // q.push(10);
    // cout<<q.getTop()<<endl;
    // q.pop();
    // q.push(20);

    // cout<<q.getTop()<<endl;


    cout<<q.getsize();
    return 0;
}
