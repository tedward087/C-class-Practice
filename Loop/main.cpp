#include <iostream>
#include <string>
using namespace std;


    /*
    //練習3
    int main()
{
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
    return 0;
}
    */

    /*
    //練習4
    //我寫的
    int main()
{
    for(int i_C=1;i_C<=9;i_C++){
        for(int i_D=9;(i_D-i_C)>0;i_D--){
                cout<<" ";
        }
        for(int i_E=1;i_E<i_C*2;i_E++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

    //老師寫的
    int main()
{
    for(int i_Ct=-1;i_Ct <=17;i_Ct+=2){

        for(int i_Ct2 =(17/2) - (i_Ct/2);i_Ct2 >=0;i_Ct2--){
            cout<< " ";
        }

        for(int i_Ct2 =1;i_Ct2 <=i_Ct;i_Ct2++){
            cout<< "*";
        }
        cout<<"\n";
    }
    return 0;
}
    */

    /*
    //練習5
    int main()
{
    for(int i_E=1;i_E<=9;i_E++){
        for(int i_F=1;i_F<=9;i_F++){
            cout<<i_E<<"*"<<i_F<<"="<<i_E*i_F<<",\t";
            if(i_F%3 ==0){
                cout<<"\n";
            }
        }
        cout<<endl;
    }
    return 0;
}
    */

    /*
    //練習6
    int main()
{
    string  str_temp ;
    string  str_temp2;
    for(int i_E=1;i_E<=9;i_E++){

        for(int i_F=1;i_F<=9;i_F++){

            if(i_E%4==0&&i_F%4!=0){
                cout<<"$"<<"*"<<i_F<<"="<<"??"<<",\t";
            }
            else if(i_E%4!=0&&i_F%4==0){
                cout<<i_E<<"*"<<"%"<<"="<<"??"<<",\t";
            }
            else if(i_E%4==0&&i_F%4==0){
                cout<<"$"<<"*"<<"%"<<"="<<"??"<<",\t";
            }
            else{
                    cout<<i_E<<"*"<<i_F<<"="<<i_E*i_F<<",\t";
                }
            if(i_F%3 ==0){
                cout<<"\n";
            }
        }
        cout<<endl;
    }
    return 0;
}




    /*
    //練習7(我寫的)
    int main()
{
    string str_A;
    cin>> str_A;
    for(int i_G=str_A.length();i_G>=0;i_G--){
        cout<<str_A[i_G];
    }
    return 0;
}

    //老師寫的
    int main()
{
    int i_Num =0;
    cin >>i_Num;
    int i_Out =0;

    for(;i_Num>0;i_Num/=10){
        i_Out = i_Out*10+(i_Num%10);
    }
    cout<<i_Out<<"\n";
    return 0;
}
    */

    /*
    //練習8(老師寫的)
    int main()
{
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
        return 0;
}
        */

	/*
	//練習9
	//我寫的
	int main(){
	string str_T;
	int i_C;
	string str_G;
	string str_R;

	cin>>str_T>>i_C;
	for(int i_Temp=0;i_Temp<=str_T.length()-1;i_Temp++){
		for(int i_Temp2=0;i_Temp2<i_Temp;i_Temp2++){
			if(str_T[i_Temp]==str_T[i_Temp2]){
				str_R="Error, number repeated.\n";
				cout<<str_R;
			}
		}
	}
	if(str_R=="Error, number repeated.\n"){}
	else{
		for(int i_Temp3=0;i_Temp3<i_C;i_Temp3++){
		cout<<"Guess Number:";
		cin>>str_G;
		int i_A=0;
		int i_B=0;

		for(int i_Temp=0;i_Temp<=str_G.length()-1;i_Temp++){
		for(int i_Temp2=0;i_Temp2<i_Temp;i_Temp2++){
			if(str_G[i_Temp]==str_G[i_Temp2])
				{cout<<"Error, number repeated.\n";}
			else if(str_G.length()<str_T.length()||str_G.length()>str_T.length()){
				cout<<"Length difference!\n";
			}
			else{
				for(int i_Temp4=0;i_Temp4<=str_G.length()-1;i_Temp4++){
						for(int i_Temp5=0;i_Temp5<=str_G.length()-1;i_Temp5++){
							if(str_G[i_Temp4]==str_T[i_Temp4])
								{++i_A;}
							else if(str_G[i_Temp4]!=str_T[i_Temp4]&&str_G[i_Temp4]!=str_T[i_Temp5])
								{++i_B;}
						}
				}
			}
		}
		}
	cout<<i_A<<"A"<<i_B<<"B"<<endl;
	if(i_A==str_T.length()){
		cout<<"You are right!\n";
	}
	else if(i_A!=str_T.length()&&i_Temp3==i_C-1){
		cout<<"You do not guess the right number!\n";
	}
	}
	}
	return 0;
}

*/

int  main(){
string str_in;
cin>>str_in;
if(str_in.length()!=10){
	cout<<"The length of input is not equal to 10."<<"\n";
return 0;
}





}
