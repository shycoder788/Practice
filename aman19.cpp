/*
#include<iostream>
using namespace std;
 int sum(int,int);
int main(){
    int a,b;
    cout<<"enter the number";
    cin>>a;
    cout<<"enter the number";
    cin>>b;
    cout<<sum(a,b);   
    
  
}
int sum(int a,int b){
    return a==b?(a+b)*3:a+b;
}
#include<iostream>
using namespace std;
 int diffr(int);
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    cout<<diffr(n);   
    
  
}
int diffr(int n){
    if(n>51)
    return (n-51)*3;
    else
    return n-51;
}

#include<iostream>
using namespace std;
int check(int,int);
int main(){
    int a,b;
    cout<<"enter the number";
    cin>>a;
    cout<<"enter the number";
    cin>>b;
    cout<<check(a,b);    
}
int check(int a,int b)
{
return a==30||b==30||(a+b==30);
}

#include<iostream>
using namespace std;
int within(int);
int main(){
    int a;
    cout<<"enter the number";
    cin>>a;
    cout<<within(a);
  
}
int within(int a)
{
return a-100<=10||a-200<=10;
}

#include<iostream>
using namespace std;
int multiple(int);
int main(){
    int a;
    cout<<"enter the number";
    cin>>a;
    cout<<multiple(a);    
}
int multiple(int a)
{
return a%3==0||a%7==0;
}

#include<iostream>
using namespace std;
int temperature(int,int);
int main(){
    int temp1,temp2;
    cout<<"enter the temperature";
    cin>>temp1;
    cout<<"enter the temperature";
    cin>>temp2;
    cout<<temperature(temp1,temp2);    
}
int temperature(int temp1,int temp2)
{
return temp1<0&&temp2>100||temp2<0&&temp1>100;
}

#include<iostream>
using namespace std;
int check(int,int,int);
int main(){
    int a,b,c;
    cout<<"enter the number";
    cin>>a;
    cout<<"enter the number";
    cin>>b;
    cout<<"enter the number";   
    cin>>c;
    cout<<check(a,b,c);   
}
int check(int a,int b,int c)
{
return a>20&&a<50||b>20&&b<50||c>20&&c<50;
}
#include<iostream>
using namespace std;
int nearest(int,int);
int main(){
    int a,b,value1,value2;
    cout<<"enter the number";
    cin>>a;
    cout<<"enter the number";
    cin>>b;
    cout<<nearest(a,b);   
}
int nearest(int a,int b)
{
    int value1=a-100;
    int value2=b-100;
return value1==value2?0:(value1<value2?a:b);
}

#include<iostream>
using namespace std;
int last(int,int);
int main(){
    int a,b;
    cout<<"enter the number";
    cin>>a;
    cout<<"enter the number";
    cin>>b;
    cout<<last(a,b);   
}
int last(int a,int b)
{
    
return a%10==b%10;
}*/
#include<iostream>
using namespace std;
int count(int arr[],int n){
    int ctr=0;

    for (int i = 0; i < n; i++)
    {
        if (  (arr[i]==5 && arr[i+1]==5)   ||    ( arr[i]==5 && arr[i+1]==6)   )
        {
            ctr++;
        }
       
        
    }
     return ctr;
}
    
int main(){
    int n; 
    cout<<"Enter the size of array"<<endl;
    cin>>n;

int arr[n];

cout<<"enter the numbers in array";
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
cout<<count(arr,n);

}




