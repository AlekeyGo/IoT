//Juan Esteban Tiraca 
//Daniel Alexis Villota
// Definición de pines
const int pinRojo = 2;
const int pinAmarillo = 3;
const int pinVerde = 4;

// Tiempos de encendido para cada luz (en milisegundos)
const long tiempoRojo = 500;    // 5 segundos
const long tiempoAmarillo = 500; // 2 segundos
const long tiempoVerde = 500;   // 5 segundos
//Juan Esteban Tiraca 
//Daniel Alexis Villota
void setup() {
  // Inicializar los pines como salidas
  pinMode(pinRojo, OUTPUT);
  pinMode(pinAmarillo, OUTPUT);
  pinMode(pinVerde, OUTPUT);
}

void loop() {
  // Encender luz roja
  digitalWrite(pinRojo, HIGH);
  delay(tiempoRojo);
  digitalWrite(pinRojo, LOW);

  // Encender luz amarilla
  digitalWrite(pinAmarillo, HIGH);
  delay(tiempoAmarillo);
  digitalWrite(pinAmarillo, LOW);

  // Encender luz verde
  digitalWrite(pinVerde, HIGH);
  delay(tiempoVerde);
  digitalWrite(pinVerde, LOW);

  // Ahora vamos en reversa circular
    // Encender luz roja
  digitalWrite(pinRojo, HIGH);
  delay(tiempoRojo);
  digitalWrite(pinRojo, LOW);
  // Encender luz amarilla
  digitalWrite(pinAmarillo, HIGH);
  delay(tiempoAmarillo);
  digitalWrite(pinAmarillo, LOW);
    // Encender luz verde
  digitalWrite(pinVerde, HIGH);
  delay(tiempoVerde);
  digitalWrite(pinVerde, LOW);


}
