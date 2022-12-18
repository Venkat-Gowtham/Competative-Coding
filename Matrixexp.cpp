#include<iostream>
using namespace std;
struct Matrix{
	int a[2][2];
	int b[1][2];
};
Matrix identity()
{
	Matrix id;
	id.a[0][0]=1, id.a[0][1]=0;
	id.a[1][0]=0, id.a[1][1]=1;
	return id;
}
Matrix mul(Matrix A,Matrix B)
{
	Matrix C;
	for(int row=0;row<2;row++)
	{
		for(int col=0;col<2;col++)
		{
			int s=0;
			for(int i=0;i<2;i++)
			{
				s+=A.a[row][i]*B.a[i][col];
			}
			C.a[row][col]=s;
		}
	}
	return C;
}
Matrix Matrixexp(Matrix A,int exp)
{
	if(exp==0) return identity();
	Matrix ans=Matrixexp(A,exp/2);
	if(exp%2==0)
	{
		return mul(ans,ans);
	}
	else
	{
		return mul(mul(ans,ans),A);
	}
}
Matrix multi(Matrix P,Matrix B)
{
	Matrix C;
		for(int col=0;col<2;col++)
		{
			int s=0;
			for(int i=0;i<2;i++)
			{
				s+=P.b[0][i]*B.a[i][col];
			}
			C.b[0][col]=s;
		}
	return C;
}
int main()
{
	int exp,x,y;
	cin>>exp;
	cin>>x;
	cin>>y;
	Matrix A;
	A.a[0][0]=1, A.a[0][1]=-1;
	A.a[1][0]=1, A.a[1][1]=2;
	Matrix B;
	B=Matrixexp(A,exp);
	cout<<"matrix with power of exp"<<endl;
	cout<<B.a[0][0]<<" "<<B.a[0][1]<<endl;
	cout<<B.a[1][0]<<" "<<B.a[1][1]<<endl;
	Matrix P;
	P.b[0][0]=x;
	P.b[0][1]=y;
	cout<<P.b[0][0]<<endl ;
	cout<<P.b[0][1]<<endl;
	Matrix res;
	res=multi(P,B);
	cout<<"result"<<endl;
	cout<<res.b[0][0]<<endl ;
	cout<<res.b[0][1];
	
	
}
