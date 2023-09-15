//Juan Esteban Tiraca 
//Daniel Alexis Villota
// Definición de pines
const int pinRojo = 2;
const int pinAmarillo = 3;
const int pinVerde = 4;

// Intervalo de tiempo (en milisegundos)
const long intervalo = 1000; // 1 segundo

void setup() {
  // Inicializar los pines como salidas
  pinMode(pinRojo, OUTPUT);
  pinMode(pinAmarillo, OUTPUT);
  pinMode(pinVerde, OUTPUT);
}

void loop() {
  // Encender todos los LEDs
  digitalWrite(pinRojo, HIGH);
  digitalWrite(pinAmarillo, HIGH);
  digitalWrite(pinVerde, HIGH);

  // Esperar 1 segundo
  delay(intervalo);

  // Apagar todos los LEDs
  digitalWrite(pinRojo, LOW);
  digitalWrite(pinAmarillo, LOW);
  digitalWrite(pinVerde, LOW);

  // Esperar 1 segundo
  delay(intervalo);
}
