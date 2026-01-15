#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter a string";
    cin>> str;
    getline(cin,str);
    cout<<str<<endl;
    return 0;
}