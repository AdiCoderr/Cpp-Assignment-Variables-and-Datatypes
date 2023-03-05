#include<iostream>
using namespace std;
int main()
{
    char c;
    short sh;
    int i;
    long l;
    long long l_l;
    float f;
    double db;
    long double ld;
    bool b;
    cout<<"The sizeof(char): "<<sizeof(c)<<endl;
    cout<<"The sizeof(short): "<<sizeof(sh)<<endl;
    cout<<"The sizeof(int): "<<sizeof(i)<<endl;
    cout<<"The sizeof(long): "<<sizeof(l)<<endl;
    cout<<"The sizeof(long long): "<<sizeof(l_l)<<endl;
    cout<<"The sizeof(float): "<<sizeof(f)<<endl;
    cout<<"The sizeof(double): "<<sizeof(db)<<endl;
    cout<<"The sizeof(long double): "<<sizeof(ld)<<endl;
    cout<<"The sizeof(bool): "<<sizeof(b)<<endl;
    return 0;
}