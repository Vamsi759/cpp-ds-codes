#include<iostream>
#include<vector>
#include<map>
#include<list>
#include<unordered_map>
using namespace std;
class node{
    public:
    string n;
    list<string>nbr;
    node(string s){
        n=s;
    }
    
};
class graph{
    public:
    unordered_map<string,node*>den;
    
    void add(vector<string>p){
        
        for(int i=0;i<p.size();i++){
        den[p[i]]=new node(p[i]);
        }
        
    }
    void edge(string a,string b){
        den[a]->nbr.push_back(b);
    }
    
    void print(){
        for(auto i:den){
            cout<<i.first<<"-->";
            for(auto j:i.second->nbr){
                cout<<j<<",";
            }cout<<endl;
        }
    }
};
int main(){graph g;
    vector<string>p={"delhi","london","paris","newyork"};g.add(p);
    vector<string>r={"delhi","london","newyork","london","delhi","paris","paris","newyork"};
    for(int i=0;i<r.size();i+=2){
        g.edge(r[i],r[i+1]);
    }g.print();
/*

newyork-->london,
paris-->newyork,
london-->
delhi-->london,paris,



*/
    
    
    
}
