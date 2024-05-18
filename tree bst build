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
Node* ap(Node *r,int k){
    if(r==NULL)return new Node(k);
    
    if(k<(r->data))r->left=ap(r->left,k);
    else{
    
    r->right=ap(r->right,k);}
    return r;
    
}
void den(Node *r){
    if(r==NULL)return ;
    cout<<r->data;
    den(r->left);
    den(r->right);
}
int main(){
    Node *root;
    
   // den(root);
   vector<int>a={5,2,7,4,3,6};
   for(int i=0;i<a.size();i++){
       root=ap(root,a[i]);
   }
   
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
              // cout<<"("<<n->left->data<<")"<<"--";
           }//else cout<<"("<<"NULL"<<")"<<"--";
           if(n->right){
               p.push(n->right);
              // cout<<"("<<n->right->data<<")"<<"--";
           }//else cout<<"("<<"NULL"<<")"<<"--";
       }
       
       
   }
}
//output
