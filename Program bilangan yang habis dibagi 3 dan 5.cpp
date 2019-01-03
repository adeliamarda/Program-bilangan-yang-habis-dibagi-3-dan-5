#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"memeriksa suatu bilangan habis dibagi 5 dan 3"<<endl;
    cout<<"masukan suatu bilangan"<<endl;
    cin>>x;
    if(x%3==0 & x%5==0)
        cout<<"merupakan bilangan habis dibagi 5 dan 3"<<endl;
    else{
        cout<<"tidak habis dibagi 5 dan 3"<<endl;
    }
    return 0;
}
