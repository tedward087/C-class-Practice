#include <iostream>

using namespace std;

/*
//練習1(老師寫的)
int fn_GetHCF(int i_Num1, int i_Num2);

int main(){
    int i_Num1 =0;
    int i_Num2 =0;
    cout<<"Please enter two integer numbers: ";
    cin>>i_Num1 >> i_Num2;

    cout<<"The HCF is "<< fn_GetHCF(i_Num1, i_Num2);
    return 0;
}

int fn_GetHCF(int i_Num1, int i_Num2){
    int i_Max=0;
    int i_Min=0;
    if(i_Num1 <= i_Num2){
        i_Min = i_Num1;
        i_Max = i_Num2;
    }
    else{
        i_Min = i_Num2;
        i_Max = i_Num1;
    }
    if(i_Min == 0){
        return i_Max;
    }
    else{
        return fn_GetHCF(i_Max% i_Min, i_Min);
    }
}
*/

/*
//最小公倍數
int fn_GetLCM(int i_Num1, int i_Num2);

int main(){
    int i_Num1 =0;
    int i_Num2 =0;
    int i_LCM =1;
    cin>>i_Num1 >> i_Num2;


    i_LCM=fn_GetLCM(i_Num1, i_Num2);
    cout<<i_LCM*(i_Num1/i_LCM)*(i_Num2/i_LCM);
    return 0;
}

int fn_GetLCM(int i_Num1, int i_Num2){
    int i_Max=0;
    int i_Min=0;
    if(i_Num1 <= i_Num2){
        i_Min = i_Num1;
        i_Max = i_Num2;
    }
    else{
        i_Min = i_Num2;
        i_Max = i_Num1;
    }
    if(i_Min == 0){
        return i_Max;
    }
    else{
        return fn_GetLCM(i_Max% i_Min, i_Min);
    }
}

*/


//老師出的題 3
//我寫的(沒用迴圈)
int fn_money(int z);

int main(){
int z=0;
cin>>z;
cout<<fn_money(z);

return 0;
}


int fn_money(int z){
int b1=11;
int fa[z]={};
for(int i=0;i<z;i++){
	if(i==0)
		{fa[i]=1;}
	else if(i==1)
		{fa[i]=1;}
	else
		{fa[i]=fa[i-1]+fa[i-2];}


}
 if(z%2==1){
	return (fa[z-2])*4+11*fa[z-1];
}
else if(z%2==0){
	return (fa[z-2])*7+11*fa[z-1];
}


}

