#include<iostream>
#include<vector>
using namespace std;

int f(int v1,int v2);
int madd(int v1,int v2);
int mdec(int v1,int v2);
int mmul(int v1,int v2);
int mdiv(int v1,int v2);


int main(){
    int v1,v2; // �������������ֵ

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
cout<<"����˳��Ϊ �ӷ� ���� �˷� ����"<<endl;

for (auto ip :pvec  ){
    cout<<"������ v1 ��v2"<<endl;
    cin>>v1;
    cin>>v2;
    int rs=ip(v1,v2);
    cout<<"���Ϊ:"<<rs<<endl;
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
    cout<<"ִ�мӷ�����"<<endl;
    return v1+v2;
}
int mdec(int v1,int v2){
    cout<<"ִ�м�������"<<endl;
    return v1-v2;
}
int mmul(int v1,int v2){
    cout<<"ִ�г˷�����"<<endl;
    return v1*v2;
}
int mdiv(int v1,int v2){
    cout<<"ִ�г�������"<<endl;
    return v1/v2;
}