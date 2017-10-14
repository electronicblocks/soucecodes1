/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: alphacoder
 *
 * Created on 12 October, 2017, 3:10 PM
 */

#include <cstdlib>
#include<cstring>
#include<cstdio>
#include<iostream>

using namespace std;

/*
 * 
 */
int main() {

    int m,n,s=0;
    int *intsum,*intval;
    intsum=&s;
    cout<<"enter the value of m n"<<endl;
    cin>>m>>n;
    intval=&n;
    *intsum+=*intval;
    intval=&m;
    *intsum+=*intval;
    cout<<s;
    cout<<*intsum;
    
    
    
    
    return 0;
}

