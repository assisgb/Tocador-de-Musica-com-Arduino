# 🎵 Tocador de Música com Arduino  
Um projeto eletrônico simples e divertido que reproduz melodias e exibe a letra da música em um display LCD.

## 📌 Sobre o Projeto  
Este projeto consiste em um tocador de música utilizando uma placa **ESP8266**.  
Ele utiliza um **buzzer passivo** para tocar notas musicais e um **display LCD 16x2 com interface I2C** para exibir simultaneamente a letra da música conforme ela é executada.

O objetivo é demonstrar controle de hardware, manipulação de sons e sincronização de texto com melodia usando C++ na plataforma Arduino.

---

## ⚙️ Como Funciona  
- O código foi desenvolvido em **C++ utilizando o Arduino Core para ESP8266**.  
- Um conjunto de **notas musicais**, com suas frequências correspondentes, é enviado ao buzzer.  
- Enquanto cada nota é tocada, o sistema exibe no **display LCD 16x2 I2C** a letra da música sincronizada.  
- A combinação permite que o dispositivo funcione como um pequeno player musical com interface visual simples.

---

## 🛠️ Componentes Utilizados  
- Placa **ESP8266**  
- **Buzzer passivo**  
- **Display LCD 16x2 I2C**  
- Jumpers  
- Protoboard (opcional)

---

## 🔌 Conexões Básicas  

### LCD 16x2 (I2C)
| LCD | ESP8266 |
|-----|---------|
| GND | GND     |
| VCC | 3.3V    |
| SDA | D2      |
| SCL | D1      |

### Buzzer
| Buzzer | ESP8266 |
|--------|---------|
| +      | D5      |
| -      | GND     |

> *(Os pinos podem ser ajustados conforme a necessidade.)*

---

## 📂 Estrutura do Código  
- Definição de notas e frequências  
- Vetores contendo as notas da melodia  
- Vetores contendo a letra da música  
- Função que toca cada nota pelo tempo correto  
- Função que escreve a letra no LCD em sincronia  

---

## ▶️ Como Executar  
1. Instale a **Arduino IDE** ou **PlatformIO**  
2. Selecione a placa **ESP8266**  
3. Instale a biblioteca **LiquidCrystal_I2C**  
4. Conecte os componentes conforme o esquema  
5. Faça o upload do código  
6. Aproveite a música enquanto vê a letra no display 🎶  

---

## 📜 Licença  
Este projeto pode ser utilizado para fins educacionais e hobbistas.
