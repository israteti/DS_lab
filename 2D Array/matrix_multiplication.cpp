#include<iostream>
using namespace std;
int r1,c1,r2,c2;
int main(){
cout<<"enter row and column of matrix A"<<endl;
cin>>r1>>c1;

cout<<"enter row and column of matrix B"<<endl;
cin>>r2>>c2;
if(c1!=r2){
    cout<<"Not Possible";
}
else{

int matrix_A[r1][c1],matrix_B[r2][c2],matrix_C[r1][c2];

cout<<"Enter element of matrix A"<<endl;
for(int i=0;i<r1;i++){
    for(int j =0;j<c1;j++){

        cin>>matrix_A[i][j];
        
    }
}

cout<<"Enter element of matrix B"<<endl;
for(int i=0;i<r2;i++){
    for(int j =0;j<c2;j++){
        cin>>matrix_B[i][j];
        
    }
}

for(int i=0;i<r1;i++){
    for(int j =0;j<c2;j++){
        matrix_C[i][j]=0;        
    }
}


for(int i=0;i<r1;i++){
    for(int j =0;j<c2;j++){
        for(int k =0;k<c1;k++){
            matrix_C[i][j]+= matrix_A[i][k] *matrix_B[k][j];

        }     
    }
}
cout<<"matrix_C = ";

for(int i=0;i<r1;i++){
    for(int j =0;j<c2;j++){
        cout<<matrix_C[i][j]<<" ";        
    }
    cout<<endl;
}
}
return 0;
}