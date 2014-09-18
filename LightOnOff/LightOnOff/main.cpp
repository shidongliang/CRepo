//
//  main.cpp
//  LightOnOff
//
//  Created by MacBook Pro on 14-9-18.
//  Copyright (c) 2014年 MacBook Pro. All rights reserved.
//

/**
 一条长廊里依次装有n(1 ≤ n ≤ 65535)盏电灯，从头到尾编号1、2、3、…n-1、n。
 每盏电灯由一个拉线开关控制。开始，电灯全部关着。
 有n个学生从长廊穿过。
 第一个学生把号码凡是1的倍数的电灯的开关拉一下；
 接着第二个学生把号码凡是2的倍数的电灯的开关拉一下；
 接着第三个学生把号码凡是3的倍数的电灯的开关拉一下；
 如此继续下去，最后第n个学生把号码凡是n的倍数的电灯的开关拉一下。
 n个学生按此规定走完后，长廊里电灯有几盏亮着。
 注：电灯数和学生数一致。
 输入：电灯的数量
 输出：亮着的电灯数量
 样例输入：3
 样例输出：1
 */

#include <iostream>
//n的所有约数
int foo(int n)
{
    int count = 0;
    for(int i = 1;i<=n;i++)
    {
        if (0==n%i) {
            count++;
        }
    }
    return count;
}

int main(int argc, const char * argv[])
{

    // insert code here...
    std::cout << "Hello, World!\n";
    
    for (int num = 1 ; num <= 10; num ++) {
        std::cout<<foo(num)<<'\n';
        int time = foo(num);
        if (!(time%2)) {
            std::cout<<"ON"<<'\n';
        }else
        {
            std::cout<<"OFF"<<'\n';
        }
    }
    return 0;
}

