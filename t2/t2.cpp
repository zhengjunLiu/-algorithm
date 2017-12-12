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

#pragma region 丑数
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
#pragma region 非递增序列最大和
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

#pragma region 背包问题
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
#pragma region 最大公共序列 
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

#pragma region 最大连续子序列 
//给定K个整数的序列{ N1, N2, ..., NK }，其任意连续子序列可表示为{ Ni, Ni+1, ...,
//Nj }，其中 1 <= i <= j <= K。最大连续子序列是所有连续子序列中元素和最大的一个，
//例如给定序列{ -2, 11, -4, 13, -5, -2 }，其最大连续子序列为{ 11, -4, 13 }，最大和
//为20。
//在今年的数据结构考卷中，要求编写程序得到最大和，现在增加一个要求，即还需要输出该
//子序列的第一个和最后一个元素。
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
#pragma region 钥匙计数二
//出发点：构造结果ans[n]=num[1]+……+num[6];其中num[i]表示以i为最后一个槽的高度；计算出num[i]，从而得出结果。
//
// 
//
//首先进行初始化分析，即n=3时。
//
//“相连的槽其深度之差不得为5”——1，6这两个高度不能相邻；而2，3，4，5这四个高度等价，且之后n=4，5，……25的计算过程中均有此规律。即num[1]=num[6]，num[2]=num[3]=num[4]=num[5]，在写代码时注意到这点便可以不需要用到数组；
//
//num[1]=num[6]=16;num[2,3,4,5]=18;
//
//ans[3]=104;
//
// 
//
//（下面是重点）
//
//再由n-1递推分析n的情况：
//
//1、当前面n-1个排列是钥匙的排列，则
//
//A、对2，3，4，5作为第n个高度来说都能满足题意，有num[2,3,4,5]=ans[n-1];
//
//B、对1，6（1，6等价，记号不同而已）来说，第n-1个高度不能为6，1，即要去掉
//
//几个不符合题意的组合；num[1]=ans[n-1]-num__[6](前n-1个中最后一个为6的个数，实际写代码时要用另一个数组保存)。同理 num[6]=ans[n-1]-num__[1](……)。也即num[1,6]=ans[n-1]-num__[6](……);
//
// 
//
//2、当前面n-1个排列不是钥匙的排列，则
//
//A、对i（i=2，3，4，5）作为第n个高度来说能满足钥匙的要求，则说明前面n-1个排列里仅有两类高度，且与i不同，加上i就刚好3类高度满足题意。那么前面两类高度的选法总数是从其余5类高度里选出两类，即C（5，2），但1，6不能同时选，故组合数为
//
//C（5，2）-1。 再看排列数，n-1个位置，每个位置可任选两类，但不能全部是同一类高度，故排列数2^(n-1)-2。
//
//B、对i=1，6，同上面分析。因为1，6等价，所以我这里举i=1来说，前面两类高度里我有两种取法，选6和不选6。
//
//对于选6，组合数是C（4，1）（剩下2，3，4，5任意选一）；再看排列数，每个位置可任选两类，但不能全部是同一高度，且最后一个也即第n-1个位置处不能为6，也可换个说法，最后一个位置放i（i=2，3，4，5），前面n-2个位置任选6和i放，排列数4×（2^(n-2)-1）。前面不能全是和后面n-1的位置同一高度
//
//对于不选6，组合数是C（4，2）；再看排列数，每个位置可任选两类，且不能全部是同一类高度，排列数2^(n-1)-2。
//
// 
//
//把上面的组合数与排列数相乘便得到一种情况下的num[i]的值，所有情况的值相加便得到结果。
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
 #pragma region 钥匙计数
