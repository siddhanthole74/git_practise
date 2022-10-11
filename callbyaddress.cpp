#include <iostream>
using namespace std;

void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int main()
{
    int a, b;
    cout << "\n enter value of a and b =";
    cin >> a >> b;
    swap(&a,&b);
    cout << "\n a=" << a<<"\n b="<<b;
    return 0;
}