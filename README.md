# LCD-con-Arduino

Este proyecto te guía paso a paso para conectar una pantalla LCD 1602 a un Arduino UNO y mostrar frases motivacionales una por una.

🔧 Opciones de conexión
Puedes conectar la pantalla de dos maneras:

📌 1. Conexión SIN adaptador I2C
Se utilizan 12 pines del Arduino.

Librería: LiquidCrystal.h

Fragmento del código:

#include <LiquidCrystal.h>
LiquidCrystal lcd(2, 3, 4, 5, 6, 7); // RS, E, D4, D5, D6, D7

void setup() {
  lcd.begin(16, 2);
}

📌 2. Conexión CON adaptador I2C
Solo necesitas 4 conexiones: VCC, GND, SDA (A4), SCL (A5).

Librería: LiquidCrystal_I2C.h

Fragmento del código:

#include <LiquidCrystal_I2C.h>
#define t 3000  // Tiempo entre frases

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.backlight();
}

📌 Importante:
👉 Si decides cambiar de una conexión tradicional a una con adaptador I2C, recuerda también modificar la librería y la inicialización del LCD como se muestra arriba.

📜 Mensajes motivadores
Las frases se agregan dentro de la función loop() usando una función personalizada mostrar() que escribe dos líneas en el display y espera un tiempo antes de cambiar.

📥 Librerías necesarias

LiquidCrystal (sin I2C)

LiquidCrystal_I2C (con I2C)

Puedes instalarlas desde:
Herramientas > Gestionar bibliotecas

✨ Hecho con:

Arduino UNO, LCD 1602, y mucha motivación.
Con corazón y código — Pedro
