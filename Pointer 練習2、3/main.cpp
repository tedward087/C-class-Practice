#include <iostream>

using namespace std;

int main()
{
    /*
    //�m��2
    float* fp_C = nullptr;
    float d_F = 0.0;
    cin>> d_F;
    fp_C = &d_F;
    d_F = (d_F-32.0)*5.0/9.0;
    cout<< *fp_C<<endl;
    */
    /*
    //�m��3
    int int_Num = -100;
    int* intptr_Num = &int_Num;
    int** intptr_Num2 = &intptr_Num; //�Ϋ��Ы����Эn�����P
    cout<<intptr_Num2<<" "<<&intptr_Num2<<"\n"<<intptr_Num<<" "<<&intptr_Num<<"\n"<<int_Num<<" "<<&int_Num<<"\n";
    cout<<**intptr_Num2;//��intptr_Num2��int_Num����
    */
    /*
    //�ʺA�t�m
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
