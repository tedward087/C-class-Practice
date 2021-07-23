#include <iostream>
#include <string>

using namespace std;
int main(){
/*
//練習3(等級排行可以用陣列表示)
int i_A;
cout<<"請輸入分數:";
cin >>i_A;
if(97<=i_A&&i_A>=100){
    cout<<"A+";}
    else if(94<=i_A&&i_A>=96){
            cout<<"A";
    }
    else if(91<=i_A&&i_A>=93){
            cout<<"A-";
    }
    else if(87<=i_A&&i_A>=90){
            cout<<"B+";
    }
    else if(84<=i_A&&i_A>=86){
            cout<<"B";
    }
    else if(81<=i_A&&i_A>=83){
            cout<<"B-";
    }
    else if(77<=i_A&&i_A>=80){
            cout<<"C+";
    }
    else if(74<=i_A&&i_A>=76){
            cout<<"C";
    }
    else if(71<=i_A&&i_A>=73){
            cout<<"C-";
    }
    else if(i_A<=70){
            cout<<"D";
    }
    */

    /*
    //練習4(我寫的)
    int i_Y;
    cout <<"Enter the year(year >0):";
    cin >>i_Y;
    if(i_Y>=0){
        if(i_Y%4==0){
            if(i_Y%100==0&&i_Y%400!=0){
                cout<<i_Y<<" is not a leap year.";
            }
            else if(i_Y%100==0&&i_Y%400==0){
                cout<<i_Y<<" is a leap year.";
            }
        }
        else{
            cout<<i_Y<<" is not a leap year.";
        }
    }
    else{
        cout<<"The year you enter is less equal  than 0.";
    }
    */

    /*
    //練習4(老師寫的)
    int i_Year = -1;
    cout <<"Enter the year(year >0):";
    cin >> i_Year;
    bool b_IsLeap = false;

    if(i_Year%4 == 0){
        b_IsLeap = true;
        if(i_Year%100 == 0){
            b_IsLeap = false;
                if(i_Year%400 == 0){
                    b_IsLeap = true;
                }
        }
    }

    if(i_Year < 0){
        cout<<"The year you enter is less equal  than 0.";
    }
    else{
        if(b_IsLeap == false){
            cout<<i_Year<<" is not a leap year.";
        }
        else{
                cout<<i_Year<<" is a leap year.";
        }
    }
    */

    /*
    //練習5
    string str_A;
    cout<<"Code:";
    cin >>str_A;
    string str_B ="ABC";
    if(str_A[0] ==str_B[0]||str_A[0] ==str_B[1]||str_A[0] ==str_B[2]){
        int i_C=(str_A[1]+str_A[2])%5;
        char c_C;
        int i_D;
        string str_C;
        if(i_C==0){
            c_C='L';
        }
        else if(i_C==1){
            c_C='B';
        }
        else if(i_C==2){
            c_C='E';
        }
        else if(i_C==3){
            c_C='D';
        }
        else if(i_C==4){
            c_C='S';
        }
        if(str_A[0] ==str_B[0]){
            str_C="employee";
        }
        else if(str_A[0]==str_B[1]){
            str_C="student";
        }
        else if(str_A[0]==str_B[2]){
            str_C="visitor";
        }
        i_D =static_cast<int>(char(str_A[0]));
        i_D= (i_D+str_A[1]-str_A[2])%str_A[3]+str_A[4];
        if(i_D==7){
            cout<<str_C<<endl<<c_C<<"\n"<<"Checked, welcome!";
        }
        else{
            cout << "Error code";
        }
    }
    else{
        cout << "Error code";
    }
    */
return 0;

}

