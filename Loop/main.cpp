#include <iostream>

using namespace std;

int main()
{
    /*
    //練習3
    for(int i_A=1;i_A<=20;i_A++){
        if(i_A%3 ==0){
            continue;
        }
        cout<<i_A<<endl;
    }

    int i_B=1;
    while(i_B<=20){
        if(i_B%3 ==0){
            i_B++;
            continue;
        }
        cout<<i_B<<"\n";
        i_B++;
    }
    */

    /*
    //練習4
    //我寫的
    for(int i_C=1;i_C<=9;i_C++){
        for(int i_D=9;(i_D-i_C)>0;i_D--){
                cout<<" ";
        }
        for(int i_E=1;i_E<i_C*2;i_E++){
            cout<<"*";
        }
        cout<<endl;
    }

    //老師寫的
    for(int i_Ct=-1;i_Ct <=17;i_Ct+=2){

        for(int i_Ct2 =(17/2) - (i_Ct/2);i_Ct2 >=0;i_Ct2--){
            cout<< " ";
        }

        for(int i_Ct2 =1;i_Ct2 <=i_Ct;i_Ct2++){
            cout<< "*";
        }
        cout<<"\n";
    }
    */

    /*
    //練習5
    for(int i_E=1;i_E<=9;i_E++){
        for(int i_F=1;i_F<=9;i_F++){
            cout<<i_E<<"*"<<i_F<<"="<<i_E*i_F<<",\t";
            if(i_F%3 ==0){
                cout<<"\n";
            }
        }
        cout<<endl;
    }
    */

    /*
    //練習7(我寫的)
    string str_A;
    cin>> str_A;
    for(int i_G=str_A.length();i_G>=0;i_G--){
        cout<<str_A[i_G];
    }

    //老師寫的
    int i_Num =0;
    cin >>i_Num;
    int i_Out =0;

    for(;i_Num>0;i_Num/=10){
        i_Out = i_Out*10+(i_Num%10);
    }
    cout<<i_Out<<"\n";
    */

    /*
    //練習8(老師寫的)
    int i_Num =0;
    cin >>i_Num;

    int ia_A[i_Num]= {};

    for(int i_Ct=0; i_Ct< i_Num;i_Ct++){
        cin>>ia_A[i_Ct];
    }
    int i_Tmp = -1;
    int i_TmpInd = -1;

    for(int i_Couter=0; i_Couter<3; i_Couter++){
        for(int i_Ct=0;i_Ct<i_Num;i_Ct++){
            if(i_Ct==0){
            i_Tmp =ia_A[i_Ct];
            i_TmpInd = i_Ct;
            }
            else{
                if(ia_A[i_Ct] >= i_Tmp){
                    i_Tmp= ia_A[i_Ct];
                    i_TmpInd = i_Ct;
                }
            }
        }
        ia_A[i_TmpInd]= ia_A[i_Num -1];
        ia_A[i_Num-1]= i_Tmp;
        i_Num--;
        }
        cout<< i_Tmp;
        */
    return 0;
}
