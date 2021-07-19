#include <iostream>

using namespace std;

int main()
{
    /*
    //練習2
    float* fp_C = nullptr;
    float d_F = 0.0;
    cin>> d_F;
    fp_C = &d_F;
    d_F = (d_F-32.0)*5.0/9.0;
    cout<< *fp_C<<endl;
    */
    /*
    //練習3
    int int_Num = -100;
    int* intptr_Num = &int_Num;
    int** intptr_Num2 = &intptr_Num; //用指標指指標要用雙星
    cout<<intptr_Num2<<" "<<&intptr_Num2<<"\n"<<intptr_Num<<" "<<&intptr_Num<<"\n"<<int_Num<<" "<<&int_Num<<"\n";
    cout<<**intptr_Num2;//用intptr_Num2取int_Num的值
    */
    /*
    //動態配置
    int* i_A = new int(2);
    *i_A +=2;
    cout<<*i_A;
    delete i_A;
    i_A = new int(3);
    cout<<*i_A;
    delete i_A;
    */


    return 0;
}
