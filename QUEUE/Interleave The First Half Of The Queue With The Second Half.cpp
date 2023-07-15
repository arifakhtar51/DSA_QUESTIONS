#include <bits/stdc++.h> 
void interLeaveQueue(queue < int > & q) {
    // Write your code here.
    queue < int > q1;
    queue < int > q2;

    int n=q.size()/2;
    while(n>=1){
        int ele=q.front();
        q1.push(ele);
        q.pop();
        n--;
    }
    while(!q.empty()){
        int ele=q.front();
        q2.push(ele);
        q.pop();
    }
    while(!q1.empty() && !q2.empty()){
        q.push(q1.front());q1.pop();
        q.push(q2.front());q2.pop();
    }
   
}
