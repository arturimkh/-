

#define pinX    A2  // ось X джойстика
#define pinY    A1  // ось Y джойстика

//Двигатель A
int enA = 9;
int in1 = 8;
int in2 = 7;
// Двигатель B
int enB = 3;
int in3 = 4;

int in4 = 5;
 
void setup()
{
  Serial.begin(19200);
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);


  pinMode(pinX, INPUT);
  pinMode(pinY, INPUT);
  


}
 
void loop()
{
// Установка двигателя A и B на максимальную скорость (0 ... 255)
  //int val = analogRead(255); // считываем данные с порта A1
  //Serial.println(val);

// Вращение двигателем A и B вперед
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);


  int X = analogRead(pinX)/4;              // считываем значение оси Х
  int Y = analogRead(pinY)/4;              // считываем значение оси Y

  analogWrite(enA, X); //  
  analogWrite(enB, Y);
  Serial.print(X);                       // выводим в Serial Monitor
  Serial.print("\t");                    // табуляция
  Serial.println(Y);
  

}
   
