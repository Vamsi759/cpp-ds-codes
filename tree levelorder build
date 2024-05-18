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
Node * level(){
    int p;cin>>p;
    Node *n=new Node(p);
    queue<Node*>den;
    den.push(n);
    while(!den.empty()){
        Node *n=den.front();
        den.pop();
        int a,b;
        cin>>a>>b;
        if(a!=-1){
            n->left=new Node(a);
            den.push(n->left);
        }
        if(b!=-1){
            n->right=new Node(b);
            den.push(n->right);
        }
        
    }return n;
}
void den(Node *r){
    if(r==NULL)return ;
    cout<<r->data;
    den(r->left);
    den(r->right);
}
int main(){
    Node *root;
    root=level();
   // den(root);
   vector<int>a={1,2,3,4,5,6,7};
   for(int i=0;i<a.size();i++){
       int aps;
      // root=ap(root,a[i]);
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
