/*Pro_02*/
/*
	企业发放的奖金根据企业的当年利润决定。
		当利润I低于或等于100000元时，奖金可提成10%；
		利润大于100000元，小于200000元（100000<I≤200000）时，低于100000元的部分按10%提成，高于100000元的部分，可提成7.5%；
		利润大于200000元，小于400000元（200000<I≤400000）时，低于200000元的部分仍按上述办法提成（下同），高于200000元的部分按5%提成；
		利润大于400000元，小于600000元（400000<I≤600000）时，高于400000元的部分按3%提成；
		利润大于600000元，小于1000000元（600000<I≤1000000）时，高于600000的部分按1.5%提成；
		利润大于1000000元（I>1000000）时，超过1000000元的部分按1%提成。从键盘输入当年利润I，求应发放奖金总数。
			要求：
				(1)用if语句编程序；
				(2)用switch语句编程序。
*/
#include<stdio.h>
int main()
{
	long Profit = 0;
	float Bonus = 0;
	printf("Profit:\n");
	scanf("%d",&Profit);
	if( Profit < 100000 )
	printf("Bonus:%f\n",( 0.1 * Profit ));
	else if( 100000 < Profit && Profit < 200000 )
	printf("Bonus:%f\n",( 0.1 * 100000 + 0.075 * ( Profit - 100000 )));
	else if( 200000 < Profit && Profit < 400000 )
	printf("Bonus:%f\n",( 0.1 * 200000 + 0.05 * ( Profit - 200000 )));
	else if( 400000 < Profit && Profit < 600000 )
	printf("Bonus:%f\n",( 0.1 * 400000 + 0.03 * ( Profit - 400000 )));
	else if( 600000 < Profit && Profit < 1000000 )
	printf("Bonus:%f\n",( 0.1 * 600000 + 0.015 * ( Profit - 600000 )));
	else if( Profit > 1000000 )
	printf("Bonus:%f\n",( 0.1 * 1000000 + 0.01 * ( Profit - 1000000 )));
		
	return 0;
}

/*
From baidu		C++版 		if 
#include <iostream>
using namespace std;
int main ()
{ long i;                       //i为利润
  float  bonus,bon1,bon2,bon4,bon6,bon10;
  bon1=100000*0.1;             //利润为10万元时的奖金
  bon2=bon1+100000*0.075;      //利润为20万元时的奖金
  bon4=bon2+100000*0.05;       //利润为40万元时的奖金
  bon6=bon4+100000*0.03;       //利润为60万元时的奖金
  bon10=bon6+400000*0.015;     //利润为100万元时的奖金
  cout<<"enter i:"; 
  cin>>i;
  if (i<=100000)
     bonus=i*0.1;                     //利润在10万元以内按10%提成奖金
  else if (i<=200000)
     bonus=bon1+(i-100000)*0.075;    //利润在10万元至20万时的奖金
  else if (i<=400000)
     bonus=bon2+(i-200000)*0.05;     //利润在20万元至40万时的奖金
  else if (i<=600000)
     bonus=bon4+(i-400000)*0.03;     //利润在40万元至60万时的奖金
  else if (i<=1000000)
     bonus=bon6+(i-600000)*0.015;    //利润在60万元至100万时的奖金
  else
     bonus=bon10+(i-1000000)*0.01;   //利润在100万元以上时的奖金
  cout<<"bonus="<<bonus<<endl; 
  return 0;
 }
*/ 

/*
From baidu		C++版 		if  && switch 
#include <iostream>
using namespace std;
int main ()
{long i;
 float bonus,bon1,bon2,bon4,bon6,bon10;
 int c;
 bon1=100000*0.1;
 bon2=bon1+100000*0.075;
 bon4=bon2+200000*0.05;
 bon6=bon4+200000*0.03;
 bon10=bon6+400000*0.015;
 cout<<"enter i:";
 cin>>i;
 c=i/100000;
 if (c>10)  c=10;
 switch(c)
  {
	case 0: bonus=i*0.1; break;
 	case 1: bonus=bon1+(i-100000)*0.075; break;
  	case 2:
  	case 3: bonus=bon2+(i-200000)*0.05;break;
  	case 4:
  	case 5: bonus=bon4+(i-400000)*0.03;break;
  	case 6:
  	case 7:
  	case 8:
  	case 9: bonus=bon6+(i-600000)*0.015; break;
  	case 10: bonus=bon10+(i-1000000)*0.01;
  }
  cout<<"bonus="<<bonus<<endl;
  return 0;
}
*/ 
