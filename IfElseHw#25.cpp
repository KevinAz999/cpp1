#include <iostream>

using namespace std;

int main() {
    double n,r,h,y,u,p;
    
    cout<<"Type 1 for area of circle, 2 for area of a regtangle, 3 to find the third angle of a triangle: ";
    cin>>n;
    
    if(n == 1){
        cout<<"Enter the radius: ";
        cin>>r;
        cout<<"The area of this circle is "<<(r*r)*3.14<<".";
    }else if(n == 2){
        cout<<"Enter the length of the regtangle: ";
        cin>>h;
        cout<<"Enter the width of the regtangle: ";
        cin>>y;
        cout<<"The area of this regtangle is "<<h*y<<".";
    }else if(n == 3){
        cout<<"Enter First angle";
        cin>>u;
        cout<<"Enter second angle";
        cin>>p;
        cout<<"The third angle is "<<(u+p)-180;
    }else{
        cout<<"Is this a number 1,2, or 3";
    }
    
    
    
    return 0;
}
