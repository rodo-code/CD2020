#include <iostream>
#include <vector>
using namespace std;
// Colocar al lado izquierdo de cada n�mero negativo un cero
int main(){
    vector<int>v;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        int elemento = *it;
        if(elemento<0){
            it=v.insert(it,0);
            it++;
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}
