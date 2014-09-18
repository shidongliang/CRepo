//
//  main.cpp
//  Ten_Numbers
//
//  Created by MacBook Pro on 14-9-18.
//  Copyright (c) 2014年 MacBook Pro. All rights reserved.
//

#include <iostream>

bool result_Ten(long n)
{
    bool ten = false;
    int sum = 0;
    for (int i = 0 ;i<10; i++) {
        sum+=n%10;
        n /=10;
    }
    if (10 == sum) {
        ten = true;
    }
    return ten;
}

bool Ten(long n)
{
    bool ten = true;
    int a[10] = {0,0,0,0,0,0,0,0,0,0};
    int b[10] = {0,0,0,0,0,0,0,0,0,0};
//    int sum = 0;
    for (int i = 0 ;i<10; i++) {
        int mod = n%10;
        b[9-i]=mod;
//        sum+=mod*(9-i);
        switch (mod) {
            case 0:
                a[0]+=1;
                break;
            case 1:
                a[1]+=1;
                break;
            case 2:
                a[2]+=1;
                break;
            case 3:
                a[3]+=1;
                break;
            case 4:
                a[4]+=1;
                break;
            case 5:
                a[5]+=1;
                break;
            case 6:
                a[6]+=1;
                break;
            case 7:
                a[7]+=1;
                break;
            case 8:
                a[8]+=1;
                break;
            case 9:
                a[9]+=1;
                break;
                
            default:
                break;
        }
        n /=10;
    }
    for (int i = 0; i<9; i++) {
        if (a[i]!=b[i]) {
            ten = false;
            break;
        }
    }

    return ten;
}


int main(int argc, const char * argv[])
{

    // insert code here...
    for (long i = 1000000000; i<10000000000; i++) {
        if (result_Ten(i)) {
            if (Ten(i)) {
                std::cout<<i<<'\n';
            }
        }
    }
    std::cout << "Hello, World!\n";
    return 0;
}

