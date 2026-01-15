#include<iostream>
using namespace std;
/*
search for a value in a array
*/
int main()
{
//aray input
int n;
cout<<"enter number of element: ";
cin>>n;
int a[n];
cout<<"enter element:  ";
for(int i=0;i<n;i++){
    cin>>a[i];
}
int search;
cout<<"enter search value:";
cin>>search;

int not_found=1;
for( int i=0;i<n;i++){
    if(search==a[i])
    {
        not_found=0;
        cout<<search<<" "<<"is found at index"<<" "<<i <<endl;
        break;
    }
}

if(not_found){
    cout<<"not found!"<<endl;
}
    return 0;
}