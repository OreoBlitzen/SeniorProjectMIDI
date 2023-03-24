#include <MIDI.h>

MIDI_CREATE_DEFAULT_INSTANCE();
bool MIDI1On = false;
bool MIDI2On = false;
bool MIDI3On = false;
bool MIDI4On = false;
bool MIDI5On = false;
bool MIDI6On = false;
bool MIDI7On = false;
bool MIDI8On = false;
bool MIDI9On = false;
bool MIDI10On = false;
bool MIDI11On = false;
bool MIDI12On = false;

void setup() {
  // put your setup code here, to run once:
  //Serial.begin(9600);
  Serial.begin(38400); //the number is bigger to support midi stuff
     pinMode(2,OUTPUT);digitalWrite(2,LOW);
     pinMode(3,OUTPUT);digitalWrite(3,LOW);
     pinMode(4,OUTPUT);digitalWrite(4,LOW);
     pinMode(5,OUTPUT);digitalWrite(5,LOW);
}

void loop() {
  // put your main code here, to run repeatedly: there will always be one high, one low, and two inputs with 4 pins
  //delay(2000); //comment out this line while running midi stuff

pinMode(3,INPUT_PULLUP); 
  digitalWrite(4,HIGH);
  Serial.print("  Button 1 (2=low, 4=high, 5=low):  ");
  Serial.println(digitalRead(3));
  if(digitalRead(3) == 1 && MIDI1On == false){
     MIDI.sendNoteOn(60, 127, 1);
     MIDI1On = true;     
     delay(10);
  }
  else if(digitalRead(3) == 0){
    MIDI1On = false;
    MIDI.sendNoteOff(60, 0, 1);
  }
  digitalWrite(4,LOW);
pinMode(3,OUTPUT);  

pinMode(3,INPUT_PULLUP);
  digitalWrite(5,HIGH);
  Serial.print("  Button 2 (2=low, 4=low, 5=high):  ");
  Serial.println(digitalRead(3));
  if(digitalRead(3) == 1 && MIDI2On == false){
     MIDI.sendNoteOn(62, 127, 1);
     MIDI2On = true;
     delay(10);
  }
  else if(digitalRead(3)==0) {
    MIDI2On = false;
    MIDI.sendNoteOff(62, 0, 1);
  }
  digitalWrite(5,LOW);
pinMode(3,OUTPUT);

pinMode(3,INPUT_PULLUP);
  digitalWrite(2,HIGH);
  Serial.print("  Button 3 (2=high, 4=low, 5=low):  ");
  Serial.println(digitalRead(3));
  if(digitalRead(3) == 1 && MIDI3On == false){
     MIDI.sendNoteOn(64, 127, 1);
     MIDI3On = true;
     delay(10);
  }
  else if(digitalRead(3)==0) {
    MIDI3On = false;
    MIDI.sendNoteOff(64, 0, 1);
  }
  digitalWrite(2,LOW);  
pinMode(3,OUTPUT);

pinMode(4,INPUT_PULLUP);  
  digitalWrite(3,HIGH);
  Serial.print("  Button 4 (2=low, 3=high, 5=low):  ");
  Serial.println(digitalRead(4));
  if(digitalRead(4) == 1 && MIDI4On == false){
     MIDI.sendNoteOn(66, 127, 1);
     MIDI4On = true;
     delay(10);
  }
  else if(digitalRead(4)==0) {
    MIDI4On = false;
    MIDI.sendNoteOff(66, 0, 1);
  }
  digitalWrite(3,LOW);   
pinMode(4,OUTPUT); 

pinMode(4,INPUT_PULLUP);
  digitalWrite(5,HIGH);
  Serial.print("  Button 5 (2=low, 3=low, 5=high):  ");
  Serial.println(digitalRead(4));
  if(digitalRead(4) == 1 && MIDI5On == false){
     MIDI.sendNoteOn(68, 127, 1);
     MIDI5On = true;
     delay(10);
  }
  else if(digitalRead(4)==0) {
    MIDI5On = false;
    MIDI.sendNoteOff(68, 0, 1);
  }
  digitalWrite(5,LOW);

  digitalWrite(2,HIGH); 
  Serial.print("  Button 6 (2=high, 3=low, 5=low):  ");
  Serial.println(digitalRead(4));
  if(digitalRead(4) == 1 && MIDI6On == false){
     MIDI.sendNoteOn(70, 127, 1);
     MIDI6On = true;
     delay(10);
  }
  else if(digitalRead(4)==0) {
    MIDI6On = false;
    MIDI.sendNoteOff(70, 0, 1);
  }
  digitalWrite(2,LOW);
pinMode(4,OUTPUT);

pinMode(5,INPUT_PULLUP);
  digitalWrite(4,HIGH);
  Serial.print("  Button 7 (2=low, 3=low, 4=high):  ");
  Serial.println(digitalRead(5));
  if(digitalRead(5) == 1 && MIDI7On == false){
     MIDI.sendNoteOn(72, 127, 1);
     MIDI7On = true;
     delay(10);
  }
  else if(digitalRead(5)==0) {
    MIDI7On = false;
    MIDI.sendNoteOff(72, 0, 1);
  }
  digitalWrite(4,LOW);
pinMode(5,OUTPUT);
  
pinMode(5, INPUT_PULLUP);
  digitalWrite(3,HIGH);
  Serial.print("  Button 8 (2=low, 3=high, 4=low):  ");
  Serial.println(digitalRead(5));
  if(digitalRead(5) == 1 && MIDI8On == false){
     MIDI.sendNoteOn(74, 127, 1);
     MIDI8On = true;
     delay(10);
  }
  else if(digitalRead(5)==0) {
    MIDI8On = false;
    MIDI.sendNoteOff(74, 0, 1);
  }
  digitalWrite(3,LOW);
pinMode(5, OUTPUT);

 pinMode(5,INPUT_PULLUP);
  digitalWrite(2,HIGH);
  Serial.print("  Button 9 (2=high, 3=low, 4=low):  ");
  Serial.println(digitalRead(5));
  if(digitalRead(5) == 1 && MIDI9On == false){
     MIDI.sendNoteOn(76, 127, 1);
     MIDI9On = true;
     delay(10);
  }
  else if(digitalRead(5)==0) {
    MIDI9On = false;
    MIDI.sendNoteOff(76, 0, 1);
  }
  digitalWrite(2,LOW);
pinMode(5, OUTPUT);

pinMode(2,INPUT_PULLUP);
  digitalWrite(5,HIGH);
  Serial.print("  Button 10 (3=low, 4=low, 5=high):  ");
  Serial.println(digitalRead(2));
  if(digitalRead(2) == 1 && MIDI10On == false){
     MIDI.sendNoteOn(78, 127, 1);
     MIDI10On = true;
     delay(10);
  }
  else if(digitalRead(2)==0) {
    MIDI10On = false;
    MIDI.sendNoteOff(78, 0, 1);
  }
  digitalWrite(5,LOW);
  
  digitalWrite(4,HIGH);
  Serial.print("  Button 11 (3=low, 4=high, 5=low):  ");
  Serial.println(digitalRead(2));
  if(digitalRead(2) == 1 && MIDI11On == false){
     MIDI.sendNoteOn(80, 127, 1);
     MIDI11On = true;
     delay(10);
  }
  else if(digitalRead(2)==0) {
    MIDI11On = false;
    MIDI.sendNoteOff(80, 0, 1);
  }
  digitalWrite(4,LOW);     
    
  digitalWrite(3,HIGH);
  Serial.print("  Button 12 (3=high, 4=low, 5=low):  ");
  Serial.println(digitalRead(2));
  if(digitalRead(2) == 1 && MIDI12On == false){
     MIDI.sendNoteOn(82, 127, 1);
     MIDI12On = true;
     delay(10);
  }
  else if(digitalRead(2)==0) {
    MIDI12On = false;
    MIDI.sendNoteOff(82, 0, 1);
  }
  digitalWrite(3,LOW);
pinMode(2,OUTPUT);

Serial.println("\n\n");
}