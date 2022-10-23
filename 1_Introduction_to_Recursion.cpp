#include <bits/stdc++.h>
using namespace std;
void rcn(int n)  // example of recurtion with base case
{
    if(n>=4) return;  // if we have not specify this base condition then function will go in infinite recurtion and segmetion fault will occure.
    cout<<"n = "<<n<<endl;
    n++;
    rcn(n);
}
int main()
{
    // Recursion is Calling function itself until specific condition is met.
    //  if specific condition is not mentioned then program goes in infinite recursion and at the end stack overfow oc cures.
    //  we got segmentation fault if we not specify any condition.
    rcn(0);
    return 0;
}