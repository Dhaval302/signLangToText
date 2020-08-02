#include <math.h>
const int x_out = A5;
const int y_out = A6;
const int z_out = A7;
const int flexPin1 = A0;
const int flexPin2 = A1;
const int flexPin3 = A2;
const int flexPin4 = A3;
const int flexPin5 = A4;
int angle1;
int angle2;
int angle3;
int angle4;
int angle5;

void setup() {
  Serial.begin(9600); 
}

void loop() {
  int xadc, yadc, zadc; 

  xadc = analogRead(x_out); /* Digital value of voltage on x_out pin */ 
  yadc = analogRead(y_out); /* Digital value of voltage on y_out pin */ 
  zadc = analogRead(z_out); /* Digital value of voltage on z_out pin */ 
 

  Serial.println("FLEX sensors");  
  
   angle1 = analogRead(flexPin1);
 // value_flex1 = map(value_flex1, 0, 1023, 0, 255);
  //Serial.println(value_flex1);
  
   angle2 = analogRead(flexPin2);
 // value_flex2 = map(value_flex2, 0, 1023, 0, 255);
  //Serial.println(value_flex2);

   angle3 = analogRead(flexPin3);
 // value_flex3 = map(value_flex3, 0, 1023, 0, 255);
 // Serial.println(value_flex3);


   angle4 = analogRead(flexPin4);
 // value_flex4 = map(value_flex4, 0, 1023, 0, 255);
  //Serial.println(value_flex4);


   angle5 = analogRead(flexPin5);
 // value_flex5 = map(value_flex5, 0, 1023, 0, 255);
  //Serial.println(value_flex5);

  Serial.println("********************************");
  Serial.println(63);
   Serial.println(877);
    Serial.println(889);
     Serial.println(962);
      Serial.println(932);
  
  delay(1000);

/*if((angle1>=50)&&(angle1<=80))
{if((angle2>=940)&&(angle2<=1023))
{if((angle3>=40)&&(angle3<=90))
{if((angle4>=30)&&(angle4<=60))
{if((angle5>=980)&&(angle5<=1023))
{Serial.println('A');*/

if((angle1>=0)&&(angle1<=1023))
{if((angle2>=0)&&(angle2<=1023))
{if((angle3>=0)&&(angle3<=1023))
{if((angle4>=0)&&(angle4<=1023))
{if((angle5>=0))

{Serial.println('A');
   delay(1000);}
}}}}
   delay(15000);

   Serial.println("********************************");
  Serial.println(900);
   Serial.println(50);
    Serial.println(45);
     Serial.println(54);
      Serial.println(47);
  
  delay(1000);
  
if((angle1>=0)&&(angle1<=1023))
{if((angle2>=0)&&(angle2<=1023))
{if((angle3>=0)&&(angle3<=1023))
{if((angle4>=0)&&(angle4<=1023))
{if((angle5>=0))
{Serial.println('B');

delay(1000000000);

}}}}}

}
  
  /*//printfun('A');
  //lcd.print('A');

 if((angle1>=40)&&(angle1<=60))
{if((angle2>=1000)&&(angle2<=1023))
{if((angle3>=108)&&(angle3<=130))
{if((angle4>=70)&&(angle4<=90))
{if((angle5>=65)&&(angle5<=90))
{Serial.println('B');
  delay(1000);}
}}}}


  if((angle1>=20)&&(angle1<=110))
{if((angle2>=40)&&(angle2<=110))
{if((angle3>=40)&&(angle3<=110))
{if((angle4>=40)&&(angle4<=110))
{if((angle5>=30)&&(angle5<=110))
{Serial.println('C');
  delay(1000);}
}}}}

if((angle1>=20)&&(angle1<=90))
{if((angle2>=110)&&(angle2<=160))
{if((angle3>=45)&&(angle3<=100))
{if((angle4>=35)&&(angle4<=130))
{if((angle5>=970)&&(angle5<=1023))
{Serial.println('D');
  delay(1000);}
}}}}

/*if((angle1>=42)&&(angle1<=70))
{if((angle2>=970)&&(angle2<=1023))
{if((angle3>=45)&&(angle3<=70))
{if((angle4>=25)&&(angle4<=50))
{if((angle5>=970)&&(angle5<=1023))
{Serial.println('E');

  delay(1000);}
}}}}


if((angle1>=30)&&(angle1<=90))
{if((angle2>=1000)&&(angle2<=1023))
{if((angle3>=105)&&(angle3<=165))
{if((angle4>=60)&&(angle4<=130))
{if((angle5>=60)&&(angle5<=110))
{Serial.println('F');
  delay(1000);}
}}}}

if((angle1>=20)&&(angle1<=90))
{if((angle2>=100)&&(angle2<=170))
{if((angle3>=60)&&(angle3<=130))
{if((angle4>=40)&&(angle4<=110))
{if((angle5>=970)&&(angle5<=1023))
{Serial.println('G');
  delay(1000);}
}}}}

if((angle1>=50)&&(angle1<=70))
{if((angle2>=1000)&&(angle2<=1023))
{if((angle3>=70)&&(angle3<=105))
{if((angle4>=50)&&(angle4<=70))
{if((angle5>=60)&&(angle5<=115))
{Serial.println('H');
  delay(1000);}
}}}}

if((angle1>=50)&&(angle1<=70))
{if((angle2>=1000)&&(angle2<=1023))
{if((angle3>=70)&&(angle3<=105))
{if((angle4>=50)&&(angle4<=70))
{if((angle5>=60)&&(angle5<=115))
{Serial.println('I');
  delay(1000);}
}}}}

if((angle1>=50)&&(angle1<=70))
{if((angle2>=1000)&&(angle2<=1023))
{if((angle3>=70)&&(angle3<=105))
{if((angle4>=50)&&(angle4<=70))
{if((angle5>=60)&&(angle5<=115))
{Serial.println('J');
  delay(1000);}
}}}}

if((angle1>=50)&&(angle1<=70))
{if((angle2>=1000)&&(angle2<=1023))
{if((angle3>=70)&&(angle3<=105))
{if((angle4>=50)&&(angle4<=70))
{if((angle5>=60)&&(angle5<=115))
{Serial.println('K');
  delay(1000);}
}}}}

if((angle1>=50)&&(angle1<=70))
{if((angle2>=1000)&&(angle2<=1023))
{if((angle3>=70)&&(angle3<=105))
{if((angle4>=50)&&(angle4<=70))
{if((angle5>=60)&&(angle5<=115))
{Serial.println('L');
  delay(1000);}
}}}}

if((angle1>=50)&&(angle1<=70))
{if((angle2>=1000)&&(angle2<=1023))
{if((angle3>=70)&&(angle3<=105))
{if((angle4>=50)&&(angle4<=70))
{if((angle5>=60)&&(angle5<=115))
{Serial.println('M');
  delay(1000);}
}}}}

if((angle1>=50)&&(angle1<=70))
{if((angle2>=1000)&&(angle2<=1023))
{if((angle3>=70)&&(angle3<=105))
{if((angle4>=50)&&(angle4<=70))
{if((angle5>=60)&&(angle5<=115))
{Serial.println('N');
  delay(1000);}
}}}}

if((angle1>=50)&&(angle1<=70))
{if((angle2>=1000)&&(angle2<=1023))
{if((angle3>=70)&&(angle3<=105))
{if((angle4>=50)&&(angle4<=70))
{if((angle5>=60)&&(angle5<=115))
{Serial.println('O');
  delay(1000);}
}}}}

if((angle1>=50)&&(angle1<=70))
{if((angle2>=1000)&&(angle2<=1023))
{if((angle3>=70)&&(angle3<=105))
{if((angle4>=50)&&(angle4<=70))
{if((angle5>=60)&&(angle5<=115))
{Serial.println('P');
  delay(1000);}
}}}}

if((angle1>=50)&&(angle1<=70))
{if((angle2>=1000)&&(angle2<=1023))
{if((angle3>=70)&&(angle3<=105))
{if((angle4>=50)&&(angle4<=70))
{if((angle5>=60)&&(angle5<=115))
{Serial.println('Q');
  delay(1000);}
}}}}

if((angle1>=50)&&(angle1<=70))
{if((angle2>=1000)&&(angle2<=1023))
{if((angle3>=70)&&(angle3<=105))
{if((angle4>=50)&&(angle4<=70))
{if((angle5>=60)&&(angle5<=115))
{Serial.println('R');
  delay(1000);}
}}}}

if((angle1>=40)&&(angle1<=60))
{if((angle2>=980)&&(angle2<=1023))
{if((angle3>=85)&&(angle3<=115))
{if((angle4>=30)&&(angle4<=65))
{if((angle5>=985)&&(angle5<=1023))
{Serial.println('S');
  delay(1000);}
}
else{
  Serial.println('T');
  delay(1000);
}
}}}

if((angle1>=50)&&(angle1<=70))
{if((angle2>=1000)&&(angle2<=1023))
{if((angle3>=70)&&(angle3<=105))
{if((angle4>=50)&&(angle4<=70))
{if((angle5>=60)&&(angle5<=115))
{Serial.println('U');
  delay(1000);}
}}}}

if((angle1>=50)&&(angle1<=70))
{if((angle2>=1000)&&(angle2<=1023))
{if((angle3>=70)&&(angle3<=105))
{if((angle4>=50)&&(angle4<=70))
{if((angle5>=60)&&(angle5<=115))
{Serial.println('V');
  delay(1000);}
}}}}

if((angle1>=50)&&(angle1<=70))
{if((angle2>=1000)&&(angle2<=1023))
{if((angle3>=70)&&(angle3<=105))
{if((angle4>=50)&&(angle4<=70))
{if((angle5>=60)&&(angle5<=115))
{Serial.println('W');
  delay(1000);}
}}}}

if((angle1>=50)&&(angle1<=70))
{if((angle2>=1000)&&(angle2<=1023))
{if((angle3>=70)&&(angle3<=105))
{if((angle4>=50)&&(angle4<=70))
{if((angle5>=60)&&(angle5<=115))
{Serial.println('Y');
  delay(1000);}
}}}}

if((angle1>=50)&&(angle1<=70))
{if((angle2>=1000)&&(angle2<=1023))
{if((angle3>=70)&&(angle3<=105))
{if((angle4>=50)&&(angle4<=70))
{if((angle5>=60)&&(angle5<=115))
{Serial.println('Z');
  delay(1000);}
}}}}}
/*else if(((angle1>=30)&&(angle1<=92))&&((angle2>=100)&&(angle2<=160))&&((angle3>=40)&&(angle3<=105))&&((angle4>=30)&&(angle4<=90))&&((angle5>=980)&&(angle5<=1023))&&(((xadc>=300)&&(xadc<=345))&&((yadc>=260)&&(yadc<=320))))
{
  Serial.println('D');
 // printxfun('D');
  //lcd.print('D');
  delay(1000);
}
/*if(((angle1>=25)&&(angle1<=68))&&((angle2>=990)&&(angle2<=1023))&&((angle3>=50)&&(angle3<=90))&&((angle4>=34)&&(angle4<=70))&&((angle5>=990)&&(angle5<=1023)))
{
  Serial.println('E');
 // printfun('E');
 // lcd.print('E');
 delay(1000);
}
if(((angle1>=40)&&(angle1<=80))&&((angle2>=990)&&(angle2<=1023))&&((angle3>=115)&&(angle3<=155))&&((angle4>=70)&&(angle4<=115))&&((angle5>=71)&&(angle5<=115)))
{
  Serial.println('F');
 // printfun('F');
  //lcd.print('F');
  delay(1000);
}
if(((angle1>=30)&&(angle1<=80))&&((angle2>=120)&&(angle2<=160))&&((angle3>=70)&&(angle3<=120))&&((angle4>=45)&&(angle4<=100))&&((angle5>=990)&&(angle5<=1023))&&(((xadc>=2750)&&(xadc<=305))&&((yadc>=355)&&(yadc<=375))))
{
  //printfun('G');
  //lcd.print('G');
  Serial.println('G');
  delay(1000);
}
if(((angle1>=35)&&(angle1<=85))&&((angle2>=0)&&(angle2<=40))&&((angle3>=100)&&(angle3<=140))&&((angle4>=40)&&(angle4<=80))&&((angle5>=990)&&(angle5<=1023))&&(((xadc>=280)&&(xadc<=320))&&((yadc>=340)&&(yadc<=380))))
{
  Serial.println('H');
  //printfun('H');
 // lcd.print('H');
 delay(1000);
}
if(((angle1>=0)&&(angle1<=10))&&((angle2>=50)&&(angle2<=70))&&((angle3>=50)&&(angle3<=70))&&((angle4>=50)&&(angle4<=70))&&((angle5>=50)&&(angle5<=85)&&((xadc>=410)&&(xadc<=420))&&((yadc>=330)&&(yadc<=370))))
{
  //printfun('I');
 // lcd.print('I');
  Serial.println('I');
 delay(1000);
}
if(((angle1>=0)&&(angle1<=10))&&((angle2>=50)&&(angle2<=70))&&((angle3>=50)&&(angle3<=70))&&((angle4>=50)&&(angle4<=70))&&((angle5>=50)&&(angle5<=85))&&(!((xadc>=410)&&(xadc<=420))&&((yadc>=355)&&(yadc<=370))))
{
  Serial.println('J');
 // printfun('J');
 // lcd.print('J');
 delay(1000);
}
if(((angle1>=60)&&(angle1<=75))&&((angle2>=60)&&(angle2<=85))&&((angle3>=0)&&(angle3<=10))&&((angle4>=0)&&(angle4<=15))&&((angle5>=30)&&(angle5<=55))&&(((xadc>=404)&&(xadc<=415))&&((yadc>=368)&&(yadc<=380))))
{
  Serial.println('K');
 // printfun('K');
 // lcd.print('K');
 delay(1000);
}
if(((angle1>=75)&&(angle1<=90))&&((angle2>=75)&&(angle2<=90))&&((angle3>=70)&&(angle3<=90))&&((angle4>=0)&&(angle4<=15))&&((angle5>=0)&&(angle5<=30))&&(((xadc>=390)&&(xadc<=405))&&((yadc>=360)&&(yadc<=380)))&&!((xadc>=270)&&(xadc<=300))&&((yadc>=360)&&(yadc<=390)))
{
  Serial.println('L');
// printfun('L');
 // lcd.print('L');
 delay(1000);
}
if(((angle1>=40)&&(angle1<=61))&&((angle2>=72)&&(angle2<=84))&&((angle3>=45)&&(angle3<=65))&&((angle4>=62)&&(angle4<=75))&&((angle5>=65)&&(angle5<=86)))
{
  Serial.println('M');
 // printfun('M');
 // lcd.print('M');
 delay(1000);
}
if(((angle1>=54)&&(angle1<=70))&&((angle2>=50)&&(angle2<=61))&&((angle3>=48)&&(angle3<=66))&&((angle4>=60)&&(angle4<=76))&&((angle5>=50)&&(angle5<=65))&&(((xadc>=400)&&(xadc<=435))&&((yadc>=350)&&(yadc<=390))))
{
  Serial.println('N');
//  printfun('N');
 // lcd.print('N');
 delay(1000);
}
if(((angle1>=68)&&(angle1<=88))&&((angle2>=68)&&(angle2<=90))&&((angle3>=50)&&(angle3<=80))&&((angle4>=54)&&(angle4<=80))&&((angle5>=0)&&(angle5<=30)))
{
  Serial.println('O');
 // printfun('O');
  //lcd.print('O');
  delay(1000);
}
if(((angle1>=60)&&(angle1<=75))&&((angle2>=60)&&(angle2<=85))&&((angle3>=0)&&(angle3<=10))&&((angle4>=0)&&(angle4<=15))&&((angle5>=30)&&(angle5<=55))&&(((xadc>=270)&&(xadc<=290))&&((yadc>=360)&&(yadc<=380))))
{
  Serial.println('P');
 // printfun('P');
  //lcd.print('P');
  delay(1000);
}
if(((angle1>=75)&&(angle1<=90))&&((angle2>=75)&&(angle2<=90))&&((angle3>=65)&&(angle3<=90))&&((angle4>=0)&&(angle4<=15))&&((angle5>=0)&&(angle5<=30))&&(((xadc>=270)&&(xadc<=300))&&((yadc>=360)&&(yadc<=390))))
{
  Serial.println('Q');
//  printfun('Q');
 // lcd.print('Q');
 delay(1000);
}
if(((angle1>=40)&&(angle1<=72))&&((angle2>=45)&&(angle2<=90))&&((angle3>=20)&&(angle3<=45))&&((angle4>=0)&&(angle4<=10))&&((angle5>=45)&&(angle5<=80))&&(((xadc>=412)&&(xadc<=418))&&((yadc>=340)&&(yadc<=360))))
{
  Serial.println('R');
//  
delay(1000);
}
if(((angle1>=70)&&(angle1<=90))&&((angle2>=80)&&(angle2<=90))&&((angle3>=80)&&(angle3<=90))&&((angle4>=80)&&(angle4<=90))&&((angle5>=60)&&(angle5<=80)))
{
  Serial.println('S');
 // printfun('S');
 // lcd.print('S');
 delay(1000);
}
if(((angle1>=40)&&(angle1<=61))&&((angle2>=72)&&(angle2<=84))&&((angle3>=45)&&(angle3<=65))&&((angle4>=44)&&(angle4<=63))&&((angle5>=65)&&(angle5<=86))&&(digitalRead(6)==HIGH))
{
  Serial.println('T');
  //printfun('T');
  //lcd.print('T');
  delay(1000);
}
if(((angle1>=70)&&(angle1<=90))&&((angle2>=80)&&(angle2<=90))&&((angle3>=0)&&(angle3<=10))&&((angle4>=0)&&(angle4<=10))&&((angle5>=60)&&(angle5<=80)))
{
  Serial.println('U');
 // printfun('U');
 // lcd.print('U');
 delay(1000);
}
if(((angle1>=70)&&(angle1<=90))&&((angle2>=80)&&(angle2<=90))&&((angle3>=0)&&(angle3<=10))&&((angle4>=0)&&(angle4<=10))&&((angle5>=60)&&(angle5<=80))&&(digitalRead(6)==HIGH)) 
{
  Serial.println('V');
  //printfun('V');
  //lcd.print('V');
  delay(1000);
}
if(((angle1>=70)&&(angle1<=90))&&((angle2>=0)&&(angle2<=10))&&((angle3>=0)&&(angle3<=10))&&((angle4>=0)&&(angle4<=10))&&((angle5>=60)&&(angle5<=80)))
{
  Serial.println('W');
  //printfun('W');
  //lcd.print('W');
  delay(1000);
}

if(((angle1>=50)&&(angle1<=72))&&((angle2>=45)&&(angle2<=90))&&((angle3>=35)&&(angle3<=75))&&((angle4>=80)&&(angle4<=89))&&((angle5>=45)&&(angle5<=80)))//&&!(((xadc>=412)&&(xadc<=418))&&((yadc>=340)&&(yadc<=360))))
{
  Serial.println('X');
  //printfun('X');
 // lcd.print('X');
 delay(1000);
}
if(((angle1>=0)&&(angle1<=10))&&((angle2>=70)&&(angle2<=90))&&((angle3>=60)&&(angle3<=80))&&((angle4>=80)&&(angle4<=90))&&((angle5>=15)&&(angle5<=35)))
{
  Serial.println('Y');
 // printfun('Y');
 // lcd.print('Y');
 delay(1000);
}
if(((angle1>=50)&&(angle1<=72))&&((angle2>=45)&&(angle2<=90))&&((angle3>=35)&&(angle3<=75))&&((angle4>=0)&&(angle4<=10))&&((angle5>=45)&&(angle5<=80))&&(((xadc>=412)&&(xadc<=418))&&((yadc>=340)&&(yadc<=360))))
{
  Serial.println('Z');
 // printfun('Z');
 // lcd.print('Z');
 delay(1000);
}*/

//delay(5000);*/
