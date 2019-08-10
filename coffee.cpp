#include<iostream>
using namespace std;
int main()
{
 int num;
 float per;
 int sum=0;
 cin>>num>>per;
 while(num!=0){
 sum=sum+num;
 num=num-num*(per/100);
 }
 cout<<sum<<endl;
 return 0;
}
