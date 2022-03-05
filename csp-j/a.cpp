#include <iostream>
using namespace std;

int main(){
    int a;
    char b;
    cin>>a>>b;
    if(a <= 1000){
        cout<<"8";//如果他小于1000克直接返回基础价
        return 0;
    }
    int x = 0;
    int sum;
    int q;
    if(a > 1000){
        x = a - 1000;
        sum = x/500+1;
        q = sum*4+8;
    }
    if(b == 'y'){
        cout<<sum*4+8+5;
        return 0;
    }
    if(b == 'n')
    {
        cout<<q;
        return 0;
    }
}