#include<bits/stdc++.h>
using namespace std;

void additems(map<string,int>&shop){
    shop.insert({"Apple",25});
    shop.insert({"Banana",10});
    shop.insert({"Mango",20});
    shop.insert({"Strawberry",35});
    shop.insert({"Pineapple",40});
    shop.insert({"Guava",15});
    
}

int main(){
    map<string ,int>shop;
    additems(shop);
    map<string ,int>cart;
   int cost=0;


    while(1){
        cout<<"select option - (a)add items , (v)view cart , (c)checkout"<<endl;
        char action;
        cin>>action;
        
        
        if(action=='a'){
            for(auto i:shop){
                cout<<i.first<<"    Rs."<<i.second<<endl;
            }string item;cout<<endl;
            cout<<"select item :";cin>>item;
            cart[item]++;cost+=shop[item];
            cout<<item<<" is added in your cart"<<endl<<endl;
        }
        
        
        if(action=='v'){
            cout<<"Items in the cart "<<endl;
           // cout<<" items           pieces"<<endl;
            int s=1;
            for(auto i:cart){
                cout<<s<<"."<<i.first<<"s     ("<<i.second<<" piece)"<<endl;
                s++;
            }
            cout<<endl;
        }
        
        if(action=='c'){
            cout<<"Selected item and its total bill"<<endl;
            int s=1;
            for(auto i:cart){
                cout<<s<<"."<<i.first<<"s     ("<<i.second<<" piece)"<<endl;s++;
            }cout<<endl;
            cout<<"Total bill :"<<cost;
            break;
        }
        cout<<"________________________________________________________________"<<endl;
    }
    
}
