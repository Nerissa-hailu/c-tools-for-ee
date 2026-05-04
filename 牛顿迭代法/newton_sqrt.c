#include<stdio.h>
#include<math.h>
double newtonSqrt(double num,double eps){
    double x0=num/2.0;
    double x1;
    int count=0;
    while (1)
    {
        x1=x0-(x0*x0-num)/(2*x0);
        count++;
        printf("第%d次迭代：%.10f\n",count,x1);
        if (fabs(x1-x0)<eps){
            break;
        }
        x0=x1;
        /* code */
    }
    return x1;
    
}
int main(){
    double n;
    double precision=1e-6;
    printf("请输入要开方的数字：");
    scanf("%lf",&n); 
    double res=newtonSqrt(n,precision);
    printf("\n最终平方根结果：%.10f\n",res);
    return 0;
}