//a[i]表示长度为i的合法的钥匙总数。
//b[i]表示第i个槽为1或4时合法的长度为i的合法的钥匙总数。
//c[i]表示:不合法的长度为i-1的钥匙X + 最后一个新槽1/4（1或者4的槽）,能够构成合法的长度为i的钥匙时，不合法的长度为i-1的钥匙X的方案数
//
//1、合法的长度为i-1的钥匙 + 任何1个新的槽，所构成的长度为i的钥匙一定是合法的，所以a[i]=a[i-1]*4
//。
//2、若不合法的长度为i-1的钥匙X + 最后一个新槽2/3（2或者3的槽），要构成合法的长度为i的钥匙，则X必定由1/4（1或者4的槽）的组合构成序列（原因在于后缀2或者3加上就成为钥匙的话，必然是没满足需要3个不同深度槽这一项，故X必然由1/4组成），但需要去除2种情况111....1111(全为1),444....444（全为4），所以
//a[I]+=(2^(I-1)-2)*2（为什么是它，因为前i-1个槽均可以是1或4，有这么多种组合方式，减去上述两种特殊情况，即这两种特殊情况下，最后一个新槽为2/3时仍不能构成合法的长度为i的钥匙。之所以乘2，是因为最后一个新槽可以是2，也可以是3）。
//
//3、若不合法的长度为i-1的钥匙X + 最后一个新槽1/4（1或者4的槽）,要构成合法的长度为i的钥匙,设：x=Y(1/4) 即 长度为i-1的钥匙x=长度为i-2的钥匙y+第i-1个槽为1/4(1或者4的槽)
//则要在不合法的长度为i-1的钥匙X加上最后1个新槽1/4（1或者4的槽）成为一个合法的长度为i的钥匙，
//当且仅当第i-1位的槽是4/1时，加上第i位的1/4槽，才能满足。
//（因为不合法的长度为i-1的钥匙X ，要么就不满足具有3个不同的槽，或不满足至少有1对相连的槽其深度之差为3，或同时不满足。要在加上最后1个新槽1/4（1或者4的槽）后成为长度为i的合法的钥匙，只可能是
//A、前i-2位是1,2,3,4四种槽的任意组合+第i-1位的4+第i位的1
//B、前i-2位是1,2,3,4四种槽的任意组合+第i-1位的1+第i位的4
//C、在前两种组合中去掉下面两种情况--无法构成合法的长度为i的钥匙：
//   前i-2位是1,4两种槽的任意组合+第i-1位的4+第i位的1
//   前i-2位是1,4两种槽的任意组合+第i-1位的1+第i位的4
//D、在前两种组合中去掉下面这种情况:
//   因为在A情况下，“前i-2位是1,2,3,4四种槽的任意组合+第i-1位的4”包含了长度为i-1的，第i-1位为4的合法的长度为i-1的钥匙X
//   在B的情况下“前i-2位是1,2,3,4四种槽的任意组合+第i-1位的1”包含了长度为i-1的，第i-1位为1的合法的长度为i-1的钥匙X
//   但第3类的前提是“不合法的长度为i-1的钥匙X”，两者矛盾。因此，要减去第i-1个槽为1或4时合法的长度为i-1的合法的钥匙总数 即b[i-1] 
// ）
//故第3类中，c[i]==(4^(i-2)-2^(i-2))* 2 - b[i-1];
//  所以a[i]+=c[i]
//
//4、修正b[i]
//   b[i]表示第i个槽为1或4时合法的长度为i的合法的钥匙总数。
//   在求得a[i-1]后可知长度为i-1的合法的钥匙总数。每种方案中增加第i位的1/4槽（1或者4的槽），总是b[i]中数据的一部分。即2*a[i-1]
//   在求得c[i]后可知长度为i-1的不合法的钥匙 + 第i位的1/4槽（1或者4的槽）所能构成的合法的长度为i的第i位为1/4槽的钥匙总数，也是b[i]中数据的一部分。即c[i]
//   故b[i]=2*a[i-1]+c[i]
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
 #pragma region  骨牌铺方格 
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
 #pragma region  LELE的RPG难题 
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