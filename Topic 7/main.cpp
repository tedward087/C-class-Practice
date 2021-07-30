#include <iostream>
#include <string>

using namespace std;

/*
//練習1
//我寫的
void fn_IsPrime(int i_n);
int main(){
int i_n = 0;
cout<<"Enter a number:";
cin>>i_n;
fn_IsPrime(i_n);

return 0;
}

void fn_IsPrime(int i_n){
bool b_tf=true;
for(int i_a=2;i_a<=i_n/2;i_a++){
	if(i_n%i_a==0){
		b_tf=false;
	}
}
if(b_tf==true){
	cout<<i_n<<" is prime.";
}
else if(b_tf==false){
	cout<<i_n<<" is not prime.";
}
}
*/

/*
//練習3
void fn_IsPerfect(int i_Num1);
int main(){
    int i_in;
    cout<<"Enter a number :";
    cin>>i_in;
    fn_IsPerfect(i_in);


    return 0;
}
void fn_IsPerfect(int i_Num1){
    int i_plus=0;


    for(int i_aa=1;i_aa<i_Num1-1;i_aa++){
    if(i_Num1%i_aa==0){
        i_plus+=i_aa;
    }
    }
    if(i_plus==i_Num1){
        cout<<i_Num1<<" is perfect." ;
    }
    else{
        cout<<i_Num1<<" is not perfect." ;
    }
}
*/

/*
//練習4
void fn_GetCircleInfo(double db_1);
int main(){
    double db_radius;
    cout<<"Please enter a double number :";
    cin>>db_radius;
    fn_GetCircleInfo(db_radius);
    return 0;
}

void fn_GetCircleInfo(double db_1){
    const double db_Pi=3.1415;

    cout<<"Diameter is "<<db_1*2<<" units"<<endl;
    cout<<"Circumference is "<<db_1*2*db_Pi<<" units"<<endl;
    cout<<"Area is "<<db_1*db_1*db_Pi<<" units"<<endl;
}

*/
