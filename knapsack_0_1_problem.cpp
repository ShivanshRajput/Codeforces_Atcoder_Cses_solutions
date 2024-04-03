#include<iostream>
// #include<algorithm>
using namespace std;
int n,cap,w[10],p[10],v[10][10],i,j,x[10]={0};

int knap(int i,int j)
{
	int value;
	if (v[i][j]<0)
	{
		if(j<w[i])
		value=knap(i-1,j);
		else
		value=max(knap(i-1,j),knap(i-1,j-w[i])+p[i]);
		v[i][j]=value;
	}
	return(v[i][j]);
}

int main()
{
	int profit,count=0;
	cout<<"Enter the number of objects ";
	cin>>n;
	cout<<"Enter the profit and weights of the elements\n\n";
	for(i=1;i<=n;i++)
	{
		cout<<"Enter the profit and weight For the object no "<<i<<":";
		cin>>p[i]>>w[i];
	}
	cout<<"Enter the capacity ";
	cin>>cap;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=cap;j++)
		{
			if(i==0||j==0)
			v[i][j]=0;
			else
			v[i][j]=-1;
		}
	}
	profit=knap(n,cap);
	i=n;
	j=cap;
	while(i!=0&&j!=0)
	{
		if(v[i][j]==v[i-1][j])
		i--;
		else
		{
			x[i]=1;
			j=j-w[i];
			i--;
		}
	}
	cout<<"Objects Included Are "<<endl;
	cout<<"Sl.no\tweight\tprofit\n";
	for(i=1;i<=n;i++)
	{
		if(x[i])
		cout<<++count<<"\t"<<w[i]<<"\t"<<p[i]<<endl;
	}
	cout<<"Total Profit = "<<profit;
	return 0;
}


