
#define relay8Control 38
#define relay7Control 37
#define relay6Control 36
#define relay5Control 35
#define relay4Control 34
#define relay3Control 33
#define relay2Control 32
#define relay1Control 31


void setup() {
  pinMode(relay8Control, OUTPUT);
  pinMode(relay7Control, OUTPUT);
  pinMode(relay6Control, OUTPUT);
  pinMode(relay5Control, OUTPUT);
  pinMode(relay4Control, OUTPUT);
  pinMode(relay3Control, OUTPUT);
  pinMode(relay2Control, OUTPUT);
  pinMode(relay1Control, OUTPUT);
}

void loop() {
  digitalWrite(relay8Control, LOW);
  digitalWrite(relay7Control, LOW);
  digitalWrite(relay6Control, LOW);
  digitalWrite(relay5Control, LOW);
  digitalWrite(relay4Control, LOW);
  digitalWrite(relay3Control, LOW);
  digitalWrite(relay2Control, LOW);
  digitalWrite(relay1Control, LOW);
}
