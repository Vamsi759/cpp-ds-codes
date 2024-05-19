#include<iostream>
#include<vector>
#include<list>
using namespace std;
class graph{
    public:int v;
    list<int>*l;
    graph(int x){
        v=x;
        l=new list<int>[v];
    }
    void add(int a,int b){
        l[a].push_back(b);l[b].push_back(a);
    }//
    void print(){
        for(int i=0;i<v;i++){
            cout<<i<<"-->";
            for(auto j:l[i])cout<<j<<" ";
            cout<<endl;
        }
    }
    
    void dfshelp(int s,bool *n){
        
        n[s]=1;
        cout<<s<<" ";
        for(auto i:l[s]){
            
           if(n[i]==0)dfshelp(i,n);
           
        }
        return ;
    }
    
    void dfs(int s){
        bool *n=new bool[v]{0};
        dfshelp(s,n);
    }
    
    
    
};
int main(){
    graph g(7);
    vector<int>den={0,1,1,2,2,3,3,5,5,6,4,5,0,4,3,4};
    for(int i=0;i<den.size();i+=2){
        g.add(den[i],den[i+1]);
    }
    g.print();
    g.dfs(1);
    
}








/*     output
0-->1 4 
1-->0 2 
2-->1 3 
3-->2 5 4 
4-->5 0 3 
5-->3 6 4 
6-->5 
1 0 4 5 3 2 6 





*/








