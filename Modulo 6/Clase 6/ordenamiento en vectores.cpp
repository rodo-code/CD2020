#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int>v;
    v.push_back(8);
    v.push_back(-1);
    v.push_back(2);
    v.push_back(5);
    v.push_back(3);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // Ordenamiento creciente
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // Ordenamiento decreciente
    sort(v.rbegin(),v.rend());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}
