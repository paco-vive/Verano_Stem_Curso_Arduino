# Intro Arduino Car Project – Verano STEM UDLAP 2025

Este repositorio contiene los tres códigos utilizados durante el curso de verano **STEM 2025 en la UDLAP**, donde los estudiantes aprendieron a **construir y programar un carrito controlado por Bluetooth** utilizando un Arduino Uno, un driver L298N, dos motoreductores y el módulo HC-05.

---

## Componentes usados
- Arduino Uno
- Módulo Bluetooth HC-05
- Driver de motor L298N
- 2 motoreductores (3–6 V)
- Batería portátil 
- Cables y protoboard

---

## ¿Qué aprendieron los estudiantes?

### Código 1: Conceptos básicos de Arduino
- `pinMode()`, `digitalWrite()`, `Serial.begin()`
- Inicialización de variables
- Estructura de `setup()` y `loop()`
- Movimiento básico: adelante y atrás

### Código 2: Lectura del monitor serial
- Uso de `Serial.read()` y `Serial.println()`
- Interpretación de mensajes recibidos
- Comprobación de comandos vía monitor serial

### Código 3: Lógica con `switch-case`
- Control completo del carrito (adelante, atrás, izquierda, derecha, detenerse)
- Recepción de comandos desde el celular vía Bluetooth
- Aplicación de `switch-case` para decisiones según el comando

---

## Archivos incluidos

| Archivo                 | Descripción                                            |
|-------------------------|--------------------------------------------------------|
| `codigo_1_basico.ino`   | Movimiento adelante y atrás con funciones básicas      |
| `codigo_2_serial.ino`   | Lectura de comandos desde el monitor serial            |
| `codigo_3_bluetooth.ino`| Control del carrito vía Bluetooth con `switch-case`    |

---

## Sobre el autor y el curso

Los tres códigos fueron desarrollados por mi **(Francisco Viveros)**, para que los estudiantes pudieran entender claramente cada sección y concepto dentro del programa.

Este curso fue impartido en el **Verano STEM 2025** en la **Universidad de las Américas Puebla (UDLAP)**, donde estudiantes de secundaria y preparatoria tuvieron una introducción práctica al mundo de la programación, electrónica y robótica con Arduino.

---

> Este proyecto busca inspirar a nuevas generaciones a iniciarse en la robótica de forma accesible, divertida y significativa.
