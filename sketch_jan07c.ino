#define GOMB_KOZEP 8
#define GOMB_JOBB  7
#define GOMB_BAL   4
#define GOMB_ALSO  5
#define GOMB_FELSO 6

void setup() {
  pinMode(GOMB_KOZEP, INPUT);
  pinMode(GOMB_JOBB, INPUT);
  pinMode(GOMB_BAL, INPUT);
  pinMode(GOMB_ALSO, INPUT);
  pinMode(GOMB_FELSO, INPUT);
Serial.begin(9600);
Serial.println("HANGOS prog v1");

}

void loop() {
  if (digitalRead(GOMB_KOZEP))
  {
    tone(2, 3000, 200); 
  }
  
  if (digitalRead(GOMB_JOBB))
  {
    tone(2, 4000, 200); 
  }
   if (digitalRead(GOMB_BAL))
  {
    tone(2, 2000, 200); 
  }
     if (digitalRead(GOMB_ALSO))
  {
    tone(2, 5000, 200); 
  }
     if (digitalRead(GOMB_FELSO))
  {
    tone(2, 6000, 200); 
  }



}
