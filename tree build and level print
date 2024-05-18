#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node *right,*left;
    Node(int v){
        data=v;
        right=left=NULL;
    }
};
Node* den(){
    int c;cin>>c;
    if(c==-1)return NULL;
    Node *n=new Node(c);
    n->left=den();
    n->right=den();
    return n;
    
}
void den(Node *r){
    if(r==NULL)return ;
    cout<<r->data;
    den(r->left);
    den(r->right);
}
int main(){
    Node *root;
    root=den();
   // den(root);
   
   queue<Node*>p;
   p.push(root);
   p.push(NULL);
   while(!p.empty()){
       Node *n=p.front();
       p.pop();
       if(n==NULL){
           cout<<endl;
           if(!p.empty()){
               p.push(NULL);
           }
           
       }else{
           cout<<n->data;
           if(n->left){
               p.push(n->left);
           }
           if(n->right){
               p.push(n->right);
           }
       }
       //input
       // 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1 
   }
}
