#include <iostream>
using namespace std;
int main(){
    printf("pham truong");
    int a,b,c;
    do
    {
    cout<<"nhập 3 giá trị ";
    cin>>a>>b>>c;
    } while(a==b||a==c||b==c);
    if(a>b&&a>c)
        cout<<"a là số lớn nhất";
    else
        if(b>c&&b>a)
            cout<<"b là số lớn nhất";
        else 
            cout<<" c là số lớn nhất";    

    printf("\nAnh yêu em ");
}