const int in1 = 6;  // Pin para controlar el motor derecho (entrada A)
const int in2 = 7;  // Pin para controlar el motor derecho (entrada B)
const int in3 = 12; // Pin para controlar el motor izquierdo (entrada A)
const int in4 = 13; // Pin para controlar el motor izquierdo (entrada B)

char comando; // Variable para guardar el carácter que se reciba por el puerto serial

void setup() {
  // Configuramos los pines como salidas (van a enviar señales eléctricas a los motores)
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  // Iniciamos la comunicación serial a 9600 baudios (velocidad estándar)
  Serial.begin(9600); 
}

void loop() {
  // Revisamos si hay datos disponibles para leer desde la computadora o el celular (puerto serial)
  if (Serial.available()) { 
    comando = Serial.read(); // Leemos un carácter del puerto serial y lo guardamos en la variable "comando"
    Serial.println(comando); // Imprimimos el carácter recibido para ver qué se mandó (útil para depurar)
  }
}

// Esta función hace que el carrito avance hacia adelante
void adelante() {
  digitalWrite(in1, HIGH); // Motor derecho hacia adelante
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH); // Motor izquierdo hacia adelante
  digitalWrite(in4, LOW);
}

// Esta función hace que el carrito retroceda
void atras() {
  digitalWrite(in1, LOW);  // Motor derecho hacia atrás
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);  // Motor izquierdo hacia atrás
  digitalWrite(in4, HIGH);
}

// Esta función hace que el carrito gire a la izquierda (un motor va hacia adelante y el otro hacia atrás)
void izquierda() {
  digitalWrite(in1, HIGH); // Motor derecho hacia adelante
  digitalWrite(in2, LOW);  
  digitalWrite(in3, LOW);  // Motor izquierdo hacia atrás
  digitalWrite(in4, HIGH);
}

// Esta función hace que el carrito gire a la derecha
void derecha() {
  digitalWrite(in1, LOW);  // Motor derecho hacia atrás
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH); // Motor izquierdo hacia adelante
  digitalWrite(in4, LOW); 
}

// Esta función detiene ambos motores
void detener() {
  digitalWrite(in1, LOW);  // Apaga motor derecho
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);  // Apaga motor izquierdo
  digitalWrite(in4, LOW);
}
