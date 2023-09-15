//Juan Esteban Tiraca 
//Daniel Alexis Villota
// Definición de pines
const int pinRojo = 2;
const int pinAmarillo = 3;
const int pinVerde = 4;

// Intervalo de tiempo para el parpadeo (en milisegundos)
const long intervalo = 1000; // 1 segundo

void setup() {
  // Inicializar los pines como salidas
  pinMode(pinRojo, OUTPUT);
  pinMode(pinAmarillo, OUTPUT);
  pinMode(pinVerde, OUTPUT);
}

void loop() {
  // Parpadeo de rojo y verde al mismo tiempo 5 veces
  for (int i = 0; i < 5; i++) {
    digitalWrite(pinRojo, HIGH);
    digitalWrite(pinVerde, HIGH);
    delay(intervalo);
    digitalWrite(pinRojo, LOW);
    digitalWrite(pinVerde, LOW);
    delay(intervalo);
  }

  // Esperar un segundo antes de que comience a parpadear el amarillo
  delay(intervalo);

  // Parpadeo de amarillo 5 veces
  for (int i = 0; i < 5; i++) {
    digitalWrite(pinAmarillo, HIGH);
    delay(intervalo);
    digitalWrite(pinAmarillo, LOW);
    delay(intervalo);
  }
}
