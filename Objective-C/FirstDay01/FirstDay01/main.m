//
//  main.m
//  FirstDay01
//
//  Created by 秦武胜 on 2022/4/30.
//

/**
    1. import 指令 是include的增强版，无论导入多少次都会只导入一次，
            相当于： ifndef _______
            endif_________
     2. 框架
        foundation 框架:
        基础 基本的功能
 Foundation.h 包含Foundation中所有头文件
 
        NSLog函数：
   1). 作为 printf函数增强版;
 2).语法：
    NSLog(@"格式控制字符串"，变量列表)；
    NSLog(@"输出的信息");
 执行这段代码的时间，当前程序名称，进程号：线程编号，输出信息
 
 第一个参数必须加@
 如果在字符串换行，nslog的自动换行失效
 
 */

#import <Foundation/Foundation.h>
//#import <F>
#import "itcast.h"

int main(int argc, const char * argv[]) {
    
    float f1= 1.f;
    NSLog(@"HELLO %f",f1);
    
    
    return 0;
}
