#include<iostream>
#include<list>
//#include<bits/stdc++.h>
#include<vector>
using namespace std;
class graph{
    public:
    int v;
    list<int>*l;
    graph(int d){
        v=d;
        l=new list<int>[v];
    }
    
    
    void add(int a,int b){
        l[a].push_back(b);
        l[b].push_back(a);
    }
    
    void print(){
        
        for(auto i=0;i<v;i++){
            cout<<i<<"-->";
            for(auto j:l[i]){
                cout<<j<<" ";
            }cout<<endl;
        }
        
    }
};
int main(){
    graph o(6);
    vector<int>p={0,1,0,4,2,1,3,4,4,5,2,3,3,5};
    for(int i=0;i<p.size()-1;i+=2){
        o.add(p[i],p[i+1]);
        
    }
    o.print();
/*  output:
0-->1 4 
1-->0 2 
2-->1 3 
3-->4 2 5 
4-->0 3 5 
5-->4 3 



*/
    
    
}
