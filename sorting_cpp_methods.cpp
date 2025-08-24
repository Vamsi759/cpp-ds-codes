#include<bits/stdc++.h>
using namespace std;

void merge(int a[],int l,int m,int r){
    // l=p;
    // m=q;
    // r=r;
    //
    int n1=m-l+1;
    int n2=r-m;
    
    vector<int>dl;
    vector<int>dr;
    
    for(int i=0;i<n1;i++){
        dl.push_back(a[l+i]);
    }
    for(int j=0;j<n2;j++){
        dr.push_back(a[m+1+j]);
    }
    
    // maintain current index of sub arrays //and main arry
    int i=0,j=0,k=l;
    
    while(i<n1 and j<n2){
        
        if(dl[i]<=dr[j]){
            a[k]=dl[i++];
        }else{
            a[k]=dr[j++];
        }
        
        k++;
    }
    
    while(i<n1){
        a[k++]=dl[i++];
    }
    while(j<n2){
        a[k++]=dr[j++];
    }
    
}
void mergesort(int a[],int l,int r){
    
    if(l<r){
        
        int m=l+(r-l)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        merge(a,l,m,r);
    }
    
}


int main(){
    int a[]={6,5,4,0,3,2};
    mergesort(a,0,5);
    for(int i=0;i<6;i++){
        cout<<a[i]<<"_";
    }
    
}
----------------------------------------------
selectioon sort
-----------------
#include<bits/stdc++.h>
using namespace std;

void den(vector<int>&s,int ss){
    
    for(int i=0;i<s.size()-1;i++){
        int v=s[i];
       int k=i;
       int r=0;
        for(int j=i+1;j<s.size();j++){
             
            if(s[k]>s[j]){
               // v=s[j];
                k=j;
                
                r++;
            }
            
            
        }
        //cout<<s[k]<<" ";
       if(r>0) {int ap;
        ap=s[i];
        s[i]=s[k];
        s[k]=ap;
           
       }
    }
}


int main(){
    vector<int>a={4,5,3,2,8,1};
    den(a,a.size());cout<<endl;
    
    for(int i=0;i<a.size();i++)cout<<a[i];
    
}

--------------------------------------------------------------
----------------------------------------------------------------------

(____________________insertion sort_____________________)

void den(int a[],int s){

for(int i=1;i<n;i++){

int c=a[i];

int p=i-1;
 
           while(p>=0 and a[p]>c){

           a[p+1]=a[p];
             p=p-1;

            }

          a[p+1]=c;



     }


}

--------------------------------------------------

(___________basic bubble sort____________)
#include<bits/stdc++.h>
using namespace std;

void denq(vector<int>&den){
    
    while(1)
    {
        int c=0;
        
        for(int j=0;j<den.size()-1;j++){
            
            if(den[j]>den[j+1]){
                int a=den[j];
                den[j]=den[j+1];
                den[j+1]=a;
               // cout<<den[j]<<"_"<<den[j+1]<<endl;
            }else c++;
        }
        if(c==den.size()-1)break;
    }
}
int main(){
    vector<int>den={7,6,5,4,3,2,1};
    denq(den);
    for(int i=0;i<den.size();i++){
        cout<<den[i]<<" ";
    }
    
}


--------------------------------------------------
