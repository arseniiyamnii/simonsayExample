/*
проба сделать без функций и указателей
 */
/*
Это вступление
 */
int led = 8;
int button = 2;
int ledtwo = 9;
int buttontwo = 3;
//testcommit1
   void setup() {
   pinMode(led, OUTPUT);
   pinMode(button, INPUT);
   pinMode(ledtwo, OUTPUT);
   pinMode(buttontwo, INPUT);
   Serial.begin(9600);
   randomSeed(analogRead(0));
    }
void mig(int a) {
      digitalWrite(led, LOW);
      digitalWrite(ledtwo, LOW);
      if (a == 1) {
        digitalWrite(led, HIGH);
        delay(1000);
        digitalWrite(led, LOW);
        delay(1000);
      }
      if (a == 2){
        digitalWrite(ledtwo, HIGH);
        delay(1000);
        digitalWrite(ledtwo, LOW);
        delay(1000);
      }
    }
    void fullmig(int *a, int i){
      int b=0;
      int c=0;
      int d=0;
      while(b!=i){
        c=a[b];
        mig(c);
       b++;
      }
    }
    int sizearr(int *a){ //Этой функцией мы узнаем длинну массива
      int d=0;
      while(a[d] != 3){
        d++;
      }
      return d;
    }
    /*
    сбор с кнопок
     */
    int sborskn(){
      int x=0;
      while (x==0) {
        if (digitalRead(button) == HIGH) {
          x=1;
          while(digitalRead(button) == HIGH){}
        }
        if (digitalRead(buttontwo) == HIGH) {
          x=2;
          while(digitalRead(buttontwo) == HIGH){}
        }
      }
      delay (250);
      return x;
    }
    /*
    Проверка
     */
    void (* resetFunc) (void) = 0;
    void prov(int a){
        if(a==1){
          for (int p = 5; p!=0 ;p--){
            digitalWrite(led, HIGH);
            delay (250);
            digitalWrite(led, LOW);
            delay (250);
          }
        }
        else{
          for (int p = 5; p!=0 ;p--){
            digitalWrite(ledtwo, HIGH);
            delay (250);
            digitalWrite(ledtwo, LOW);
            delay (250);
          }
         resetFunc();
        }
      }
void loop() {
int x=10000;
while (millis()<x)
{
  if (Serial.available() > 0) {
  x=100000;
    int incomingByte = Serial.read();
    if (incomingByte == '1') {
      digitalWrite(ledPin, HIGH);
    }
    if (incomingByte == 'Q') {
      digitalWrite(ledPin, LOW);
    }
    if (incomingByte == '2') {
      digitalWrite(ledPin2, HIGH);
    }
    if (incomingByte == 'Q') {
      digitalWrite(ledPin2, LOW);
    }
  }}
  
}