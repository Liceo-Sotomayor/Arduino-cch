
#define enableA  10;
#define pinA1 2;
#define pinA2 3;

#define enableB 9;
#define pinB1 4;
#define pinB2 5;
#define led 13;

void setup() {
  pinMode (enableA, OUTPUT);
  pinMode (pinA1, OUTPUT);
  pinMode (pinA2, OUTPUT);
  pinMode (enableB, OUTPUT);
  pinMode (pinB1, OUTPUT);
  pinMode (pinB2, OUTPUT);
  pinMode (led, OUTPUT);
}

void loop() {
  digitalWrite (enableA, HIGH);
  digitalWrite (enableB, HIGH);
  digitalWrite(Ptrig, LOW);
  delayMicroseconds(2);
  digitalWrite(Ptrig, HIGH);   
  delayMicroseconds(10);
  digitalWrite(Ptrig, LOW);
  
  duracion = pulseIn(Pecho, HIGH);
  distancia = (duracion/2) / 29;            
  
  if (distancia >= 1000)
}
                                
