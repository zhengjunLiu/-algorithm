#include <iostream>
#include<stdio.h>  
#include <cstdio>  
#include <algorithm>  
#include<cmath>  
#include <iomanip>
using namespace std;   
double a[10001];   
bool check(double x,int n,int k)  
{  
    int sum=0;  
    for(int i=0; i<n; i++)  
        sum=sum+a[i]/x;  
    if(sum>=k)
        return true;  
    return false;  
}  
int main()  
{  
    int n,k;
	bool c;
	cin>>n;
	cin>>k;
	double l=0,mid;  
    for(int i=0; i<n; i++)  
        cin>>a[i]; 
    sort(a,a+n); 
	double r=a[n-1];
	bool j=true;
    while(r-l>= 1e-5)  
    {  
        mid=(l+r)/2.0;  
        c=check(mid,n,k);  
        if(c)  
        {  
    
			l = mid;
			j=false;
        }  
        else  
            r=mid;  
    }  

	if(j==false)
	 {
		 r = r * 100; 
		 int yy = r; 
		 printf("%.2lf\n",yy * 0.01); 
	 }
	 else
	 {
		 cout<<0.00<<endl;
	 }
	return 0;
}  


 #pragma region 
//double df(double x)
//{
//	double z;
//	z= 42*pow(x,6)+48*pow(x,5)+21*x*x+10*x;  
//	return z;
//}  
//double f(double x,double y)  
//{  
//    return 6*pow(x,7)+8*pow(x,6)+7*pow(x,3)+5*x*x-y*x;  
//}  
//int main()  
//{   int T;	
//	double y; 
//   cin>>T;  
//   while(T>0)
//   {  
//		cin>>y;  
//			double l=0,L=100;  
//			double m=0; 
//			while(L-l>=eps)
//				{  
//					m=(L+l)/2;  
//					if(df(m)>y) 
//						L=m;
//					else 
//						l=m;  
//				 } 
//				
//			     double sum =f(m,y);
//				   printf("%.4lf\n",sum);  
//				   T--;
//          		
//   }  
//    return 0;  
//}  
#pragma endregion 
#pragma region 
//int a[2001];
//int dp[2001][1001];  
//int main()
//{
//	int n,k;
//	int d=0;
//	dp[0][0] = 0;
//	while(cin>>n>>k)
//		{
//		
//		int i, j;  
//        a[0] = dp[0][0] = 0;  
//        for(i = 0; i < n; i++)  
//            cin>>a[i];  
//        sort(a,a+n);  
//        for(i = 0; i <= n; i++)  
//            {
//				for(j = 0; j <= k; j++)  
//					{
//						dp[i][j] =999999999;
//					}
//			}
//        for(i = 0; i <= n; i++)  
//            dp[i][0] = 0;
//  
//        for(i = 2; i <= n; i++)  
//        {    for(j = 1; j*2 <= i; j++)  
//                {
//					dp[i][j] = min(dp[i-2][j-1]+(a[i-1]-a[i-2])*(a[i-1]-a[i-2]), dp[i-1][j]);  
//				}
//		}
//         cout<<dp[n][k]<<endl;
//	}
//}
#pragma endregion 

