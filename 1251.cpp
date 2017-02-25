#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
 
using namespace std;
 
struct valores{
    int valor;
    int qtd;
};
 
bool compara(valores a, valores b){
    if(a.qtd == b.qtd){

    return a.valor > b.valor;

    }
    return a.qtd < b.qtd;
}

string str;
 
int main(){
    bool flag = false;

    while(getline(cin, str)){     
        if (flag)
            cout << endl;

             map<int, valores> m;
 
        for(int a = 0; a <str.size(); a++){
            m[str[a]].qtd++;
            m[str[a]].valor=str[a];
        }   
                
        vector<valores> v;
        for(map<int, valores>::iterator it=m.begin(); it!=m.end(); it++){
            v.push_back(it->second);    
        }
         
        sort(v.begin(), v.end(), compara);
         
        for(int a=0; a<v.size(); a++){
            cout<<v[a].valor<<" "<<v[a].qtd<<endl;
        }
         
        flag=true;
             
    }
 
    return 0;
}