//
//  main.cpp
//  learn-c++-xcode
//
//  Created by 周达理 on 2020/9/20.
//

#include <iostream>
#include "Sales_item.h"
using namespace std;

int main() {
    Sales_item trans1, trans2;
    
    cout << "请输入两条ISBN相同的销售记录: " << endl;
    
    cin >> trans1 >> trans2;
    
    if (compareIsbn(trans1, trans2)) {
        cout << "汇总信息" << trans1 + trans2 << endl;
    }

    return 0;
}
