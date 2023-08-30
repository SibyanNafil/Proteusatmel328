bool btncheck = false;
int btn = 2;
int led = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(btn, INPUT_PULLUP);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(btn) == 0)
{
  delay(50);
  if (digitalRead(btn) == 0)
  {
    btncheck =! btncheck;
    digitalWrite(led, btncheck ? HIGH : LOW);
    while (digitalRead(btn) == 0){}
  }
}
}
