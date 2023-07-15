class Solution {
public:
void solve1(vector<int>&ans,vector<int>& arr){
     
   
    stack<int> s;
    s.push(-1);
    for(int i=ans.size()-1;i>=0;i--){
        int ele=arr[i];
        while(s.top()!=-1 &&arr[s.top()]>=ele){
            s.pop();
        }

        ans[i]=s.top();
        
        s.push(i);

    }
    
       return ;

}
void solve2(vector<int>&ans,vector<int>& arr){
     
   
    stack<int> s;
    s.push(-1);
    for(int i=0;i<arr.size();i++){
        int ele=arr[i];
        while(s.top()!=-1 &&arr[s.top()]>=ele){
            s.pop();
        }

        ans[i]=s.top();
        
        s.push(i);

    }
    
        return ;

}
    int largestRectangleArea(vector<int>& heights) {
        int N=heights.size();
        vector<int> nextSmllEle(N);
        solve1(nextSmllEle,heights);

         vector<int> prevSmllEle(N);

          solve2(prevSmllEle,heights);

          int n=0;
          int p=0;
          int l,b;
          int area;
          for(int i=0;i<N;i++){
              if(nextSmllEle[n]==-1){
                  nextSmllEle[n]=N;
              }
              l=nextSmllEle[n]-prevSmllEle[p]-1;
              b=heights[i];
              area=max(area,l*b);
              n++;
              p++;


          }
        return area;
    }
};




