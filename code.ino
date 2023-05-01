const int IN1 = A2;
const int IN2 = A3;
const int IN3 = A0;
const int IN4 = A1;

int trigP1 = 3;
int echoP1 = 4;

int trigP2 = 5;
int echoP2 = 6;

int trigP3 = 7;
int echoP3 = 8;

int trigP4 = 9;
int echoP4 = 10;

int trigP5 = 11;
int echoP5 = 12;

long dur1;
int dis1;

long dur2;
int dis2;

long dur3;
int dis3;

long dur4;
int dis4;

long dur5;
int dis5;

void setup()
{
  // put your setup code here, to run once:
  pinMode(trigP1, OUTPUT);
  pinMode(echoP1, INPUT);+

  pinMode(trigP2, OUTPUT);
  pinMode(echoP2, INPUT);

  pinMode(trigP3, OUTPUT);
  pinMode(echoP3, INPUT);

  pinMode(trigP4, OUTPUT);
  pinMode(echoP4, INPUT);

  pinMode(trigP5, OUTPUT);
  pinMode(echoP5, INPUT);

  pinMode (IN1, OUTPUT);
  pinMode (IN2, OUTPUT);
  pinMode (IN3, OUTPUT);
  pinMode (IN4, OUTPUT);

  Serial.begin(9600);
}

void clockwise_front_back()
{
  analogWrite(IN1, 255);
  analogWrite(IN2, 0);
}

void counter_clockwise_front_back()
{
  analogWrite(IN1, 0);
  analogWrite(IN2, 255);
}

void clockwise_right_left()
{
  analogWrite(IN3, 0);
  analogWrite(IN4, 255);
}

void counter_clockwise_right_left()
{
  analogWrite(IN3, 255);
  analogWrite(IN4, 0);
}

/*void stop_front_back()
{
  analogWrite(IN1, 0);
  analogWrite(IN2, 0);
}

void stop_right_left()
{
  analogWrite(IN3, 0);
  analogWrite(IN4, 0);
}*/

void loop() 
{
  // put your main code here, to run repeatedly:
  digitalWrite(trigP1,LOW);
  delayMicroseconds(2);

  digitalWrite(trigP1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigP1, LOW);

  dur1=pulseIn(echoP1,HIGH);
  dis1=dur1*0.0343/2;

  Serial.print(" Distance1 : ");
  Serial.println(dis1);

  digitalWrite(trigP2,LOW);
  delayMicroseconds(2);

  digitalWrite(trigP2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigP2, LOW);

  dur2=pulseIn(echoP2,HIGH);
  dis2=dur2*0.0343/2;

  Serial.print(" Distance2 : ");
  Serial.println(dis2);

  digitalWrite(trigP3,LOW);
  delayMicroseconds(2);

  digitalWrite(trigP3, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigP3, LOW);

  dur3=pulseIn(echoP3,HIGH);
  dis3=dur3*0.0343/2;

  Serial.print(" Distance3: ");
  Serial.println(dis3);

  digitalWrite(trigP4,LOW);
  delayMicroseconds(2);

  digitalWrite(trigP4, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigP4, LOW);

  dur4=pulseIn(echoP4,HIGH);
  dis4=dur4*0.0343/2;

  Serial.print(" Distance4 : ");
  Serial.println(dis4);

  digitalWrite(trigP5,LOW);
  delayMicroseconds(2);

  digitalWrite(trigP5, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigP5, LOW);

  dur5=pulseIn(echoP5,HIGH);
  dis5=dur5*0.0343/2;

  Serial.print(" Distance5 : ");
  Serial.println(dis5);

  Serial.println();

  clockwise_front_back();

  if(dis1 < 10)
  {
   // stop_front_back();
    //stop_right_left();
    counter_clockwise_front_back();
   // delay(1000);
  }

  if(dis2 < 10)
  {
    //stop_front_back();
    //stop_right_left();
    counter_clockwise_right_left();
    //delay(1000);
    //clockwise_front_back();
    //delay(1000);
  }

  if(dis3 < 10)
  {
    //stop_front_back();
    //stop_right_left();
    clockwise_right_left();
    //delay(1000);
    //clockwise_front_back();
    //delay(1000);
  }

  if(dis4 < 10)
  {
    //stop_front_back();
    //stop_right_left();
    clockwise_right_left();
    //delay(1000);
    //clockwise_front_back();
    //delay(1000);
  }

  if(dis5 < 10)
  {
    //stop_front_back();
    //stop_right_left();
    counter_clockwise_right_left();
    //delay(1000);
    //clockwise_front_back();
    //delay(1000);
  }

  if(dis1 > 10 && dis2 > 10 && dis3 > 10 && dis4 > 10 && dis5 > 10)
  {
    //clockwise_right_left();
    //delay(1000);
    //clockwise_front_back();
    //delay(1000);
    //counter_clockwise_right_left();
    //delay(1000);
    clockwise_front_back();
    //delay(1000);
  }

  delay(1000);
}