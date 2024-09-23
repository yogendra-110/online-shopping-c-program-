#include<iostream>
using namespace std;
int main (){
 char startValue;
 char choiceAgain;
 float onlineshopping();
 startLevel:
 cout<<"please enter s to start shopping"<<endl;
 start:
 cin>>startValue;
 if(startValue=='s' || startValue=='S' ){
 float totalamount=onlineshopping();
 cout<<"total BillAmount is :"<<totalamount<<endl;
 shopAgain:
 cout<<"Do you want to shopping again y or n"<<endl;
 cin>>choiceAgain;
  if(choiceAgain=='y' || choiceAgain=='Y'){
   goto startLevel;	
 }
  else if(choiceAgain=='n' || choiceAgain=='N'){
 cout<<"Thanks for shopping"<<endl;
 }
  else{
   cout<<"you have entered wrong option,please type again"<<endl;
   goto shopAgain;
}
}
else{
   cout<<"you have entered wrong option,please enter s"<<endl;
   goto start;
 }	
}
float onlineshopping(){
   char choice;
   char item;
   int quantity;
   float billAmount=0;
   	
   cout<<"*************welcome to online shopping*************"<<endl;
   cout<<"------------please follow the instruction-----------"<<endl;
   cout<<"(1)please enter m to order mobile phones"<<endl;
   cout<<"(2)please enter l to order laptops"<<endl;
   cout<<"(3)please enter d to order desktops"<<endl;
   cout<<"(4)please enter s to order speakers"<<endl;
   cout<<"(5)please enter h to order head phones"<<endl;
   cin>>choice;
//-----------------------------------------------------mob//
   if(choice=='m' || choice=='M'){
    mobileLevel:
      cout<<"mobile details"<<endl;
      
      cout<<"1.Apple   =>  price :  40000"<<endl;
      cout<<"2.vivo    =>  price :  25000"<<endl;
      cout<<"3.oppo    =>  price :  20000"<<endl;
      cout<<"4.redmi   =>  price :  18000"<<endl;
      cout<<"5.realme  =>  price :  17000"<<endl;
       cout<<"6.samsung =>  price :  25000"<<endl;
      cout<<"please enter your choice"<<endl;
      cin>>item;
      if(item=='1'){
      cout<<"enter quantity"<<endl;
      cin>>quantity;
      billAmount=billAmount+quantity*40000;	
      }
      else if(item=='2'){
      cout<<"enter quantity"<<endl;
      cin>>quantity;
      billAmount=billAmount+quantity*25000;
      }
      else if(item=='3'){
      cout<<"enter quantity"<<endl;
      cin>>quantity;
      billAmount=billAmount+quantity*20000;
      }
      else if(item=='4'){
      cout<<"enter quantity"<<endl;
      cin>>quantity;
      billAmount=billAmount+quantity*18000;
      }
      else if(item=='5'){
      cout<<"enter quantity"<<endl;
      cin>>quantity;
      billAmount=billAmount+quantity*17000;
      }
      else if(item=='6'){
      cout<<"enter quantity"<<endl;
      cin>>quantity;
      billAmount=billAmount+quantity*25000;
      }
      else{
      cout<<"you have entered wrong option,please enter s"<<endl;
      goto mobileLevel;
      }
}
//-----------------------------------------------------lap//
   else if(choice=='l' || choice=='L'){
    laptopLevel:
      cout<<"laptop details"<<endl;
      
      cout<<"1.Apple   =>  price :  40000"<<endl;
      cout<<"2.dell    =>  price :  25000"<<endl;
      cout<<"3.hp      =>  price :  20000"<<endl;
      cout<<"4.redmi   =>  price :  18000"<<endl;
      cout<<"5.lenovo  =>  price :  17000"<<endl;
      cout<<"6.samsung =>  price :  25000"<<endl;
      cout<<"please enter your choice"<<endl;
      cin>>item;
      if(item=='1'){
      cout<<"enter quantity"<<endl;
      cin>>quantity;
      billAmount=billAmount+quantity*40000;	
      }
      else if(item=='2'){
      cout<<"enter quantity"<<endl;
      cin>>quantity;
      billAmount=billAmount+quantity*25000;
      }
      else if(item=='3'){
      cout<<"enter quantity"<<endl;
      cin>>quantity;
      billAmount=billAmount+quantity*20000;
      }
      else if(item=='4'){
      cout<<"enter quantity"<<endl;
      cin>>quantity;
      billAmount=billAmount+quantity*18000;
      }
      else if(item=='5'){
      cout<<"enter quantity"<<endl;
      cin>>quantity;
      billAmount=billAmount+quantity*17000;
      }
      else if(item=='6'){
      cout<<"enter quantity"<<endl;
      cin>>quantity;
      billAmount=billAmount+quantity*25000;
      }
      else{
      cout<<"you have entered wrong option,please enter s"<<endl;
      goto laptopLevel;
      }
}
//-----------------------------------------------------desktop//
      else if(choice=='d' || choice=='D'){
      desktopLevel:
      cout<<"desktop details"<<endl;
      
      cout<<"1.Apple    =>  price :  40000"<<endl;
      cout<<"2.intex    =>  price :  25000"<<endl;
      cout<<"3.LG       =>  price :  20000"<<endl;
      cout<<"4.redmi    =>  price :  18000"<<endl;
      cout<<"5.Aoc      =>  price :  17000"<<endl;
      cout<<"6.samsung  =>  price :  25000"<<endl;
      cout<<"please enter your choice"<<endl;
      cin>>item;
      if(item=='1'){
      cout<<"enter quantity"<<endl;
      cin>>quantity;
      billAmount=billAmount+quantity*40000;	
      }
      else if(item=='2'){
      cout<<"enter quantity"<<endl;
      cin>>quantity;
      billAmount=billAmount+quantity*25000;
      }
      else if(item=='3'){
      cout<<"enter quantity"<<endl;
      cin>>quantity;
      billAmount=billAmount+quantity*20000;
      }
      else if(item=='4'){
      cout<<"enter quantity"<<endl;
      cin>>quantity;
      billAmount=billAmount+quantity*18000;
      }
      else if(item=='5'){
      cout<<"enter quantity"<<endl;
      cin>>quantity;
      billAmount=billAmount+quantity*17000;
      }
      else if(item=='6'){
      cout<<"enter quantity"<<endl;
      cin>>quantity;
      billAmount=billAmount+quantity*25000;
      }
      else{
      cout<<"you have entered wrong option,please enter s"<<endl;
      goto desktopLevel;
      }
}
//-----------------------------------------------------speaker//
   if(choice=='s' || choice=='S'){
    speakerLevel:
      cout<<"speaker details"<<endl;
      
      cout<<"1.Apple   =>  price :  4000"<<endl;
      cout<<"2.vivo    =>  price :  2500"<<endl;
      cout<<"3.oppo    =>  price :  2000"<<endl;
      cout<<"4.redmi   =>  price :  1800"<<endl;
      cout<<"5.realme  =>  price :  1700"<<endl;
      cout<<"6.samsung =>  price :  2500"<<endl;
      cout<<"please enter your choice"<<endl;
      cin>>item;
      if(item=='1'){
      cout<<"enter quantity"<<endl;
      cin>>quantity;
      billAmount=billAmount+quantity*4000;	
      }
      else if(item=='2'){
      cout<<"enter quantity"<<endl;
      cin>>quantity;
      billAmount=billAmount+quantity*2500;
      }
      else if(item=='3'){
      cout<<"enter quantity"<<endl;
      cin>>quantity;
      billAmount=billAmount+quantity*2000;
      }
      else if(item=='4'){
      cout<<"enter quantity"<<endl;
      cin>>quantity;
      billAmount=billAmount+quantity*1800;
      }
      else if(item=='5'){
      cout<<"enter quantity"<<endl;
      cin>>quantity;
      billAmount=billAmount+quantity*1700;
      }
      else if(item=='6'){
      cout<<"enter quantity"<<endl;
      cin>>quantity;
      billAmount=billAmount+quantity*2500;
      }
      else{
      cout<<"you have entered wrong option,please enter s"<<endl;
      goto speakerLevel;
      }
}
//-----------------------------------------------------headphones//
   if(choice=='h' || choice=='H'){
    headphoneLevel:
      cout<<"Headphones details"<<endl;
      
      cout<<"1.Apple   =>  price :  3000"<<endl;
      cout<<"2.vivo    =>  price :  2000"<<endl;
      cout<<"3.oppo    =>  price :  1000"<<endl;
      cout<<"4.redmi   =>  price :  1800"<<endl;
      cout<<"5.realme  =>  price :  1700"<<endl;
      cout<<"6.samsung =>  price :  2500"<<endl;
      cout<<"please enter your choice"<<endl;
      cin>>item;
      if(item=='1'){
      cout<<"enter quantity"<<endl;
      cin>>quantity;
      billAmount=billAmount+quantity*3000;	
      }
      else if(item=='2'){
      cout<<"enter quantity"<<endl;
      cin>>quantity;
      billAmount=billAmount+quantity*2000;
      }
      else if(item=='3'){
      cout<<"enter quantity"<<endl;
      cin>>quantity;
      billAmount=billAmount+quantity*1000;
      }
      else if(item=='4'){
      cout<<"enter quantity"<<endl;
      cin>>quantity;
      billAmount=billAmount+quantity*1800;
      }
      else if(item=='5'){
      cout<<"enter quantity"<<endl;
      cin>>quantity;
      billAmount=billAmount+quantity*1700;
      }
      else if(item=='6'){
      cout<<"enter quantity"<<endl;
      cin>>quantity;
      billAmount=billAmount+quantity*2500;
      }
      else{
      cout<<"you have entered wrong option,please enter s"<<endl;
      goto headphoneLevel;
      }
}


return billAmount;
}

