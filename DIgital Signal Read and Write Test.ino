const int pin1 = 2; //use this code to implement a 3 rail, 6 button charlieplexing system
const int pin2 = 3;
const int pin3 = 4;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //BUTTON 2
  pinMode( pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, INPUT);
  //Serial.print("The output is set to pin1 high, pin2 low, pin3 input \n");
    digitalWrite(pin1, HIGH);
    digitalWrite(pin2, LOW);
  Serial.print("Button 2: ");
  delay(50);
    Serial.print(digitalRead(pin3));
     Serial.print("\n");
    delay(500);

//BUTTON 3
  pinMode( pin1, INPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  //Serial.print("The output is set to pin1 input, pin2 high, pin3 low \n");
    digitalWrite(pin2, HIGH);
    digitalWrite(pin3, LOW);
  Serial.print("Button 3: ");
  delay(50);
    Serial.print(digitalRead(pin1));
     Serial.print("\n");
    delay(500);

    //BUTTON 6
  pinMode( pin1, OUTPUT);
  pinMode(pin2, INPUT);
  pinMode(pin3, OUTPUT);
  //Serial.print("The output is set to pin1 low, pin2 input, pin3 high \n");
    digitalWrite(pin1, LOW);
    digitalWrite(pin3, HIGH);
  Serial.print("Button 6: ");
  delay(50);
    Serial.print(digitalRead(pin2));
     Serial.print("\n");
    delay(500);

  //BUTTON 1
  pinMode( pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, INPUT);
  //Serial.print("The output is set to pin1 low, pin2 high, pin3 input \n");
    digitalWrite(pin1, LOW);
    digitalWrite(pin2, HIGH);
  Serial.print("Button 1: ");
  delay(50);
    Serial.print(digitalRead(pin3));
     Serial.print("\n");
    delay(500);

    //BUTTON 4
  pinMode( pin1, INPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  //Serial.print("The output is set to pin1 input, pin2 low, pin3 high \n");
    digitalWrite(pin3, HIGH);
    digitalWrite(pin2, LOW);
  Serial.print("Button 4: ");
  delay(50);
    Serial.print(digitalRead(pin1));
     Serial.print("\n");
    delay(500);

    //BUTTON 5
  pinMode( pin1, OUTPUT);
  pinMode(pin2, INPUT);
  pinMode(pin3, OUTPUT);
  //Serial.print("The output is set to pin1 low, pin2 input, pin3 high \n");
    digitalWrite(pin1, LOW);
    digitalWrite(pin3, HIGH);
  Serial.print("Button 5: ");
    delay(50);
    Serial.print(digitalRead(pin2));
     Serial.print("\n");
    delay(500);
}
