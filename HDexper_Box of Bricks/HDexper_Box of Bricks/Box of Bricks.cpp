#include<iostream>

using namespace std;

int main()
{
		int n,t=1;
		while (cin >> n)
		{
			if (0 == n)
				break;
			int b[50], sum = 0, arg, out = 0;
			for (int i = 0; i < n; i++)
			{
				cin >> b[i];
				sum += b[i];
			}
			arg = sum / n;
			for (int i = 0; i < n; i++)
			{
				if (b[i] > arg)
				{
					out += (b[i] - arg);
				}
			}
			cout << "Set #" << t << endl;
			t++;
			cout << "The minimum number of moves is " << out << endl;
		}
		return 0;
}
/*
#include<stdio.h>
int main()
{int t=1,n,i,sum,min;
while(scanf("%d",&n)!=EOF){int hi[50]={0};
if(n==0)break;
for(sum=i=0;i<n;i++){
scanf("%d",&hi[i]);
sum+=hi[i];
}
sum/=n;
for(min=i=0;i<n;i++)
if(hi[i]>sum)
min+=(hi[i]-sum);
else min+=(sum-hi[i]);
printf("Set #%d\n",t);
t++;
printf("The minimum number of moves is %d.\n\n",min/2);
}
return 0;
}
*/