#pragma region ����
//#include <iostream>
//#include <string>
//using namespace std;
//int n[5843];
//int Min(int a,int b,int c,int d)
// {
//    int t;
//    t = a<b?a:b;
//	t = t<c?t:c;
//    t = t<d?t:d;
//     return t;
// }
//void inti()
//{
//		n[1] = 1;
//     int a1=1,a2=1,a3=1,a4=1;
//     int e1,e2,e3,e4;
//     for(int i=2;i<5843;i++){
//         e1 = n[a1]*2;
//		 e2 = n[a2]*3;
//         e3 = n[a3]*5;
//         e4 = n[a4]*7;
//        n[i] = Min(e1,e2,e3,e4);
//         if(n[i]==e1)
//            a1++;
//         if(n[i]==e2)
//             a2++;
//         if(n[i]==e3)
//            a3++;
//        if(n[i]==e4)
//			a4++;
//     }
//}
//int main(){
//
//	int i;	
//	inti();
//	while(cin>>i)
//	{
//		if(i<=0)break;
//		  if(i%100==11 || i%100==12 || i%100==13)
//           cout<<"The "<<i<<"th humble number is "<<n[i]<<'.'<<endl;
//       else {
//            int t = i%10;
//            switch(t)
//				{
//					case 0:cout<<"The "<<i<<"th humble number is "<<n[i]<<'.'<<endl;break;
//				    case 1:cout<<"The "<<i<<"st humble number is "<<n[i]<<'.'<<endl;break;
//					case 2:cout<<"The "<<i<<"nd humble number is "<<n[i]<<'.'<<endl;break;
//					case 3:cout<<"The "<<i<<"rd humble number is "<<n[i]<<'.'<<endl;break;
//					default:cout<<"The "<<i<<"th humble number is "<<n[i]<<'.'<<endl;break;
//				}
//			}
//
//	}
//}
#pragma endregion 
#pragma region �ǵ�����������
//int MaxSum(int *a,int n)
//{
// int i,j,maxsum;
// for(i=0;i<n;i++)
//  b[i]=a[i];
// maxsum=b[0];
// for(i=1;i<n;i++)
//  for(j=0;j<i;j++)
//  {
//   if(a[i]>a[j]&&b[i]<b[j]+a[i])
//    b[i]=b[j]+a[i];
//   if(maxsum<b[i])
//    maxsum=b[i];
//  }
// return maxsum;
//}
//
//int main()
//{
// int n,idx;
// 
// while(cin>>n)
// {
//	 if(n<=0)break;
//	  for(idx=0;idx<n;idx++)
//	   cin>>a[idx];
//	  cout<<MaxSum(a,n)<<endl;
//  
// }
// return 0;
//}
#pragma endregion 

#pragma region ��������
	//http://www.cnblogs.com/Christal-R/p/Dynamic_programming.html
	//int n,i,j,g,v;
	//int m=0;
	//LL a[1001],f[1001] ,b[1001];

	//cin>>n;
	//while(m<n) 
	//{	
	//	cin>>g;
	//	cin>>v;
	//	
	//	for(i=0;i<1001;i++)f[i]=0;
	//	for(i=0;i<1001;i++)a[i]=0;
	//	for(i=0;i<1001;i++)b[i]=0;
	//	for(i=0;i<g;i++)
	//		{
	//		  cin>>a[i];		
	//		}
	//	for(i=0;i<g;i++)
	//		{
	//		  cin>>b[i];		
	//		}
	//	for(i=0;i<g;i++)
	//		{
	//	
	//			for(j=v;j>=0;j--)
	//			{			
	//			
	//						if(j>=b[i])
	//						{
	//							if(f[j]<(f[j-b[i]]+a[i]))
	//								f[j]=f[j-b[i]]+a[i];
	//							else
	//								f[j]=f[j];
	//						}
	//						
	//			}
	//	
	//		}
 //       m++;
	//	cout<<f[v]<<endl;
	//	/*for(i=1;i<g;i++)
	//	{
	//		
	//		for(j=1;j<=v;j++)
	//		{			
	//			if(j<b[i])
	//				f[i*(v+1)+j]=f[(i-1)*(v+1)+j];
	//			
	//			else
	//				{
	//					if((f[(i-1)*(v+1)+j-b[i]]+a[i])>f[(i-1)*(v+1)+j])						
	//						{
 //                          f[i*(v+1)+j]=f[(i-1)*(v+1)+j-b[i]]+a[i];
	//					cout<<i<<","<<j<<": "<<f[i*(v+1)+j]<<endl;
	//					}
	//					else
	//						{
	//							f[i*(v+1)+j]=f[(i-1)*(v+1)+j];
	//					 cout<<i<<","<<j<<": "<<f[i*(v+1)+j]<<endl;
	//					}

	//				}	
	//			
	//		}
	//	
	//	}*/

	//	
	//}
