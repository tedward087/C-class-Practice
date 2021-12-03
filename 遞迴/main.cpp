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

/*
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

*/

/*
//老師出的題 3
//老師寫的
int fn_GetValue(int i_Ith, int i_Goalth);

int main(){
    int i_Ith=0;
    std::cin>> i_Ith;
    std::cout<< fn_GetValue(i_Ith, i_Ith);
    return 0;
}
int fn_GetValue(int i_Ith, int i_Goalth){
    if(i_Ith <= 0){
        return 0;
    }
    else if(i_Ith == 1){
        return 4 + 7;
    }
    else if(i_Ith == 2){
        if(i_Goalth % 2 ==0){
            return fn_GetValue(i_Ith - 1, i_Goalth) +7;
        }
        else{
            return fn_GetValue(i_Ith - 1, i_Goalth) +4;
        }
    }
    else{
        return fn_GetValue(i_Ith - 1, i_Goalth) + fn_GetValue(i_Ith - 2, i_Goalth);
    }
}
*/


/*
//河內塔 (老師寫的)
void fn_HTrs(int i_N,char c_St, char c_Tmp, char c_Des);

int main(){
	int i_N;
	cin>>i_N;
	fn_HTrs(i_N,'A','B','C');
	cout<< "\n";
}

void fn_HTrs(int i_N,char c_St,char c_Tmp, char c_Des){
	if(i_N==1){
		cout<<"Move disk "<<i_N<<" from "
				<< c_St<<" to "<< c_Des<<"\n";
	}
	else{
		fn_HTrs(i_N-1, c_St, c_Des, c_Tmp);
		cout<<"Move disk "<<i_N<<" from "
				<< c_St<<" to "<< c_Des<<"\n";
		fn_HTrs(i_N-1, c_Tmp, c_St, c_Des);
	}
}

*/
