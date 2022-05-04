/*
 * @Description: 
 * @version: 
 * @Author: 秦武胜
 * @Date: 2021-12-14 13:22:28
 * @LastEditors: 秦武胜
 * @LastEditTime: 2021-12-14 13:27:03
 * @FilePath: /Learn/C/C模板/src/main.cpp
 */

#include <iostream>
using namespace std;

int main()
{
    float x = 2, y = 4, z = 3;
    float x1 = x;
    x *= y * z;  //24
    x1 *= y + z; //14 15
    cout << x << " " << x1 << endl;

    return 0;
}