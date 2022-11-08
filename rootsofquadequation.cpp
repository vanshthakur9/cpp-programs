#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float a,b,c,r1,r2;
    cout<<"enter a,b,c"<<endl;
    cin>>a>>b>>c;
    r1=(-b+sqrt(b*b-4*a*c))/(2*a);
    r1=(-b-sqrt(b*b-4*a*c))/(2*a);
    cout<<"roots are"<<endl<<r1<<" "<<r2;
    return 0;

}