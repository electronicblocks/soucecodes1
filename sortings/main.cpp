/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: alphacoder
 *
 * Created on 10 October, 2017, 12:49 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
void sort(string a[],int n);
int str(string str1,string str2);
int main() {
    int n; string a[10];
    cout<<"enter the value of n";
    cout<<"\n";
    cin>>n;
    if(n>10||n==0){cout<<"invalid"; return -1;}
    else
    { cout<<"enter the elements \n";
    for(int i=0;i<n;i++)
    {cout<<"enter the"<<i<<"element\t\t";
    cin>>a[i];
    }
      cout<<"calling sorting function\t\n";  
        
      sort(a,n);
    }

    return 0;
}

void sort(string a[],int n)
{   string temp;
    
    for(int j=0;j<n;j++)
    { int top=j; 
    for(int i=j+1;i<n;i++)
    {
        if(str(a[j],a[i]))
            top=i;
        
    
    }
    temp=a[j];
    a[j]=a[top];
    a[top]=temp;
    }
for(int k=0;k<n;k++)
{cout<<a[k];
cout<<"\n";
}
    

}
int str(string str1,string str2)
{
    if(str1<str2)
    { return 0;}
    else 
    { return 1;}


}