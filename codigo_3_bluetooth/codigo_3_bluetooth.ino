const int in1 = 6;  // Pin que controla el motor derecho (entrada A)
const int in2 = 7;  // Pin que controla el motor derecho (entrada B)
const int in3 = 12; // Pin que controla el motor izquierdo (entrada A)
const int in4 = 13; // Pin que controla el motor izquierdo (entrada B)

char comando; // Aquí vamos a guardar el carácter que se reciba desde la computadora o celular

void setup() {
  // Configuramos todos los pines que controlan los motores como salidas
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  // Iniciamos la comunicación serial a 9600 baudios (velocidad estándar para enviar/recibir datos)
  Serial.begin(9600); 
}

void loop() {
  // Verificamos si llegó un dato desde el monitor serial (computadora o celular)
  if (Serial.available()) { 
    comando = Serial.read(); // Leemos un carácter y lo guardamos en la variable "comando"

    // Según la letra que recibimos, se ejecuta un movimiento diferente
    switch (comando) {
      case 'F': // Si se recibió la letra 'F' (Forward = Adelante)
        Serial.println("ADE LANTE"); // Escribimos en la consola lo que está pasando
        adelante(); // Llamamos a la función que mueve el carrito hacia adelante
        break;

      case 'B': // Si se recibió la letra 'B' (Back = Atrás)
        Serial.println("Atras");
        atras(); // El carrito se mueve hacia atrás
        break;

      case 'L': // Si se recibió la letra 'L' (Left = Izquierda)
        Serial.println("izquierda");
        izquierda(); // El carrito gira hacia la izquierda
        break;

      case 'R': // Si se recibió la letra 'R' (Right = Derecha)
        Serial.println("Derecha");
        derecha(); // El carrito gira hacia la derecha
        break;

      case 'S': // Si se recibió la letra 'S' (Stop = Detenerse)
        Serial.println("STOP");
        detener(); // Se detienen los motores
        break;

      default: // Si se recibe otra letra que no está en los casos anteriores, no hace nada
        break;
    }
  }
}

// Función para mover el carrito hacia adelante
void adelante() {
  digitalWrite(in1, HIGH); // Motor derecho hacia adelante
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH); // Motor izquierdo hacia adelante
  digitalWrite(in4, LOW);
}

// Función para mover el carrito hacia atrás
void atras() {
  digitalWrite(in1, LOW);  // Motor derecho hacia atrás
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);  // Motor izquierdo hacia atrás
  digitalWrite(in4, HIGH);
}

// Función para girar a la izquierda
void izquierda() {
  digitalWrite(in1, HIGH); // Motor derecho hacia adelante
  digitalWrite(in2, LOW);  
  digitalWrite(in3, LOW);  // Motor izquierdo hacia atrás
  digitalWrite(in4, HIGH);
}

// Función para girar a la derecha
void derecha() {
  digitalWrite(in1, LOW);  // Motor derecho hacia atrás
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH); // Motor izquierdo hacia adelante
  digitalWrite(in4, LOW); 
}

// Función para detener ambos motores
void detener() {
  digitalWrite(in1, LOW);  // Apaga motor derecho
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);  // Apaga motor izquierdo
  digitalWrite(in4, LOW);
}
