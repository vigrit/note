#include<iostream>
#include<vector>
using namespace std;

int f(int v1,int v2);
int madd(int v1,int v2);
int mdec(int v1,int v2);
int mmul(int v1,int v2);
int mdiv(int v1,int v2);


int main(){
    int v1,v2; // 输入的两个整数值

    using PF=int(*)(int,int);

    vector<PF> pvec;
    PF pf1=madd;
    PF pf2=mdec;
    PF pf3=mmul;
    PF pf4=mdiv;
    pvec.push_back(pf1);
    pvec.push_back(pf2);
    pvec.push_back(pf3);
    pvec.push_back(pf4);

auto it_begin=pvec.begin();
auto it_end=pvec.end();

// int rs1=(*it_begin)(2,1);
// cout<<rs1<<endl;
cout<<"运算顺序为 加法 剑法 乘法 除法"<<endl;

for (auto ip :pvec  ){
    cout<<"请输入 v1 和v2"<<endl;
    cin>>v1;
    cin>>v2;
    int rs=ip(v1,v2);
    cout<<"结果为:"<<rs<<endl;
}
{
    /* code */
}


system("pause");
return 0;

}

int f(int v1,int v2){
    return v1;
}

int madd(int v1,int v2){
    cout<<"执行加法运算"<<endl;
    return v1+v2;
}
int mdec(int v1,int v2){
    cout<<"执行减法运算"<<endl;
    return v1-v2;
}
int mmul(int v1,int v2){
    cout<<"执行乘法运算"<<endl;
    return v1*v2;
}
int mdiv(int v1,int v2){
    cout<<"执行除法运算"<<endl;
    return v1/v2;
}