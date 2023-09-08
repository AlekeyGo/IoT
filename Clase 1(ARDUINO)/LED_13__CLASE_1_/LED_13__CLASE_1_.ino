int LED = 13;
void setup() {
  pinMode (LED,OUTPUT); //(NUMERO DE PUERTO, MODO DE PIN)
  }

void loop() {
  digitalWrite(LED,HIGH); //NUMERO DE PUERTO, LOW=APAGAR HIGH= ENCENDER
  delay(1000); //DESPUES DE 1 SEGUNDO
  digitalWrite(LED,LOW); //NUMERO DE PUERTO, LOW=APAGAR HIGH= ENCENDER
  delay(1000); //DESPUES DE 1 SEGUNDO
  
   
}
