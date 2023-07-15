
void reverseQueue(queue<int> &q){
    //base case

    if(q.empty()){
        return ;
    }
    int a=q.front();
    q.pop();
    reverseQueue(q);
    q.push(a);
    //dont need to return here BEcause base case return every fuction call
    
}
int main(){
    int  a,b,c;
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(120);
    q.push(110);
    //  while(!q.empty()){
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }
    cout<<"after function call"<<endl;
    reverseQueue(q);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

