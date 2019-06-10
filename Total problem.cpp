/*
Linked list question0 = 6
Linked list question1 = 32
Linked list question2 = 15
Linked list question3 = 3
Linked list question00 = 11
Linked list question10 = 18
Linked list question20 = 5
Linked list question30 = 0
total = 90

*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    int count0=0,count1=0,count2=0,count3=0,count00=0,count10=0,count20=0,count30=0;
    int t=1000;
    while(t--){
        int x;
        cin>>x;
        if(x==0)
            count0++;
        else if(x==7)
            count00++;
        else if(x==1)
            count1++;
        else if(x==10)
            count10++;    
        else if(x==2)
            count2++;
        else if(x==20)
            count20++;    
        else if(x==3)
            count3++;
        else if(x==30)
            count30++;    
        else if(x==9)
            break;
    }
    cout<<"question0 = "<<count0<<endl;
    cout<<"question1 = "<<count1<<endl;
    cout<<"question2 = "<<count2<<endl;
    cout<<"question3 = "<<count3<<endl;
    cout<<"question00 = "<<count00<<endl;
    cout<<"question10 = "<<count10<<endl;
    cout<<"question20 = "<<count20<<endl;
    cout<<"question30 = "<<count30<<endl;
    cout<<"total = "<<(count0+count1+count2+count3+count00+count10+count20+count30)<<endl;
    return 0;
}
