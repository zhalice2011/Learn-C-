//
//  main.cpp
//  learn-c++-xcode
//
//  Created by 周达理 on 2020/9/20.
//

#include <iostream>
using namespace std;

// 编写代码更改指针的值  and  更改指针所指对象的值
int main() {
    int value = 0;  // 定义一个值
    int value2 = 1;  // 定义一个值
    int *pVoid = &value2;

    int *pValue = &value; // 定义一个指针指向这个值
    
    cout << "原来的指针" << pValue << endl;
    cout << "原来的指针的值" << *pValue  << endl;
    
    // 1. 更改指针的值
    //    pValue = pVoid;
    
    // 2. 更改指针所指对象的值
    *pValue = 3;
    
    cout << "修改后的指针" << pValue << endl;
    cout << "修改后的指针的值" << *pValue  << endl;
    
    
    return 0;
}
