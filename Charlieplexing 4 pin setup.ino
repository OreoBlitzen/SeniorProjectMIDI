void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
     pinMode(2,OUTPUT);digitalWrite(2,LOW);
     pinMode(3,OUTPUT);digitalWrite(3,LOW);
     pinMode(4,OUTPUT);digitalWrite(4,LOW);
     pinMode(5,OUTPUT);digitalWrite(5,LOW); //new
}
int val=0;

void loop() {
  // put your main code here, to run repeatedly:
  delay(2000); //there will always be one high, one low, and two inputs with 4 pins
  Serial.println("Data!");


///// pin 2's time to shine! /////////////////////
  
  pinMode(2,INPUT);
  
  digitalWrite(4,HIGH);
  Serial.print("  Pin 2 (3=low, 4=high, 5=low):  ");
  Serial.println(digitalRead(2));
  digitalWrite(4,LOW);     
    
  digitalWrite(3,HIGH);
  Serial.print("  Pin 2 (3=high, 4=low, 5=low):  ");
  Serial.println(digitalRead(2));
  digitalWrite(3,LOW);

  digitalWrite(5,HIGH);
  Serial.print("  Pin 2 (3=low, 4=low, 5=high):  ");
  Serial.println(digitalRead(2));
  digitalWrite(5,LOW);

  pinMode(2,OUTPUT);

///// pin 3's time to shine! ///////////////////////
  
  pinMode(3,INPUT);
  
  digitalWrite(2,HIGH);
  Serial.print("  Pin 3 (2=high, 4=low, 5=low):  ");
  Serial.println(digitalRead(3));
  digitalWrite(2,LOW);     
    
  digitalWrite(4,HIGH);
  Serial.print("  Pin 3 (2=low, 4=high, 5=low):  ");
  Serial.println(digitalRead(3));
  digitalWrite(4,LOW);

  digitalWrite(5,HIGH);
  Serial.print("  Pin 3 (2=low, 4=low, 5=high):  ");
  Serial.println(digitalRead(3));
  digitalWrite(5,LOW);

  pinMode(3,OUTPUT);

////////// pin 4's time to shine! ////////////
  
  pinMode(4,INPUT); 
  
  digitalWrite(3,HIGH);
  Serial.print("  Pin 4 (2=low, 3=high, 5=low):  ");
  Serial.println(digitalRead(4));
  digitalWrite(3,LOW); //3 and 2 switch    
    
  digitalWrite(2,HIGH); 
  Serial.print("  Pin 4 (2=high, 3=low, 5=low):  ");
  Serial.println(digitalRead(4));
  digitalWrite(2,LOW); //2 and 5 switch

  digitalWrite(5,HIGH);
  Serial.print("  Pin 4 (2=low, 3=low, 5=high):  ");
  Serial.println(digitalRead(4));
  digitalWrite(5,LOW);
  pinMode(4,OUTPUT);

//// pin 5's time to shine! ///////////////////////
  
  pinMode(5,INPUT);

  digitalWrite(2,HIGH);
  Serial.print("  Pin 5 (2=high, 3=low, 4=low):  ");
  Serial.println(digitalRead(5));
  digitalWrite(2,LOW);

  digitalWrite(3,HIGH);
  Serial.print("  Pin 5 (2=low, 3=high, 4=low):  ");
  Serial.println(digitalRead(5));
  digitalWrite(3,LOW);

  digitalWrite(4,HIGH);
  Serial.print("  Pin 5 (2=low, 3=low, 4=high):  ");
  Serial.println(digitalRead(5));
  digitalWrite(4,LOW);

  pinMode(5,OUTPUT); //resets 5 to output for when code loops back


Serial.println("\n\n");
}