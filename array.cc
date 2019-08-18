/***************************************************************************
 * 
 * Copyright (c) 2019 zkdnfcf, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file array.cc
 * @author zk(zkdnfc@163.com)
 * @date 2019/08/18 20:55:13
 * @version $Revision$ 
 * @brief 
 *  
 **/
#include <stdio.h>
int main(int argc, char* argv[]){
    int i = 0;
    int arr[3] = {0};
    for(; i<=3; i++){
        arr[i] = 0;
        printf("hello world\n");
    }
    return 0;
}

/*
   关于数组越界访问导致死循环的问题，我也动手实践了一下，发现结果和编译器的实现有关，gcc有一个编译选项（-fno-stack-protector）用于关闭堆栈保护功能。默认情况下启动了堆栈保护，不管i声明在前还是在后，i都会在数组之后压栈，只会循环4次；如果关闭堆栈保护功能，则会出现死循环。请参考：https://www.ibm.com/developerworks/cn/linux/l-cn-gccstack/index.html
*/


/* vim: set ts=4 sw=4 sts=4 tw=100 */