#pragma endregion  
#pragma region ��󹫹����� 
//LL MaxSum[10010];
//
//int main()
//{
//	string a,b;
//	while(cin>>a) 
//	{	
//		cin>>b;
//	int c[100][100]={};
//	int i,j;
//	//cout<<a.length()<<endl;
//	for(i=1;i<=a.length();i++)
//	{
//		for(j=1;j<=b.length();j++)
//		{
//			if(a[i-1]==b[j-1])
//			{
//				c[i][j]=c[i-1][j-1]+1;
//			}
//			else
//
//			{
//				if(c[i][j-1]>=c[i-1][j])
//				{
//                   c[i][j]=c[i][j-1];
//				}
//				else
//				{
//					 c[i][j]=c[i-1][j];
//				}
//			}
//		}
//	}
//	for(i = 0 ; i <= a.length(); i++)
//     {
//		 for( j = 0; j <= b.length(); j++)
//        {
//            cout << c[i][j] << "  ";
//        }
//        cout << endl;
//     }
//	cout<<c[a.length()][b.length()]<<endl;
//
//	}
//	
//	
//}
#pragma  endregion 

#pragma region ������������� 
//����K������������{ N1, N2, ..., NK }�����������������пɱ�ʾΪ{ Ni, Ni+1, ...,
//Nj }������ 1 <= i <= j <= K���������������������������������Ԫ�غ�����һ����
//�����������{ -2, 11, -4, 13, -5, -2 }�����������������Ϊ{ 11, -4, 13 }������
//Ϊ20��
//�ڽ�������ݽṹ�����У�Ҫ���д����õ����ͣ���������һ��Ҫ�󣬼�����Ҫ�����
//�����еĵ�һ�������һ��Ԫ�ء�
//int Startnum[10010];
//int Endnum[10010];
//int MaxNumb(LL a[],int n)
//{
//	MaxSum[0]=a[0];
//	Startnum[0]=0;
//	Endnum[0]=0;
//	int i,j;
//	LL max=0;
//	for(i=1;i<n;i++)
//	{
//		if((MaxSum[i-1]+a[i])>=a[i])
//		{
//			MaxSum[i]=MaxSum[i-1]+a[i];
//			Startnum[i]=Startnum[i-1];
//			Endnum[i]=i;
//
//		}
//		else
//		{
//          MaxSum[i]=a[i];
//
//		  Startnum[i]=i;
//		  Endnum[i]=i;
//		}
//	}
//	int t=0;
//	for(j=0;j<n;j++)
//	{
//		if(max<MaxSum[j])
//		{
//			max=MaxSum[j];
//			t=j;
//			
//		}
//		else if(max==MaxSum[j])
//		{
//			if(MaxSum[j]==0)
//				{
//					t=j;
//			    }
//
//		}
//
//	}
//	return t;
//}
//int main()
//{
//	int n;
//	int b;
//	int k=0;
//	int p=0;
//	LL c[10010];
//	while(cin>>n)
//	{
//		if(n==0)break;
//		for(k=0;k<n;k++)
//		{
//			cin>>c[k];
//		}
//      b=MaxNumb(c,n);
//	  if(MaxSum[b]<0)
//	  {
//		  cout<<"0"<<" "<<c[0]<<" "<<c[n-1]<<endl;
//	  }
//	  else
//	  {
//		  cout<<MaxSum[b]<<" "<<c[Startnum[b]]<<" "<<c[Endnum[b]]<<endl;
//	  }
//	
//	}
//	return 0;
//}
#pragma endregion 
#pragma region Կ�׼�����
//�����㣺������ans[n]=num[1]+����+num[6];����num[i]��ʾ��iΪ���һ���۵ĸ߶ȣ������num[i]���Ӷ��ó������
//
// 
//
//���Ƚ��г�ʼ����������n=3ʱ��
//
//�������Ĳ������֮���Ϊ5������1��6�������߶Ȳ������ڣ���2��3��4��5���ĸ��߶ȵȼۣ���֮��n=4��5������25�ļ�������о��д˹��ɡ���num[1]=num[6]��num[2]=num[3]=num[4]=num[5]����д����ʱע�⵽������Բ���Ҫ�õ����飻
//
//num[1]=num[6]=16;num[2,3,4,5]=18;
//
//ans[3]=104;
//
// 
//
//���������ص㣩
//
//����n-1���Ʒ���n�������
//
//1����ǰ��n-1��������Կ�׵����У���
//
//A����2��3��4��5��Ϊ��n���߶���˵�����������⣬��num[2,3,4,5]=ans[n-1];
//
//B����1��6��1��6�ȼۣ��ǺŲ�ͬ���ѣ���˵����n-1���߶Ȳ���Ϊ6��1����Ҫȥ��
//
//�����������������ϣ�num[1]=ans[n-1]-num__[6](ǰn-1�������һ��Ϊ6�ĸ�����ʵ��д����ʱҪ����һ�����鱣��)��ͬ�� num[6]=ans[n-1]-num__[1](����)��Ҳ��num[1,6]=ans[n-1]-num__[6](����);
//
// 
//
//2����ǰ��n-1�����в���Կ�׵����У���
//
//A����i��i=2��3��4��5����Ϊ��n���߶���˵������Կ�׵�Ҫ����˵��ǰ��n-1���������������߶ȣ�����i��ͬ������i�͸պ�3��߶��������⡣��ôǰ������߶ȵ�ѡ�������Ǵ�����5��߶���ѡ�����࣬��C��5��2������1��6����ͬʱѡ���������Ϊ
//
//C��5��2��-1�� �ٿ���������n-1��λ�ã�ÿ��λ�ÿ���ѡ���࣬������ȫ����ͬһ��߶ȣ���������2^(n-1)-2��
//
//B����i=1��6��ͬ�����������Ϊ1��6�ȼۣ������������i=1��˵��ǰ������߶�����������ȡ����ѡ6�Ͳ�ѡ6��
//
//����ѡ6���������C��4��1����ʣ��2��3��4��5����ѡһ�����ٿ���������ÿ��λ�ÿ���ѡ���࣬������ȫ����ͬһ�߶ȣ������һ��Ҳ����n-1��λ�ô�����Ϊ6��Ҳ�ɻ���˵�������һ��λ�÷�i��i=2��3��4��5����ǰ��n-2��λ����ѡ6��i�ţ�������4����2^(n-2)-1����ǰ�治��ȫ�Ǻͺ���n-1��λ��ͬһ�߶�
//
//���ڲ�ѡ6���������C��4��2�����ٿ���������ÿ��λ�ÿ���ѡ���࣬�Ҳ���ȫ����ͬһ��߶ȣ�������2^(n-1)-2��
//
// 
//
//����������������������˱�õ�һ������µ�num[i]��ֵ�����������ֵ��ӱ�õ������
//__int64 num[3],ans[26],t=16;
//	int i;
//	ans[3]=104;
//	for(i=4;i<=25;i++)
//	{
//		num[1]=ans[i-1];
//		num[2]=ans[i-1]-t;
//		num[1]+=9*((__int64)pow(2,i-1)-2);
//		num[2]+=4*((__int64)pow(2,i-2)-1)+6*((__int64)pow(2,i-1)-2);
//		ans[i]=4*num[1]+2*num[2];
//		t=num[2];
//	}
//	for(i=3;i<=25;i++)
//	{
//		printf("N=%d: %I64d\n",i,ans[i]);
//	}
	
