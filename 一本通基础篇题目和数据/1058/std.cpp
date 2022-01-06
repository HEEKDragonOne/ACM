#include <iostream>
#include <cstdio>
#include <cmath>
#define precision_1 1e-12//自己定一精度，用于判断浮点数大小
#define precision_2 1e-6//自己定一精度，用于判断浮点数大小

/*双精度浮点数表示法：１bit符号位，11bit指数位(用阶码表示)，52bit小数部分(尾数)。因此一个规格化的单精度浮点数x的真值为x=((-1)^S)(1.M)(2^(E-127))
显然，x永远也不可能为绝对0。 针对上面的描述，当阶码E为全0且尾数M也全0时，可以认为表示的真值x为计算机中的绝对0值,再结合符号位S,有正0和负0之分； */
/*x1和x2是两浮点数，precision是自设的精度。可以用 fabs(x1-x2)<=precision来判断x1和x2是否相等。如果要求更高的精度，把precision定得更小即可*/

using namespace std;
int main()
{
    double a,b,c,x1,x2,delta; 
    
    cin>>a>>b>>c;
    delta=b*b-4*a*c;//判别式
    
    if(delta<0&&fabs(delta)>precision_1)//当判别式小于给定的精度范围内，即delta<0时，无实根
        printf("No answer!\n");
    else if(fabs(delta)<precision_1)//当判别式小于给定的精度但>0，此时delta≈0
    {
        x1=-b/(2*a);
        if(fabs(x1)<precision_2) //超出所给的最小范围，此时，视为delta=0，直接输出0
            printf("x1=x2=%.5lf\n",0);
        else//未超出所给范围时，结果仍在小数点后5位有效数字以内，输出结果
            printf("x1=x2=%.5lf\n",x1);
    }
    else//delta>0时
    {
        x1=(-b+sqrt(delta))/(2*a);
        x2=(-b-sqrt(delta))/(2*a);
        if(fabs(x1)<precision_2)	x1=fabs(x1);//小于所给的最高精度，编译系统视为-0，求绝对值
        if(fabs(x2)<precision_2)	x2=fabs(x2);//小于所给的最高精度，编译系统视为-0，求绝对值
        if(x1<x2)//x1、x2中小的数在前输出
            printf("x1=%.5lf;x2=%.5lf",x1,x2);
        else 
            printf("x1=%.5lf;x2=%.5lf",x2,x1);
    }
    
    return 0;
}