//# define LL long long  
//LL a[27],b[27];
//void ShowLine()
//{ 
//	int i;
//	a[3]=104;
//    b[3]=16;
//	for(i=4;i<26;i++)
//	{
//	 
//	 a[i]=4*(a[i-1]+9*((LL)pow((double)2,i-1)-2));
//	 b[i]=a[i-1]-b[i-1]+4*((LL)pow((double)2,i-2)-1)+6*((LL)pow((double)2,i-1)-2);
//	 a[i]=a[i]+2*b[i];
//	
//	}
//}
//int main()
//{
//	ShowLine();
//	int j;
//	for(j=3;j<26;j++)
//	{
//		cout<<"N="<<j<<": "<<a[j]<<endl;
//	}
//	//cout<<"N="<<31<<": "<<a[31];
//}
#pragma endregion 
 #pragma region Կ�׼���
//a[i]��ʾ����Ϊi�ĺϷ���Կ��������
//b[i]��ʾ��i����Ϊ1��4ʱ�Ϸ��ĳ���Ϊi�ĺϷ���Կ��������
//c[i]��ʾ:���Ϸ��ĳ���Ϊi-1��Կ��X + ���һ���²�1/4��1����4�Ĳۣ�,�ܹ����ɺϷ��ĳ���Ϊi��Կ��ʱ�����Ϸ��ĳ���Ϊi-1��Կ��X�ķ�����
//
//1���Ϸ��ĳ���Ϊi-1��Կ�� + �κ�1���µĲۣ������ɵĳ���Ϊi��Կ��һ���ǺϷ��ģ�����a[i]=a[i-1]*4
//��
//2�������Ϸ��ĳ���Ϊi-1��Կ��X + ���һ���²�2/3��2����3�Ĳۣ���Ҫ���ɺϷ��ĳ���Ϊi��Կ�ף���X�ض���1/4��1����4�Ĳۣ�����Ϲ������У�ԭ�����ں�׺2����3���Ͼͳ�ΪԿ�׵Ļ�����Ȼ��û������Ҫ3����ͬ��Ȳ���һ���X��Ȼ��1/4��ɣ�������Ҫȥ��2�����111....1111(ȫΪ1),444....444��ȫΪ4��������
//a[I]+=(2^(I-1)-2)*2��Ϊʲô��������Ϊǰi-1���۾�������1��4������ô������Ϸ�ʽ����ȥ���������������������������������£����һ���²�Ϊ2/3ʱ�Բ��ܹ��ɺϷ��ĳ���Ϊi��Կ�ס�֮���Գ�2������Ϊ���һ���²ۿ�����2��Ҳ������3����
//
//3�������Ϸ��ĳ���Ϊi-1��Կ��X + ���һ���²�1/4��1����4�Ĳۣ�,Ҫ���ɺϷ��ĳ���Ϊi��Կ��,�裺x=Y(1/4) �� ����Ϊi-1��Կ��x=����Ϊi-2��Կ��y+��i-1����Ϊ1/4(1����4�Ĳ�)
//��Ҫ�ڲ��Ϸ��ĳ���Ϊi-1��Կ��X�������1���²�1/4��1����4�Ĳۣ���Ϊһ���Ϸ��ĳ���Ϊi��Կ�ף�
//���ҽ�����i-1λ�Ĳ���4/1ʱ�����ϵ�iλ��1/4�ۣ��������㡣
//����Ϊ���Ϸ��ĳ���Ϊi-1��Կ��X ��Ҫô�Ͳ��������3����ͬ�Ĳۣ�������������1�������Ĳ������֮��Ϊ3����ͬʱ�����㡣Ҫ�ڼ������1���²�1/4��1����4�Ĳۣ����Ϊ����Ϊi�ĺϷ���Կ�ף�ֻ������
//A��ǰi-2λ��1,2,3,4���ֲ۵��������+��i-1λ��4+��iλ��1
//B��ǰi-2λ��1,2,3,4���ֲ۵��������+��i-1λ��1+��iλ��4
//C����ǰ���������ȥ�������������--�޷����ɺϷ��ĳ���Ϊi��Կ�ף�
//   ǰi-2λ��1,4���ֲ۵��������+��i-1λ��4+��iλ��1
//   ǰi-2λ��1,4���ֲ۵��������+��i-1λ��1+��iλ��4
//D����ǰ���������ȥ�������������:
//   ��Ϊ��A����£���ǰi-2λ��1,2,3,4���ֲ۵��������+��i-1λ��4�������˳���Ϊi-1�ģ���i-1λΪ4�ĺϷ��ĳ���Ϊi-1��Կ��X
//   ��B������¡�ǰi-2λ��1,2,3,4���ֲ۵��������+��i-1λ��1�������˳���Ϊi-1�ģ���i-1λΪ1�ĺϷ��ĳ���Ϊi-1��Կ��X
//   ����3���ǰ���ǡ����Ϸ��ĳ���Ϊi-1��Կ��X��������ì�ܡ���ˣ�Ҫ��ȥ��i-1����Ϊ1��4ʱ�Ϸ��ĳ���Ϊi-1�ĺϷ���Կ������ ��b[i-1] 
// ��
//�ʵ�3���У�c[i]==(4^(i-2)-2^(i-2))* 2 - b[i-1];
//  ����a[i]+=c[i]
//
//4������b[i]
//   b[i]��ʾ��i����Ϊ1��4ʱ�Ϸ��ĳ���Ϊi�ĺϷ���Կ��������
//   �����a[i-1]���֪����Ϊi-1�ĺϷ���Կ��������ÿ�ַ��������ӵ�iλ��1/4�ۣ�1����4�Ĳۣ�������b[i]�����ݵ�һ���֡���2*a[i-1]
//   �����c[i]���֪����Ϊi-1�Ĳ��Ϸ���Կ�� + ��iλ��1/4�ۣ�1����4�Ĳۣ����ܹ��ɵĺϷ��ĳ���Ϊi�ĵ�iλΪ1/4�۵�Կ��������Ҳ��b[i]�����ݵ�һ���֡���c[i]
//   ��b[i]=2*a[i-1]+c[i]
//# define LL long long  
//LL a[50],b[50],c[50];
//void ShowLine()
//{ 
//	int i;
//	a[2] = 0;  
//    a[3] = 8;  
//    b[2] = 0;  
//    b[3] = 4;  
//	for(i=4;i<32;i++)
//	{
//		
//	 a[i]=4*a[i-1]+(LL)pow((double)2,i)-4;
//	 c[i]=( ((LL)pow ((double)4,i-2) - (LL)pow ((double)2, i - 2)) * 2 - b[i - 1]);
//	 a[i]=a[i]+c[i];
//	 b[i]=(LL)(2*a[i-1]+c[i]);
//	}
//}
//int main()
//{
//	ShowLine();
//	int j;
//	for(j=2;j<32;j++)
//	{
//		cout<<"N="<<j<<": "<<a[j]<<endl;
//	}
//	//cout<<"N="<<31<<": "<<a[31];
//}
 #pragma endregion  
 #pragma region  �����̷��� 
//# define LL long long  
//LL a[51];
//void ShowStruct()
//{ 
//	int i;
//	a[1]=1;
//	a[2]=2;
//	a[3]=3;
//	for(i=4;i<51;i++)
//	{
//		a[i]=a[i-1]+a[i-2];
//	}
//}
//int main()
//{
//	int n;
//	 ShowStruct();
//	while(cin>>n)
//	{
//		cout <<a[n]<<endl;
//
//	}
//	
//	return 0;
//}
 #pragma endregion
 #pragma region  LELE��RPG���� 
//# define LL long long  
//LL a[51];
//void ShowColor()
//{ 
//	int i;
//	a[1]=3;
//	a[2]=6;
//	a[3]=6;
//	for(i=4;i<51;i++)
//	{
//		a[i]=a[i-1]+2*a[i-2];
//	}
//}
//int main()
//{
//	int n;
//	 ShowColor();
//	while(cin>>n)
//	{
//		cout <<a[n]<<endl;
//
//	}
//	
//	return 0;
//}

#pragma endregion 