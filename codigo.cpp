#include <cstdlib>
#include <iostream>
using namespace std;

int L;
int x = 0, y = 0;
int xcopia = x, ycopia = y;
int xizquierda, xderecha, yarriba, yabajo;
int L2;

int movimientosUsados = 0;

int cantidad_elementos = 0;
int cantidad_movimientos = 0;

int contadorTrampas = 0;
int contadorTesoros = 0;
int contadorPortales = 0;
int cantidadTesoros = 0;
int cantidadTrampas = 0;
int cantidadPortales = 0;

char elemPortal = 'P';

int identificadorTesoro1, identificadorTesoro2, identificadorTesoro3,
    identificadorTesoro4, identificadorTesoro5, identificadorTesoro6,
    identificadorTesoro7, identificadorTesoro8, identificadorTesoro9,
    identificadorTesoro10 = 0;

int identificadorTrampa1, identificadorTrampa2, identificadorTrampa3,
    identificadorTrampa4, identificadorTrampa5, identificadorTrampa6,
    identificadorTrampa7, identificadorTrampa8, identificadorTrampa9,
    identificadorTrampa10 = 0;

int posicionTesoro1_1, posicionTesoro1_2, posicionTesoro2_1, posicionTesoro2_2,
    posicionTesoro3_1, posicionTesoro3_2, posicionTesoro4_1, posicionTesoro4_2,
    posicionTesoro5_1, posicionTesoro5_2, posicionTesoro6_1, posicionTesoro6_2,
    posicionTesoro7_1, posicionTesoro7_2, posicionTesoro8_1, posicionTesoro8_2,
    posicionTesoro9_1, posicionTesoro9_2, posicionTesoro10_1,
    posicionTesoro10_2 = 0;

int posicionTrampa1_1, posicionTrampa1_2, posicionTrampa2_1, posicionTrampa2_2,
    posicionTrampa3_1, posicionTrampa3_2, posicionTrampa4_1, posicionTrampa4_2,
    posicionTrampa5_1, posicionTrampa5_2, posicionTrampa6_1, posicionTrampa6_2,
    posicionTrampa7_1, posicionTrampa7_2, posicionTrampa8_1, posicionTrampa8_2,
    posicionTrampa9_1, posicionTrampa9_2, posicionTrampa10_1,
    posicionTrampa10_2 = 0;

int identificadorPortal1, identificadorPortal2, identificadorPortal3, identificadorPortal4,
    identificadorPortal5, identificadorPortal6, identificadorPortal7, identificadorPortal8,
    identificadorPortal9, identificadorPortal10 = 0;

int posicionPortalX1_1, posicionPortalX1_2, posicionPortalY1_1, posicionPortalY1_2,
  posicionPortalX2_1, posicionPortalX2_2, posicionPortalY2_1, posicionPortalY2_2,
  posicionPortalX3_1, posicionPortalX3_2, posicionPortalY3_1, posicionPortalY3_2,
  posicionPortalX4_1, posicionPortalX4_2, posicionPortalY4_1, posicionPortalY4_2,
  posicionPortalX5_1, posicionPortalX5_2, posicionPortalY5_1, posicionPortalY5_2,
  posicionPortalX6_1, posicionPortalX6_2, posicionPortalY6_1, posicionPortalY6_2,
  posicionPortalX7_1, posicionPortalX7_2, posicionPortalY7_1, posicionPortalY7_2,
  posicionPortalX8_1, posicionPortalX8_2, posicionPortalY8_1, posicionPortalY8_2,
  posicionPortalX9_1, posicionPortalX9_2, posicionPortalY9_1, posicionPortalY9_2,
  posicionPortalX10_1, posicionPortalX10_2, posicionPortalY10_1, posicionPortalY10_2,
  posicionPortalX11_1, posicionPortalX11_2, posicionPortalY11_1, posicionPortalY11_2,
  posicionPortalX12_1, posicionPortalX12_2, posicionPortalY12_1, posicionPortalY12_2,
  posicionPortalX13_1, posicionPortalX13_2, posicionPortalY13_1, posicionPortalY13_2,
  posicionPortalX14_1, posicionPortalX14_2, posicionPortalY14_1, posicionPortalY14_2,
  posicionPortalX15_1, posicionPortalX15_2, posicionPortalY15_1, posicionPortalY15_2,
  posicionPortalX16_1, posicionPortalX16_2, posicionPortalY16_1, posicionPortalY16_2,
  posicionPortalX17_1, posicionPortalX17_2, posicionPortalY17_1, posicionPortalY17_2,
  posicionPortalX18_1, posicionPortalX18_2, posicionPortalY18_1, posicionPortalY18_2,
  posicionPortalX19_1, posicionPortalX19_2, posicionPortalY19_1, posicionPortalY19_2,
  posicionPortalX20_1, posicionPortalX20_2, posicionPortalY20_1, posicionPortalY20_2,
  posicionPortalX21_1, posicionPortalX21_2, posicionPortalY21_1, posicionPortalY21_2,
  posicionPortalX22_1, posicionPortalX22_2, posicionPortalY22_1, posicionPortalY22_2,
  posicionPortalX23_1, posicionPortalX23_2, posicionPortalY23_1, posicionPortalY23_2,
  posicionPortalX24_1, posicionPortalX24_2, posicionPortalY24_1, posicionPortalY24_2,
  posicionPortalX25_1, posicionPortalX25_2, posicionPortalY25_1, posicionPortalY25_2,
  posicionPortalX26_1, posicionPortalX26_2, posicionPortalY26_1, posicionPortalY26_2,
  posicionPortalX27_1, posicionPortalX27_2, posicionPortalY27_1, posicionPortalY27_2,
  posicionPortalX28_1, posicionPortalX28_2, posicionPortalY28_1, posicionPortalY28_2,
  posicionPortalX29_1, posicionPortalX29_2, posicionPortalY29_1, posicionPortalY29_2,
  posicionPortalX30_1, posicionPortalX30_2, posicionPortalY30_1, posicionPortalY30_2,
  posicionPortalX31_1, posicionPortalX31_2, posicionPortalY31_1, posicionPortalY31_2,
  posicionPortalX32_1, posicionPortalX32_2, posicionPortalY32_1, posicionPortalY32_2,
  posicionPortalX33_1, posicionPortalX33_2, posicionPortalY33_1, posicionPortalY33_2,
  posicionPortalX34_1, posicionPortalX34_2, posicionPortalY34_1, posicionPortalY34_2,
  posicionPortalX35_1, posicionPortalX35_2, posicionPortalY35_1, posicionPortalY35_2,
  posicionPortalX36_1, posicionPortalX36_2, posicionPortalY36_1, posicionPortalY36_2,
  posicionPortalX37_1, posicionPortalX37_2, posicionPortalY37_1, posicionPortalY37_2,
  posicionPortalX38_1, posicionPortalX38_2, posicionPortalY38_1, posicionPortalY38_2,
  posicionPortalX39_1, posicionPortalX39_2, posicionPortalY39_1, posicionPortalY39_2,
  posicionPortalX40_1, posicionPortalX40_2, posicionPortalY40_1, posicionPortalY40_2,
  posicionPortalX41_1, posicionPortalX41_2, posicionPortalY41_1, posicionPortalY41_2,
  posicionPortalX42_1, posicionPortalX42_2, posicionPortalY42_1, posicionPortalY42_2,
  posicionPortalX43_1, posicionPortalX43_2, posicionPortalY43_1, posicionPortalY43_2,
  posicionPortalX44_1, posicionPortalX44_2, posicionPortalY44_1, posicionPortalY44_2,
  posicionPortalX45_1, posicionPortalX45_2, posicionPortalY45_1, posicionPortalY45_2,
  posicionPortalX46_1, posicionPortalX46_2, posicionPortalY46_1, posicionPortalY46_2,
  posicionPortalX47_1, posicionPortalX47_2, posicionPortalY47_1, posicionPortalY47_2,
  posicionPortalX48_1, posicionPortalX48_2, posicionPortalY48_1, posicionPortalY48_2,
  posicionPortalX49_1, posicionPortalX49_2, posicionPortalY49_1, posicionPortalY49_2,
  posicionPortalX50_1, posicionPortalX50_2, posicionPortalY50_1, posicionPortalY50_2,
  posicionPortalX51_1, posicionPortalX51_2, posicionPortalY51_1, posicionPortalY51_2,
  posicionPortalX52_1, posicionPortalX52_2, posicionPortalY52_1, posicionPortalY52_2 = 0;

int N = 0; // N es X del mapa
int M = 0; // M es Y del mapa

void movimientos() {
  char tecla;
  cin >> tecla;
  if (tecla == 'w') {
    ycopia = y;
    xcopia = x;
    y--;
    movimientosUsados++;
    if (x == posicionPortalX1_1 && y == posicionPortalY1_1 && xcopia == posicionPortalX1_2 && ycopia == posicionPortalY1_2){
        x=xcopia;
        y=ycopia;
    }

    if (x == posicionPortalX1_2 && y == posicionPortalY1_2 && xcopia == posicionPortalX1_1 && ycopia == posicionPortalY1_1){
        x=xcopia;
        y=ycopia;
    }
    
    if (x != posicionPortalX1_1 || y != posicionPortalY1_1 || x != posicionPortalX1_2 || y != posicionPortalY1_2) {
      identificadorPortal1 = 0;
    }

    if (x != posicionPortalX2_1 || y != posicionPortalY2_1 || x != posicionPortalX2_2 || y != posicionPortalY2_2) {
      identificadorPortal2 = 0;
    }

    if (x != posicionPortalX3_1 || y != posicionPortalY3_1 || x != posicionPortalX3_2 || y != posicionPortalY3_2) {
      identificadorPortal3 = 0;
    }

    if (x != posicionPortalX4_1 || y != posicionPortalY4_1 || x != posicionPortalX4_2 || y != posicionPortalY4_2) {
      identificadorPortal4 = 0;
    }
    
    if (x != posicionPortalX5_1 || y != posicionPortalY5_1 || x != posicionPortalX5_2 || y != posicionPortalY5_2) {
      identificadorPortal5 = 0;
    }

    if (x != posicionPortalX6_1 || y != posicionPortalY6_1 || x != posicionPortalX6_2 || y != posicionPortalY6_2) {
      identificadorPortal6 = 0;
    }

    if(x != posicionPortalX7_1 || y != posicionPortalY7_1 || x != posicionPortalX7_2 || y != posicionPortalY7_2) {
      identificadorPortal7 = 0;
    }

    if(x != posicionPortalX8_1 || y != posicionPortalY8_1 || x != posicionPortalX8_2 || y != posicionPortalY8_2) {
      identificadorPortal8 = 0;
    }

    if(x != posicionPortalX9_1 || y != posicionPortalY9_1 || x != posicionPortalX9_2 || y != posicionPortalY9_2) {
      identificadorPortal9 = 0;
    }

    if(x != posicionPortalX10_1 || y != posicionPortalY10_1 || x != posicionPortalX10_2 || y != posicionPortalY10_2) {
      identificadorPortal10 = 0;
    }
  } else if (tecla == 's') {
    ycopia = y;
    xcopia = x;
    y++;
    movimientosUsados++;
    if (x == posicionPortalX1_1 && y == posicionPortalY1_1 && xcopia == posicionPortalX1_2 && ycopia == posicionPortalY1_2){
        x=xcopia;
        y=ycopia;
    }

    if (x == posicionPortalX1_2 && y == posicionPortalY1_2 && xcopia == posicionPortalX1_1 && ycopia == posicionPortalY1_1){
        x=xcopia;
        y=ycopia;
    }

    if (x != posicionPortalX1_1 || y != posicionPortalY1_1 || x != posicionPortalX1_2 || y != posicionPortalY1_2) {
      identificadorPortal1 = 0;
    }

    if (x != posicionPortalX2_1 || y != posicionPortalY2_1 || x != posicionPortalX2_2 || y != posicionPortalY2_2) {
      identificadorPortal2 = 0;
    }

    if (x != posicionPortalX3_1 || y != posicionPortalY3_1 || x != posicionPortalX3_2 || y != posicionPortalY3_2) {
      identificadorPortal3 = 0;
    }

    if (x != posicionPortalX4_1 || y != posicionPortalY4_1 || x != posicionPortalX4_2 || y != posicionPortalY4_2) {
      identificadorPortal4 = 0;
    }
    
    if (x != posicionPortalX5_1 || y != posicionPortalY5_1 || x != posicionPortalX5_2 || y != posicionPortalY5_2) {
      identificadorPortal5 = 0;
    }

    if (x != posicionPortalX6_1 || y != posicionPortalY6_1 || x != posicionPortalX6_2 || y != posicionPortalY6_2) {
      identificadorPortal6 = 0;
    }

    if(x != posicionPortalX7_1 || y != posicionPortalY7_1 || x != posicionPortalX7_2 || y != posicionPortalY7_2) {
      identificadorPortal7 = 0;
    }

    if(x != posicionPortalX8_1 || y != posicionPortalY8_1 || x != posicionPortalX8_2 || y != posicionPortalY8_2) {
      identificadorPortal8 = 0;
    }

    if(x != posicionPortalX9_1 || y != posicionPortalY9_1 || x != posicionPortalX9_2 || y != posicionPortalY9_2) {
      identificadorPortal9 = 0;
    }

    if(x != posicionPortalX10_1 || y != posicionPortalY10_1 || x != posicionPortalX10_2 || y != posicionPortalY10_2) {
      identificadorPortal10 = 0;
    }
  } else if (tecla == 'a') {
    xcopia = x;
    ycopia = y;
    x--;
    movimientosUsados++;
    if (x == posicionPortalX1_1 && y == posicionPortalY1_1 && xcopia == posicionPortalX1_2 && ycopia == posicionPortalY1_2){
        x=xcopia;
        y=ycopia;
    }

    if (x == posicionPortalX1_2 && y == posicionPortalY1_2 && xcopia == posicionPortalX1_1 && ycopia == posicionPortalY1_1){
        x=xcopia;
        y=ycopia;
    }

    if (x != posicionPortalX1_1 || y != posicionPortalY1_1 || x != posicionPortalX1_2 || y != posicionPortalY1_2) {
      identificadorPortal1 = 0;
    }

    if (x != posicionPortalX2_1 || y != posicionPortalY2_1 || x != posicionPortalX2_2 || y != posicionPortalY2_2) {
      identificadorPortal2 = 0;
    }

    if (x != posicionPortalX3_1 || y != posicionPortalY3_1 || x != posicionPortalX3_2 || y != posicionPortalY3_2) {
      identificadorPortal3 = 0;
    }

    if (x != posicionPortalX4_1 || y != posicionPortalY4_1 || x != posicionPortalX4_2 || y != posicionPortalY4_2) {
      identificadorPortal4 = 0;
    }
    
    if (x != posicionPortalX5_1 || y != posicionPortalY5_1 || x != posicionPortalX5_2 || y != posicionPortalY5_2) {
      identificadorPortal5 = 0;
    }

    if (x != posicionPortalX6_1 || y != posicionPortalY6_1 || x != posicionPortalX6_2 || y != posicionPortalY6_2) {
      identificadorPortal6 = 0;
    }

    if(x != posicionPortalX7_1 || y != posicionPortalY7_1 || x != posicionPortalX7_2 || y != posicionPortalY7_2) {
      identificadorPortal7 = 0;
    }

    if(x != posicionPortalX8_1 || y != posicionPortalY8_1 || x != posicionPortalX8_2 || y != posicionPortalY8_2) {
      identificadorPortal8 = 0;
    }

    if(x != posicionPortalX9_1 || y != posicionPortalY9_1 || x != posicionPortalX9_2 || y != posicionPortalY9_2) {
      identificadorPortal9 = 0;
    }

    if(x != posicionPortalX10_1 || y != posicionPortalY10_1 || x != posicionPortalX10_2 || y != posicionPortalY10_2) {
      identificadorPortal10 = 0;
    }
  } else if (tecla == 'd') {
    xcopia = x;
    ycopia = y;
    x++;
    movimientosUsados++;
    if (x == posicionPortalX1_1 && y == posicionPortalY1_1 && xcopia == posicionPortalX1_2 && ycopia == posicionPortalY1_2){
        x=xcopia;
        y=ycopia;
    }

    if (x == posicionPortalX1_2 && y == posicionPortalY1_2 && xcopia == posicionPortalX1_1 && ycopia == posicionPortalY1_1){
        x=xcopia;
        y=ycopia;
    }

    if (x != posicionPortalX1_1 || y != posicionPortalY1_1 || x != posicionPortalX1_2 || y != posicionPortalY1_2) {
      identificadorPortal1 = 0;
    }

    if (x != posicionPortalX2_1 || y != posicionPortalY2_1 || x != posicionPortalX2_2 || y != posicionPortalY2_2) {
      identificadorPortal2 = 0;
    }

    if (x != posicionPortalX3_1 || y != posicionPortalY3_1 || x != posicionPortalX3_2 || y != posicionPortalY3_2) {
      identificadorPortal3 = 0;
    }

    if (x != posicionPortalX4_1 || y != posicionPortalY4_1 || x != posicionPortalX4_2 || y != posicionPortalY4_2) {
      identificadorPortal4 = 0;
    }
    
    if (x != posicionPortalX5_1 || y != posicionPortalY5_1 || x != posicionPortalX5_2 || y != posicionPortalY5_2) {
      identificadorPortal5 = 0;
    }

    if (x != posicionPortalX6_1 || y != posicionPortalY6_1 || x != posicionPortalX6_2 || y != posicionPortalY6_2) {
      identificadorPortal6 = 0;
    }

    if(x != posicionPortalX7_1 || y != posicionPortalY7_1 || x != posicionPortalX7_2 || y != posicionPortalY7_2) {
      identificadorPortal7 = 0;
    }

    if(x != posicionPortalX8_1 || y != posicionPortalY8_1 || x != posicionPortalX8_2 || y != posicionPortalY8_2) {
      identificadorPortal8 = 0;
    }

    if(x != posicionPortalX9_1 || y != posicionPortalY9_1 || x != posicionPortalX9_2 || y != posicionPortalY9_2) {
      identificadorPortal9 = 0;
    }

    if(x != posicionPortalX10_1 || y != posicionPortalY10_1 || x != posicionPortalX10_2 || y != posicionPortalY10_2) {
      identificadorPortal10 = 0;
    }
  }
}

void detectar_elemento(char elemento, int inputx, int inputy, int vida) {
  switch (elemento) {
  case 'E':
    break;
  case 'P':
    if (x == posicionPortalX1_1 && y == posicionPortalY1_1 && identificadorPortal1 == 0) {
      x = posicionPortalX1_2;
      y = posicionPortalY1_2;
      identificadorPortal1 = 1;
    }

    if (x == posicionPortalX1_2 && y == posicionPortalY1_2 && identificadorPortal1 == 0) {
      x = posicionPortalX1_1;
      y = posicionPortalY1_1;
      identificadorPortal1 = 1;
    }

    if (x == posicionPortalX2_1 && y == posicionPortalY2_1 && identificadorPortal2 == 0) {
      x = posicionPortalX2_2;
      y = posicionPortalY2_2;
      identificadorPortal2 = 1;
    }

    if (x == posicionPortalX2_2 && y == posicionPortalY2_2 && identificadorPortal2 == 0) {
      x = posicionPortalX2_1;
      y = posicionPortalY2_1;
      identificadorPortal2 = 1;
    }

    if (x == posicionPortalX3_1 && y == posicionPortalY3_1 && identificadorPortal3 == 0) {
      x = posicionPortalX3_2;
      y = posicionPortalY3_2;
      identificadorPortal3 = 1;
    }

    if (x == posicionPortalX3_2 && y == posicionPortalY3_2 && identificadorPortal3 == 0) {
      x = posicionPortalX3_1;
      y = posicionPortalY3_1;
      identificadorPortal3 = 1;
    }

    if (x == posicionPortalX4_1 && y == posicionPortalY4_1 && identificadorPortal4 == 0) {
      x = posicionPortalX4_2;
      y = posicionPortalY4_2;
      identificadorPortal4 = 1;
    }

    if (x == posicionPortalX4_2 && y == posicionPortalY4_2 && identificadorPortal4 == 0) {
      x = posicionPortalX4_1;
      y = posicionPortalY4_1;
      identificadorPortal4 = 1;
    }

    if (x == posicionPortalX5_1 && y == posicionPortalY5_1 && identificadorPortal5 == 0) {
      x = posicionPortalX5_2;
      y = posicionPortalY5_2;
      identificadorPortal5 = 1;
    }

    if (x == posicionPortalX5_2 && y == posicionPortalY5_2 && identificadorPortal5 == 0) {
      x = posicionPortalX5_1;
      y = posicionPortalY5_1;
      identificadorPortal5 = 1;
    }

    if (x == posicionPortalX6_1 && y == posicionPortalY6_1 && identificadorPortal6 == 0) {
      x = posicionPortalX6_2;
      y = posicionPortalY6_2;
      identificadorPortal6 = 1;
    }

    if (x == posicionPortalX6_2 && y == posicionPortalY6_2 && identificadorPortal6 == 0) {
      x = posicionPortalX6_1;
      y = posicionPortalY6_1;
      identificadorPortal6 = 1;
    }

    if (x == posicionPortalX7_1 && y == posicionPortalY7_1 && identificadorPortal7 == 0) {
      x = posicionPortalX7_2;
      y = posicionPortalY7_2;
      identificadorPortal7 = 1;
    }

    if (x == posicionPortalX7_2 && y == posicionPortalY7_2 && identificadorPortal7 == 0) {
      x = posicionPortalX7_1;
      y = posicionPortalY7_1;
      identificadorPortal7 = 1;
    }

    if (x == posicionPortalX8_1 && y == posicionPortalY8_1 && identificadorPortal8 == 0) {
      x = posicionPortalX8_2;
      y = posicionPortalY8_2;
      identificadorPortal8 = 1;
    }

    if (x == posicionPortalX8_2 && y == posicionPortalY8_2 && identificadorPortal8 == 0) {
      x = posicionPortalX8_1;
      y = posicionPortalY8_1;
      identificadorPortal8 = 1;
    }

    if (x == posicionPortalX9_1 && y == posicionPortalY9_1 && identificadorPortal9 == 0) {
      x = posicionPortalX9_2;
      y = posicionPortalY9_2;
      identificadorPortal9 = 1;
    }

    if (x == posicionPortalX9_2 && y == posicionPortalY9_2 && identificadorPortal9 == 0) {
      x = posicionPortalX9_1;
      y = posicionPortalY9_1;
      identificadorPortal9 = 1;
    }

    if (x == posicionPortalX10_1 && y == posicionPortalY10_1 && identificadorPortal10 == 0) {
      x = posicionPortalX10_2;
      y = posicionPortalY10_2;
      identificadorPortal10 = 1;
    }

    if (x == posicionPortalX10_2 && y == posicionPortalY10_2 && identificadorPortal10 == 0) {
      x = posicionPortalX10_1;
      y = posicionPortalY10_1;
      identificadorPortal10 = 1;
    }
    break;
  case 'T':
    L2 = L;
    for (int index = 0; index <= contadorTesoros; index++) {
      if (identificadorTesoro1 == index && posicionTesoro1_1 == 0 &&
          posicionTesoro1_2 == 0) {

        if (x == posicionTesoro1_1 && y == posicionTesoro1_2) {
          break;
        }

        if (x == posicionTesoro2_1 && y == posicionTesoro2_2) {
          break;
        }

        if (x == posicionTesoro3_1 && y == posicionTesoro3_2) {
          break;
        }

        if (x == posicionTesoro4_1 && y == posicionTesoro4_2) {
          break;
        }

        if (x == posicionTesoro5_1 && y == posicionTesoro5_2) {
          break;
        }

        if (x == posicionTesoro6_1 && y == posicionTesoro6_2) {
          break;
        }

        if (x == posicionTesoro7_1 && y == posicionTesoro7_2) {
          break;
        }

        if (x == posicionTesoro8_1 && y == posicionTesoro8_2) {
          break;
        }

        if (x == posicionTesoro9_1 && y == posicionTesoro9_2) {
          break;
        }

        if (x == posicionTesoro10_1 && y == posicionTesoro10_2) {
          break;
        }

        L += 20;
        cantidadTesoros++;
        (L >= L2) ? L = L2 : L;
        identificadorTesoro1 = 11;
        posicionTesoro1_1 = inputx;
        posicionTesoro1_2 = inputy;
        break;
      } else if (identificadorTesoro2 == index && posicionTesoro2_1 == 0 &&
                 posicionTesoro2_2 == 0) {

        if (x == posicionTesoro1_1 && y == posicionTesoro1_2) {
          break;
        }

        if (x == posicionTesoro2_1 && y == posicionTesoro2_2) {
          break;
        }

        if (x == posicionTesoro3_1 && y == posicionTesoro3_2) {
          break;
        }

        if (x == posicionTesoro4_1 && y == posicionTesoro4_2) {
          break;
        }

        if (x == posicionTesoro5_1 && y == posicionTesoro5_2) {
          break;
        }

        if (x == posicionTesoro6_1 && y == posicionTesoro6_2) {
          break;
        }

        if (x == posicionTesoro7_1 && y == posicionTesoro7_2) {
          break;
        }

        if (x == posicionTesoro8_1 && y == posicionTesoro8_2) {
          break;
        }

        if (x == posicionTesoro9_1 && y == posicionTesoro9_2) {
          break;
        }

        if (x == posicionTesoro10_1 && y == posicionTesoro10_2) {
          break;
        }

        identificadorTesoro2 = 12;
        posicionTesoro2_1 = inputx;
        posicionTesoro2_2 = inputy;

        L += 20;
        cantidadTesoros++;
        (L >= L2) ? L = L2 : L;

        break;
      } else if (identificadorTesoro3 == index && posicionTesoro3_1 == 0 &&
                 posicionTesoro3_2 == 0) {
        if (x == posicionTesoro1_1 && y == posicionTesoro1_2) {
          break;
        }

        if (x == posicionTesoro2_1 && y == posicionTesoro2_2) {
          break;
        }

        if (x == posicionTesoro3_1 && y == posicionTesoro3_2) {
          break;
        }

        if (x == posicionTesoro4_1 && y == posicionTesoro4_2) {
          break;
        }

        if (x == posicionTesoro5_1 && y == posicionTesoro5_2) {
          break;
        }

        if (x == posicionTesoro6_1 && y == posicionTesoro6_2) {
          break;
        }

        if (x == posicionTesoro7_1 && y == posicionTesoro7_2) {
          break;
        }

        if (x == posicionTesoro8_1 && y == posicionTesoro8_2) {
          break;
        }

        if (x == posicionTesoro9_1 && y == posicionTesoro9_2) {
          break;
        }

        if (x == posicionTesoro10_1 && y == posicionTesoro10_2) {
          break;
        }

        L += 20;
        cantidadTesoros++;
        (L >= L2) ? L = L2 : L;
        identificadorTesoro3 = 13;

        posicionTesoro3_1 = inputx;
        posicionTesoro3_2 = inputy;

        break;
      } else if (identificadorTesoro4 == index && posicionTesoro4_1 == 0 &&
                 posicionTesoro4_2 == 0) {
        if (x == posicionTesoro1_1 && y == posicionTesoro1_2) {
          break;
        }

        if (x == posicionTesoro2_1 && y == posicionTesoro2_2) {
          break;
        }

        if (x == posicionTesoro3_1 && y == posicionTesoro3_2) {
          break;
        }

        if (x == posicionTesoro4_1 && y == posicionTesoro4_2) {
          break;
        }

        if (x == posicionTesoro5_1 && y == posicionTesoro5_2) {
          break;
        }

        if (x == posicionTesoro6_1 && y == posicionTesoro6_2) {
          break;
        }

        if (x == posicionTesoro7_1 && y == posicionTesoro7_2) {
          break;
        }

        if (x == posicionTesoro8_1 && y == posicionTesoro8_2) {
          break;
        }

        if (x == posicionTesoro9_1 && y == posicionTesoro9_2) {
          break;
        }

        if (x == posicionTesoro10_1 && y == posicionTesoro10_2) {
          break;
        }

        L += 20;
        cantidadTesoros++;
        (L >= L2) ? L = L2 : L;
        identificadorTesoro4 = 14;

        posicionTesoro4_1 = inputx;
        posicionTesoro4_2 = inputy;
        break;
      } else if (identificadorTesoro5 == index && posicionTesoro5_1 == 0 &&
                 posicionTesoro5_2 == 0) {

        if (x == posicionTesoro1_1 && y == posicionTesoro1_2) {
          break;
        }

        if (x == posicionTesoro2_1 && y == posicionTesoro2_2) {
          break;
        }

        if (x == posicionTesoro3_1 && y == posicionTesoro3_2) {
          break;
        }

        if (x == posicionTesoro4_1 && y == posicionTesoro4_2) {
          break;
        }

        if (x == posicionTesoro5_1 && y == posicionTesoro5_2) {
          break;
        }

        if (x == posicionTesoro6_1 && y == posicionTesoro6_2) {
          break;
        }

        if (x == posicionTesoro7_1 && y == posicionTesoro7_2) {
          break;
        }

        if (x == posicionTesoro8_1 && y == posicionTesoro8_2) {
          break;
        }

        if (x == posicionTesoro9_1 && y == posicionTesoro9_2) {
          break;
        }

        if (x == posicionTesoro10_1 && y == posicionTesoro10_2) {
          break;
        }

        L += 20;
        cantidadTesoros++;
        (L >= L2) ? L = L2 : L;
        identificadorTesoro5 = 15;

        posicionTesoro5_1 = inputx;
        posicionTesoro5_2 = inputy;

        break;
      } else if (identificadorTesoro6 == index && posicionTesoro6_1 == 0 &&
                 posicionTesoro6_2 == 0) {

        if (x == posicionTesoro1_1 && y == posicionTesoro1_2) {
          break;
        }

        if (x == posicionTesoro2_1 && y == posicionTesoro2_2) {
          break;
        }

        if (x == posicionTesoro3_1 && y == posicionTesoro3_2) {
          break;
        }

        if (x == posicionTesoro4_1 && y == posicionTesoro4_2) {
          break;
        }

        if (x == posicionTesoro5_1 && y == posicionTesoro5_2) {
          break;
        }

        if (x == posicionTesoro6_1 && y == posicionTesoro6_2) {
          break;
        }

        if (x == posicionTesoro7_1 && y == posicionTesoro7_2) {
          break;
        }

        if (x == posicionTesoro8_1 && y == posicionTesoro8_2) {
          break;
        }

        if (x == posicionTesoro9_1 && y == posicionTesoro9_2) {
          break;
        }

        if (x == posicionTesoro10_1 && y == posicionTesoro10_2) {
          break;
        }

        L += 20;
        cantidadTesoros++;
        (L >= L2) ? L = L2 : L;
        identificadorTesoro6 = 16;

        posicionTesoro6_1 = inputx;
        posicionTesoro6_2 = inputy;

        break;
      } else if (identificadorTesoro7 == index && posicionTesoro7_1 == 0 &&
                 posicionTesoro7_2 == 0) {

        if (x == posicionTesoro1_1 && y == posicionTesoro1_2) {
          break;
        }

        if (x == posicionTesoro2_1 && y == posicionTesoro2_2) {
          break;
        }

        if (x == posicionTesoro3_1 && y == posicionTesoro3_2) {
          break;
        }

        if (x == posicionTesoro4_1 && y == posicionTesoro4_2) {
          break;
        }

        if (x == posicionTesoro5_1 && y == posicionTesoro5_2) {
          break;
        }

        if (x == posicionTesoro6_1 && y == posicionTesoro6_2) {
          break;
        }

        if (x == posicionTesoro7_1 && y == posicionTesoro7_2) {
          break;
        }

        if (x == posicionTesoro8_1 && y == posicionTesoro8_2) {
          break;
        }

        if (x == posicionTesoro9_1 && y == posicionTesoro9_2) {
          break;
        }

        if (x == posicionTesoro10_1 && y == posicionTesoro10_2) {
          break;
        }

        L += 20;
        cantidadTesoros++;
        (L >= L2) ? L = L2 : L;
        identificadorTesoro7 = 17;

        posicionTesoro7_1 = inputx;
        posicionTesoro7_2 = inputy;

        break;
      } else if (identificadorTesoro8 == index && posicionTesoro8_1 == 0 &&
                 posicionTesoro8_2 == 0) {

        if (x == posicionTesoro1_1 && y == posicionTesoro1_2) {
          break;
        }

        if (x == posicionTesoro2_1 && y == posicionTesoro2_2) {
          break;
        }

        if (x == posicionTesoro3_1 && y == posicionTesoro3_2) {
          break;
        }

        if (x == posicionTesoro4_1 && y == posicionTesoro4_2) {
          break;
        }

        if (x == posicionTesoro5_1 && y == posicionTesoro5_2) {
          break;
        }

        if (x == posicionTesoro6_1 && y == posicionTesoro6_2) {
          break;
        }

        if (x == posicionTesoro7_1 && y == posicionTesoro7_2) {
          break;
        }

        if (x == posicionTesoro8_1 && y == posicionTesoro8_2) {
          break;
        }

        if (x == posicionTesoro9_1 && y == posicionTesoro9_2) {
          break;
        }

        if (x == posicionTesoro10_1 && y == posicionTesoro10_2) {
          break;
        }

        L += 20;
        cantidadTesoros++;
        (L >= L2) ? L = L2 : L;
        identificadorTesoro8 = 18;

        posicionTesoro8_1 = inputx;
        posicionTesoro8_2 = inputy;

        break;
      } else if (identificadorTesoro9 == index && posicionTesoro9_1 == 0 &&
                 posicionTesoro9_2 == 0) {

        if (x == posicionTesoro1_1 && y == posicionTesoro1_2) {
          break;
        }

        if (x == posicionTesoro2_1 && y == posicionTesoro2_2) {
          break;
        }

        if (x == posicionTesoro3_1 && y == posicionTesoro3_2) {
          break;
        }

        if (x == posicionTesoro4_1 && y == posicionTesoro4_2) {
          break;
        }

        if (x == posicionTesoro5_1 && y == posicionTesoro5_2) {
          break;
        }

        if (x == posicionTesoro6_1 && y == posicionTesoro6_2) {
          break;
        }

        if (x == posicionTesoro7_1 && y == posicionTesoro7_2) {
          break;
        }

        if (x == posicionTesoro8_1 && y == posicionTesoro8_2) {
          break;
        }

        if (x == posicionTesoro9_1 && y == posicionTesoro9_2) {
          break;
        }

        if (x == posicionTesoro10_1 && y == posicionTesoro10_2) {
          break;
        }

        L += 20;
        cantidadTesoros++;
        (L >= L2) ? L = L2 : L;
        identificadorTesoro9 = 19;

        posicionTesoro9_1 = inputx;
        posicionTesoro9_2 = inputy;
        break;
      } else if (identificadorTesoro10 == index && posicionTesoro10_1 == 0 &&
                 posicionTesoro10_2 == 0) {

        if (x == posicionTesoro1_1 && y == posicionTesoro1_2) {
          break;
        }

        if (x == posicionTesoro2_1 && y == posicionTesoro2_2) {
          break;
        }

        if (x == posicionTesoro3_1 && y == posicionTesoro3_2) {
          break;
        }

        if (x == posicionTesoro4_1 && y == posicionTesoro4_2) {
          break;
        }

        if (x == posicionTesoro5_1 && y == posicionTesoro5_2) {
          break;
        }

        if (x == posicionTesoro6_1 && y == posicionTesoro6_2) {
          break;
        }

        if (x == posicionTesoro7_1 && y == posicionTesoro7_2) {
          break;
        }

        if (x == posicionTesoro8_1 && y == posicionTesoro8_2) {
          break;
        }

        if (x == posicionTesoro9_1 && y == posicionTesoro9_2) {
          break;
        }

        if (x == posicionTesoro10_1 && y == posicionTesoro10_2) {
          break;
        }

        L += 20;
        cantidadTesoros++;
        (L >= L2) ? L = L2 : L;
        identificadorTesoro10 = 2;

        posicionTesoro10_1 = inputx;
        posicionTesoro10_2 = inputy;

        break;
      }

      if (cantidadTesoros == contadorTesoros) {
        cantidadTesoros = contadorTesoros;
      }
    }
    break;
  case 'X':
    L -= 10;

    for (int index = 0; index <= contadorTrampas; index++) {
      if (identificadorTrampa1 == index && posicionTrampa1_1 == 0 &&
          posicionTrampa1_2 == 0) {

        if (x == posicionTrampa1_1 && y == posicionTrampa1_2) {
          break;
        }

        if (x == posicionTrampa2_1 && y == posicionTrampa2_2) {
          break;
        }

        if (x == posicionTrampa3_1 && y == posicionTrampa3_2) {
          break;
        }

        if (x == posicionTrampa4_1 && y == posicionTrampa4_2) {
          break;
        }

        if (x == posicionTrampa5_1 && y == posicionTrampa5_2) {
          break;
        }

        if (x == posicionTrampa6_1 && y == posicionTrampa6_2) {
          break;
        }

        if (x == posicionTrampa7_1 && y == posicionTrampa7_2) {
          break;
        }

        if (x == posicionTrampa8_1 && y == posicionTrampa8_2) {
          break;
        }

        if (x == posicionTrampa9_1 && y == posicionTrampa9_2) {
          break;
        }

        if (x == posicionTrampa10_1 && y == posicionTrampa10_2) {
          break;
        }

        cantidadTrampas++;
        identificadorTrampa1 = 11;
        posicionTrampa1_1 = inputx;
        posicionTrampa1_2 = inputy;

        break;
      } else if (identificadorTrampa2 == index && posicionTrampa2_1 == 0 &&
                 posicionTrampa2_2 == 0) {

        if (x == posicionTrampa1_1 && y == posicionTrampa1_2) {
          break;
        }

        if (x == posicionTrampa2_1 && y == posicionTrampa2_2) {
          break;
        }

        if (x == posicionTrampa3_1 && y == posicionTrampa3_2) {
          break;
        }

        if (x == posicionTrampa4_1 && y == posicionTrampa4_2) {
          break;
        }

        if (x == posicionTrampa5_1 && y == posicionTrampa5_2) {
          break;
        }

        if (x == posicionTrampa6_1 && y == posicionTrampa6_2) {
          break;
        }

        if (x == posicionTrampa7_1 && y == posicionTrampa7_2) {
          break;
        }

        if (x == posicionTrampa8_1 && y == posicionTrampa8_2) {
          break;
        }

        if (x == posicionTrampa9_1 && y == posicionTrampa9_2) {
          break;
        }

        if (x == posicionTrampa10_1 && y == posicionTrampa10_2) {
          break;
        }

        identificadorTrampa2 = 12;
        posicionTrampa2_1 = inputx;
        posicionTrampa2_2 = inputy;

        cantidadTrampas++;

        break;
      } else if (identificadorTrampa3 == index && posicionTrampa3_1 == 0 &&
                 posicionTrampa3_2 == 0) {
        if (x == posicionTrampa1_1 && y == posicionTrampa1_2) {
          break;
        }

        if (x == posicionTrampa2_1 && y == posicionTrampa2_2) {
          break;
        }

        if (x == posicionTrampa3_1 && y == posicionTrampa3_2) {
          break;
        }

        if (x == posicionTrampa4_1 && y == posicionTrampa4_2) {
          break;
        }

        if (x == posicionTrampa5_1 && y == posicionTrampa5_2) {
          break;
        }

        if (x == posicionTrampa6_1 && y == posicionTrampa6_2) {
          break;
        }

        if (x == posicionTrampa7_1 && y == posicionTrampa7_2) {
          break;
        }

        if (x == posicionTrampa8_1 && y == posicionTrampa8_2) {
          break;
        }

        if (x == posicionTrampa9_1 && y == posicionTrampa9_2) {
          break;
        }

        if (x == posicionTrampa10_1 && y == posicionTrampa10_2) {
          break;
        }

        cantidadTrampas++;
        identificadorTrampa3 = 13;

        posicionTrampa3_1 = inputx;
        posicionTrampa3_2 = inputy;

        break;
      } else if (identificadorTrampa4 == index && posicionTrampa4_1 == 0 &&
                 posicionTrampa4_2 == 0) {
        if (x == posicionTrampa1_1 && y == posicionTrampa1_2) {
          break;
        }

        if (x == posicionTrampa2_1 && y == posicionTrampa2_2) {
          break;
        }

        if (x == posicionTrampa3_1 && y == posicionTrampa3_2) {
          break;
        }

        if (x == posicionTrampa4_1 && y == posicionTrampa4_2) {
          break;
        }

        if (x == posicionTrampa5_1 && y == posicionTrampa5_2) {
          break;
        }

        if (x == posicionTrampa6_1 && y == posicionTrampa6_2) {
          break;
        }

        if (x == posicionTrampa7_1 && y == posicionTrampa7_2) {
          break;
        }

        if (x == posicionTrampa8_1 && y == posicionTrampa8_2) {
          break;
        }

        if (x == posicionTrampa9_1 && y == posicionTrampa9_2) {
          break;
        }

        if (x == posicionTrampa10_1 && y == posicionTrampa10_2) {
          break;
        }

        cantidadTrampas++;
        identificadorTrampa4 = 14;

        posicionTrampa4_1 = inputx;
        posicionTrampa4_2 = inputy;

        break;
      } else if (identificadorTrampa5 == index && posicionTrampa5_1 == 0 &&
                 posicionTrampa5_2 == 0) {

        if (x == posicionTrampa1_1 && y == posicionTrampa1_2) {
          break;
        }

        if (x == posicionTrampa2_1 && y == posicionTrampa2_2) {
          break;
        }

        if (x == posicionTrampa3_1 && y == posicionTrampa3_2) {
          break;
        }

        if (x == posicionTrampa4_1 && y == posicionTrampa4_2) {
          break;
        }

        if (x == posicionTrampa5_1 && y == posicionTrampa5_2) {
          break;
        }

        if (x == posicionTrampa6_1 && y == posicionTrampa6_2) {
          break;
        }

        if (x == posicionTrampa7_1 && y == posicionTrampa7_2) {
          break;
        }

        if (x == posicionTrampa8_1 && y == posicionTrampa8_2) {
          break;
        }

        if (x == posicionTrampa9_1 && y == posicionTrampa9_2) {
          break;
        }

        if (x == posicionTrampa10_1 && y == posicionTrampa10_2) {
          break;
        }

        cantidadTrampas++;

        identificadorTrampa5 = 15;

        posicionTrampa5_1 = inputx;
        posicionTrampa5_2 = inputy;

        break;
      } else if (identificadorTrampa6 == index && posicionTrampa6_1 == 0 &&
                 posicionTrampa6_2 == 0) {

        if (x == posicionTrampa1_1 && y == posicionTrampa1_2) {
          break;
        }

        if (x == posicionTrampa2_1 && y == posicionTrampa2_2) {
          break;
        }

        if (x == posicionTrampa3_1 && y == posicionTrampa3_2) {
          break;
        }

        if (x == posicionTrampa4_1 && y == posicionTrampa4_2) {
          break;
        }

        if (x == posicionTrampa5_1 && y == posicionTrampa5_2) {
          break;
        }

        if (x == posicionTrampa6_1 && y == posicionTrampa6_2) {
          break;
        }

        if (x == posicionTrampa7_1 && y == posicionTrampa7_2) {
          break;
        }

        if (x == posicionTrampa8_1 && y == posicionTrampa8_2) {
          break;
        }

        if (x == posicionTrampa9_1 && y == posicionTrampa9_2) {
          break;
        }

        if (x == posicionTrampa10_1 && y == posicionTrampa10_2) {
          break;
        }

        cantidadTrampas++;
        identificadorTrampa6 = 16;

        posicionTrampa6_1 = inputx;
        posicionTrampa6_2 = inputy;

        break;
      } else if (identificadorTrampa7 == index && posicionTrampa7_1 == 0 &&
                 posicionTrampa7_2 == 0) {

        if (x == posicionTrampa1_1 && y == posicionTrampa1_2) {
          break;
        }

        if (x == posicionTrampa2_1 && y == posicionTrampa2_2) {
          break;
        }

        if (x == posicionTrampa3_1 && y == posicionTrampa3_2) {
          break;
        }

        if (x == posicionTrampa4_1 && y == posicionTrampa4_2) {
          break;
        }

        if (x == posicionTrampa5_1 && y == posicionTrampa5_2) {
          break;
        }

        if (x == posicionTrampa6_1 && y == posicionTrampa6_2) {
          break;
        }

        if (x == posicionTrampa7_1 && y == posicionTrampa7_2) {
          break;
        }

        if (x == posicionTrampa8_1 && y == posicionTrampa8_2) {
          break;
        }

        if (x == posicionTrampa9_1 && y == posicionTrampa9_2) {
          break;
        }

        if (x == posicionTrampa10_1 && y == posicionTrampa10_2) {
          break;
        }
        cantidadTrampas++;
        identificadorTrampa7 = 17;

        posicionTrampa7_1 = inputx;
        posicionTrampa7_2 = inputy;

        break;
      } else if (identificadorTrampa8 == index && posicionTrampa8_1 == 0 &&
                 posicionTrampa8_2 == 0) {

        if (x == posicionTrampa1_1 && y == posicionTrampa1_2) {
          break;
        }

        if (x == posicionTrampa2_1 && y == posicionTrampa2_2) {
          break;
        }

        if (x == posicionTrampa3_1 && y == posicionTrampa3_2) {
          break;
        }

        if (x == posicionTrampa4_1 && y == posicionTrampa4_2) {
          break;
        }

        if (x == posicionTrampa5_1 && y == posicionTrampa5_2) {
          break;
        }

        if (x == posicionTrampa6_1 && y == posicionTrampa6_2) {
          break;
        }

        if (x == posicionTrampa7_1 && y == posicionTrampa7_2) {
          break;
        }

        if (x == posicionTrampa8_1 && y == posicionTrampa8_2) {
          break;
        }

        if (x == posicionTrampa9_1 && y == posicionTrampa9_2) {
          break;
        }

        if (x == posicionTrampa10_1 && y == posicionTrampa10_2) {
          break;
        }

        cantidadTrampas++;
        identificadorTrampa8 = 18;

        posicionTrampa8_1 = inputx;
        posicionTrampa8_2 = inputy;

        break;
      } else if (identificadorTrampa9 == index && posicionTrampa9_1 == 0 &&
                 posicionTrampa9_2 == 0) {

        if (x == posicionTrampa1_1 && y == posicionTrampa1_2) {
          break;
        }

        if (x == posicionTrampa2_1 && y == posicionTrampa2_2) {
          break;
        }

        if (x == posicionTrampa3_1 && y == posicionTrampa3_2) {
          break;
        }

        if (x == posicionTrampa4_1 && y == posicionTrampa4_2) {
          break;
        }

        if (x == posicionTrampa5_1 && y == posicionTrampa5_2) {
          break;
        }

        if (x == posicionTrampa6_1 && y == posicionTrampa6_2) {
          break;
        }

        if (x == posicionTrampa7_1 && y == posicionTrampa7_2) {
          break;
        }

        if (x == posicionTrampa8_1 && y == posicionTrampa8_2) {
          break;
        }

        if (x == posicionTrampa9_1 && y == posicionTrampa9_2) {
          break;
        }

        if (x == posicionTrampa10_1 && y == posicionTrampa10_2) {
          break;
        }

        cantidadTrampas++;
        identificadorTrampa9 = 19;

        posicionTrampa9_1 = inputx;
        posicionTrampa9_2 = inputy;
        break;
      } else if (identificadorTesoro10 == index && posicionTesoro10_1 == 0 &&
                 posicionTesoro10_2 == 0) {

        if (x == posicionTrampa1_1 && y == posicionTrampa1_2) {
          break;
        }

        if (x == posicionTrampa2_1 && y == posicionTrampa2_2) {
          break;
        }

        if (x == posicionTrampa3_1 && y == posicionTrampa3_2) {
          break;
        }

        if (x == posicionTrampa4_1 && y == posicionTrampa4_2) {
          break;
        }

        if (x == posicionTrampa5_1 && y == posicionTrampa5_2) {
          break;
        }

        if (x == posicionTrampa6_1 && y == posicionTrampa6_2) {
          break;
        }

        if (x == posicionTrampa7_1 && y == posicionTrampa7_2) {
          break;
        }

        if (x == posicionTrampa8_1 && y == posicionTrampa8_2) {
          break;
        }

        if (x == posicionTrampa9_1 && y == posicionTrampa9_2) {
          break;
        }

        if (x == posicionTrampa10_1 && y == posicionTrampa10_2) {
          break;
        }

        cantidadTrampas++;

        identificadorTrampa10 = 2;

        posicionTrampa10_1 = inputx;
        posicionTrampa10_2 = inputy;

        break;
      }

      if (cantidadTrampas == contadorTrampas) {
        cantidadTrampas = contadorTrampas;
      }
    }
    break;

    if (cantidadTrampas == contadorTrampas) {
      cantidadTrampas = contadorTrampas;
    }

    if (L <= 0) {
      cout << "TESOROS:" << cantidadTesoros << endl;
      cout << "TRAMPAS:" << cantidadTrampas << endl;
      cout << "VIDA:" << L << endl;
      cout << "MUERTO" << endl;
      exit(0);
      break;
    }

    break;
  case '#':
    yarriba = y--;
    yabajo = y++;
    xizquierda = x--;
    xderecha = x++;
    if (ycopia == yarriba) {
      y = ycopia;
      x = xcopia;
    } else if (ycopia == yabajo) {
      y = ycopia;
      x = xcopia;
    } else if (xcopia == xizquierda) {
      x = xcopia;
      y = ycopia;
    } else if (xcopia == xderecha) {
      x = xcopia;
      y = ycopia;
    }
    cout << "Movimiento bloqueado" << endl;
    break;
  case 'S':
    if (cantidadTesoros == contadorTesoros) {
      cout << "TESOROS:" << cantidadTesoros << endl;
      cout << "TRAMPAS:" << cantidadTrampas << endl;
      cout << "VIDA:" << L << endl;
      cout << "SORPRENDENTE" << endl;
      exit(0);
      break;
    } else {
      cout << "TESOROS:" << cantidadTesoros << endl;
      cout << "TRAMPAS:" << cantidadTrampas << endl;
      cout << "VIDA:" << L << endl;
      cout << "LOGRADO" << endl;
      exit(0);
      break;
    }
    break;
  }
}

void detectar_elemento_anterior(char elemento, int x, int y, int inputx,
                                int inputy, int vida) {
  switch (elemento) {
  case 'E':
    break;
  case 'P':
    break;
  case 'T':
    break;
  case 'X':
    break;
  case '#':
    break;
  case 'S':
    break;
  }
}

void detectar_posicion(int inputx, int inputy, int elemento, int vida) {
  if (x == inputx && y == inputy) {
    detectar_elemento(elemento, inputx, inputy, vida);
  }
}

void detectar_posicion_anterior(int x, int y, int inputx, int inputy,
                                int elemento, int vida) {
  if (x == inputx && y == inputy) {
    detectar_elemento_anterior(elemento, x, y, inputx, inputy, vida);
  }
}

int main() {
  char c = 'O';

  int N = 0; // N es X del mapa
  int M = 0; // M es Y del mapa

  char letra;

  char elem1, elem2, elem3, elem4, elem5, elem6, elem7, elem8, elem9, elem10,
      elem11, elem12, elem13, elem14, elem15, elem16, elem17, elem18, elem19,
      elem20, elem21, elem22, elem23, elem24, elem25, elem26, elem27, elem28,
      elem29, elem30, elem31, elem32, elem33, elem34, elem35, elem36, elem37, elem38, elem39,
      elem40, elem41, elem42, elem43, elem44, elem45, elem46, elem47, elem48,
      elem49, elem50, elem51, elem52, elem53, elem54, elem55, elem56, elem57,
      elem58, elem59, elem60, elem61, elem62, elem63, elem64, elem65, elem66,
      elem67, elem68, elem69, elem70, elem71, elem72, elem73, elem74, elem75,
      elem76, elem77, elem78, elem79, elem80, elem81, elem82, elem83, elem84;

  int inputx1, inputy1, inputx2, inputy2, inputx3, inputy3, inputx4, inputy4,
      inputx5, inputy5, inputx6, inputy6, inputx7, inputy7, inputx8, inputy8,
      inputx9, inputy9, inputx10, inputy10, inputx11, inputy11, inputx12,
      inputy12, inputx13, inputy13, inputx14, inputy14, inputx15, inputy15;
  int inputx16, inputy16, inputx17, inputy17, inputx18, inputy18, inputx19,
      inputy19, inputx20, inputy20, inputx21, inputy21, inputx22, inputy22,
      inputx23, inputy23, inputx24, inputy24, inputx25, inputy25, inputx26,
      inputy26, inputx27, inputy27, inputx28, inputy28, inputx29, inputy29,
      inputx30, inputy30;
  int inputx31, inputy31, inputx32, inputy32, inputx33, inputy33, inputx34,
      inputy34, inputx35, inputy35, inputx36, inputy36, inputx37, inputy37,
      inputx38, inputy38, inputx39, inputy39, inputx40, inputy40, inputx41,
      inputy41, inputx42, inputy42, inputx43, inputy43, inputx44, inputy44,
      inputx45, inputy45;
  int inputx46, inputy46, inputx47, inputy47, inputx48, inputy48, inputx49,
      inputy49, inputx50, inputy50, inputx51, inputy51, inputx52, inputy52,
      inputx53, inputy53, inputx54, inputy54, inputx55, inputy55, inputx56, inputy56,
      inputx57, inputy57, inputx58, inputy58, inputx59, inputy59, inputx60, inputy60,
      inputx61, inputy61, inputx62, inputy62, inputx63, inputy63, inputx64, inputy64,
      inputx65, inputy65, inputx66, inputy66, inputx67, inputy67, inputx68, inputy68,
      inputx69, inputy69, inputx70, inputy70, inputx71, inputy71, inputx72, inputy72,
      inputx73, inputy73, inputx74, inputy74, inputx75, inputy75, inputx76, inputy76,
      inputx77, inputy77, inputx78, inputy78, inputx79, inputy79, inputx80, inputy80,
      inputx81, inputy81, inputx82, inputy82, inputx83, inputy83, inputx84, inputy84;

  cin >> L;
  int L2 = L;
  cin >> N;
  cin >> M;
  cin >> cantidad_elementos;

  char elemEntrada;
  int inputEntradaX, inputEntradaY;

  int x2, y2;

  int contadorElementos = 0;

  for (int i = 0; i < cantidad_elementos; i++) {
    int inputx, inputy;
    int inputPortalx, inputPortaly;
    char inputLetra;
    cin >> inputLetra >> inputx >> inputy;

    if (inputLetra == 'E') {
      elemEntrada = inputLetra;
      x = inputx;
      y = inputy;
      xcopia = inputx;
      ycopia = inputy;
    }

    if (inputLetra == 'T') {
      contadorTesoros++;
      if (contadorTesoros == 1) {
        identificadorTesoro1 = 0;
      } else if (contadorTesoros == 2) {
        identificadorTesoro2 = 1;
      } else if (contadorTesoros == 3) {
        identificadorTesoro3 = 2;
      } else if (contadorTesoros == 4) {
        identificadorTesoro4 = 3;
      } else if (contadorTesoros == 5) {
        identificadorTesoro5 = 4;
      } else if (contadorTesoros == 6) {
        identificadorTesoro6 = 5;
      } else if (contadorTesoros == 7) {
        identificadorTesoro7 = 6;
      } else if (contadorTesoros == 8) {
        identificadorTesoro8 = 7;
      } else if (contadorTesoros == 9) {
        identificadorTesoro9 = 8;
      } else if (contadorTesoros == 10) {
        identificadorTesoro10 = 9;
      }
    }

    if (inputLetra == 'X') {
      contadorTrampas++;
    }

    if (inputLetra == 'P') {

      contadorPortales++;
      cin >> x2 >> y2;
      i++;

      switch (contadorPortales) {
          case 1:
              posicionPortalX1_1 = inputx;
              posicionPortalY1_1 = inputy;
              posicionPortalX1_2 = x2;  
              posicionPortalY1_2 = y2;
              break;
          case 2:
              posicionPortalX2_1 = inputx;  posicionPortalY2_1 = inputy;
              posicionPortalX2_2 = x2;  posicionPortalY2_2 = y2;
              break;
          case 3:
              posicionPortalX3_1 = inputx;  posicionPortalY3_1 = inputy;
              posicionPortalX3_2 = x2;  posicionPortalY3_2 = y2;
              break;
          case 4:
              posicionPortalX4_1 = inputx;  posicionPortalY4_1 = inputx;
              posicionPortalX4_2 = x2;  posicionPortalY4_2 = y2;
              break;
          case 5:
              posicionPortalX5_1 = inputx;  posicionPortalY5_1 = inputy;
              posicionPortalX5_2 = x2;  posicionPortalY5_2 = y2;
              break;
          case 6:
              posicionPortalX6_1 = inputx;  posicionPortalY6_1 = inputy;
              posicionPortalX6_2 = x2;  posicionPortalY6_2 = y2;
              break;
          case 7:
              posicionPortalX7_1 = inputx;  posicionPortalY7_1 = inputy;
              posicionPortalX7_2 = x2;  posicionPortalY7_2 = y2;
              break;
          case 8:
              posicionPortalX8_1 = inputx;  posicionPortalY8_1 = inputy;
              posicionPortalX8_2 = x2;  posicionPortalY8_2 = y2;
              break;
          case 9:
              posicionPortalX9_1 = inputx;  posicionPortalY9_1 = inputy;
              posicionPortalX9_2 = x2;  posicionPortalY9_2 = y2;
              break;
          case 10:
              posicionPortalX10_1 = inputx;  posicionPortalY10_1 = inputy;
              posicionPortalX10_2 = x2;  posicionPortalY10_2 = y2;
              break;
      }
    }


    if (contadorElementos == 0) {
      if (inputLetra == 'P') {
        elem1 = elemPortal;
        inputx1 = posicionPortalX1_1;
        inputy1 = posicionPortalY1_1;

        elem43 = elemPortal;
        inputx43 = posicionPortalX1_2;
        inputy43 = posicionPortalY1_2;
      } else {
        elem1 = inputLetra;
        inputx1 = inputx;
        inputy1 = inputy;
      }
    } else if (contadorElementos == 1) {
      if (inputLetra == 'P') {
        elem2 = elemPortal;
        inputx2 = posicionPortalX2_1;
        inputy2 = posicionPortalY2_1;

        elem44 = elemPortal;
        inputx44 = posicionPortalX2_2;
        inputy44 = posicionPortalY2_2;
      } else {
        elem2 = inputLetra;
        inputx2 = inputx;
        inputy2 = inputy;
      }
    } else if (contadorElementos == 2) {
      if (inputLetra == 'P') {
        elem3 = elemPortal;
        inputx3 = posicionPortalX3_1;
        inputy3 = posicionPortalY1_1;

        elem45 = elemPortal;
        inputx45 = posicionPortalX3_2;
        inputy45 = posicionPortalY3_2;
       } else {
        elem3 = inputLetra;
        inputx3 = inputx;
        inputy3 = inputy;
        }
    } else if (contadorElementos == 3) {
      if (inputLetra == 'P') {
        elem4 = elemPortal;
        inputx4 = posicionPortalX4_1;
        inputy4 = posicionPortalY4_1;

        elem46 = elemPortal;
        inputx46 = posicionPortalX4_2;
        inputy46 = posicionPortalY4_2;
       } else {
        elem4 = inputLetra;
        inputx4 = inputx;
        inputy4 = inputy;
        }
    } else if (contadorElementos == 4) {
      if (inputLetra == 'P') {
        elem5 = elemPortal;
        inputx5 = posicionPortalX5_1;
        inputy5 = posicionPortalY5_1;

        elem47 = elemPortal;
        inputx47 = posicionPortalX5_2;
        inputy47 = posicionPortalY5_2;
       } else {
        elem5 = inputLetra;
        inputx5 = inputx;
        inputy5 = inputy;
        }
    } else if (contadorElementos == 5) {
      if (inputLetra == 'P') {
        elem6 = elemPortal;
        inputx6 = posicionPortalX6_1;
        inputy6 = posicionPortalY6_1;

        elem48 = elemPortal;
        inputx48 = posicionPortalX6_2;
        inputy48 = posicionPortalY6_2;
       } else {
        elem6 = inputLetra;
        inputx6 = inputx;
        inputy6 = inputy;
        }
    } else if (contadorElementos == 6) {
      if (inputLetra == 'P') {
        elem7 = elemPortal;
        inputx7 = posicionPortalX7_1;
        inputy7 = posicionPortalY7_1;

        elem49 = elemPortal;
        inputx49 = posicionPortalX7_2;
        inputy49 = posicionPortalY7_2;
       } else {
        elem7 = inputLetra;
        inputx7 = inputx;
        inputy7 = inputy;
        }
    } else if (contadorElementos == 7) {
      if (inputLetra == 'P') {
        elem8 = elemPortal;
        inputx8 = posicionPortalX8_1;
        inputy8 = posicionPortalY8_1;

        elem50 = elemPortal;
        inputx50 = posicionPortalX8_2;
        inputy50 = posicionPortalY8_2;
       } else {
        elem8 = inputLetra;
        inputx8 = inputx;
        inputy8 = inputy;
        }
    } else if (contadorElementos == 8) {
      if (inputLetra == 'P') {
        elem9 = elemPortal;
        inputx9 = posicionPortalX9_1;
        inputy9 = posicionPortalY9_1;

        elem51 = elemPortal;
        inputx51 = posicionPortalX9_2;
        inputy51 = posicionPortalY9_2;
       } else {
        elem9 = inputLetra;
        inputx9 = inputx;
        inputy9 = inputy;
        }
    } else if (contadorElementos == 9) {
      if (inputLetra == 'P') {
        elem10 = elemPortal;
        inputx10 = posicionPortalX10_1;
        inputy10 = posicionPortalY10_1;

        elem52 = elemPortal;
        inputx52 = posicionPortalX10_2;
        inputy52 = posicionPortalY10_2;
       } else {
        elem10 = inputLetra;
        inputx10 = inputx;
        inputy10 = inputy;
        }
    } else if (contadorElementos == 10) {
      if (inputLetra == 'P') {
        elem11 = elemPortal;
        inputx11 = posicionPortalX11_1;
        inputy11 = posicionPortalY11_1;
        contadorElementos++;
        elem53 = elemPortal;
        inputx53 = posicionPortalX11_2;
        inputy53 = posicionPortalY11_2;
       } else {
        elem11 = inputLetra;
        inputx11 = inputx;
        inputy11 = inputy;
        }
    } else if (contadorElementos == 11) {
      if (inputLetra == 'P') {
        elem12 = elemPortal;
        inputx12 = posicionPortalX12_1;
        inputy12 = posicionPortalY12_1;
        elem54 = elemPortal;
        inputx54 = posicionPortalX12_2;
        inputy54 = posicionPortalY12_2;
       } else {
        elem12 = inputLetra;
        inputx12 = inputx;
        inputy12 = inputy;
        }
    } else if (contadorElementos == 12) {
      if (inputLetra == 'P') {
        elem13 = elemPortal;
        inputx13 = posicionPortalX13_1;
        inputy13 = posicionPortalY13_1;
        elem54 = elemPortal;
        inputx54 = posicionPortalX13_2;
        inputy54 = posicionPortalY13_2;
       } else {
        elem13 = inputLetra;
        inputx13 = inputx;
        inputy13 = inputy;
        }
    } else if (contadorElementos == 13) {
      if (inputLetra == 'P') {
        elem14 = elemPortal;
        inputx14 = posicionPortalX14_1;
        inputy14 = posicionPortalY14_1;
        elem55 = elemPortal;
        inputx55 = posicionPortalX14_2;
        inputy55 = posicionPortalY14_2;
       } else {
        elem14 = inputLetra;
        inputx14 = inputx;
        inputy14 = inputy;
        }
    } else if (contadorElementos == 14) {
      if (inputLetra == 'P') {
        elem15 = elemPortal;
        inputx15 = posicionPortalX15_1;
        inputy15 = posicionPortalY15_1;
        elem56 = elemPortal;
        inputx56 = posicionPortalX15_2;
        inputy56 = posicionPortalY15_2;
       } else {
        elem15 = inputLetra;
        inputx15 = inputx;
        inputy15 = inputy;
        }
    } else if (contadorElementos == 15) {
      if (inputLetra == 'P') {
        elem16 = elemPortal;
        inputx16 = posicionPortalX16_1;
        inputy16 = posicionPortalY16_1;
        elem57 = elemPortal;
        inputx57 = posicionPortalX16_2;
        inputy57 = posicionPortalY16_2;
       } else {
        elem16 = inputLetra;
        inputx16 = inputx;
        inputy16 = inputy;
        }
    } else if (contadorElementos == 16) {
      if (inputLetra == 'P') {
        elem17 = elemPortal;
        inputx17 = posicionPortalX17_1;
        inputy17 = posicionPortalY17_1;
        elem58 = elemPortal;
        inputx58 = posicionPortalX17_2;
        inputy58 = posicionPortalY17_2;
       } else {
        elem17 = inputLetra;
        inputx17 = inputx;
        inputy17 = inputy;
        }
    } else if (contadorElementos == 17) {
      if (inputLetra == 'P') {
        elem18 = elemPortal;
        inputx18 = posicionPortalX18_1;
        inputy18 = posicionPortalY18_1;
        elem59 = elemPortal;
        inputx59 = posicionPortalX18_2;
        inputy59 = posicionPortalY18_2;
       } else {
        elem18 = inputLetra;
        inputx18 = inputx;
        inputy18 = inputy;
        }
    } else if (contadorElementos == 18) {
      if (inputLetra == 'P') {
        elem19 = elemPortal;
        inputx19 = posicionPortalX19_1;
        inputy19 = posicionPortalY19_1;
        elem60 = elemPortal;
        inputx60 = posicionPortalX19_2;
        inputy60 = posicionPortalY19_2;
       } else {
        elem19 = inputLetra;
        inputx19 = inputx;
        inputy19 = inputy;
        }
    } else if (contadorElementos == 19) {
      if (inputLetra == 'P') {
        elem20 = elemPortal;
        inputx20 = posicionPortalX20_1;
        inputy20 = posicionPortalY20_1;
        elem61 = elemPortal;
        inputx61 = posicionPortalX20_2;
        inputy61 = posicionPortalY20_2;
       } else {
        elem20 = inputLetra;
        inputx20 = inputx;
        inputy20 = inputy;
        }
    } else if (contadorElementos == 20) {
      if (inputLetra == 'P') {
        elem21 = elemPortal;
        inputx21 = posicionPortalX21_1;
        inputy21 = posicionPortalY21_1;
        elem62 = elemPortal;
        inputx62 = posicionPortalX21_2;
        inputy62 = posicionPortalY21_2;
       } else {
        elem21 = inputLetra;
        inputx21 = inputx;
        inputy21 = inputy;
        }
    } else if (contadorElementos == 21) {
      if (inputLetra == 'P') {
        elem22 = elemPortal;
        inputx22 = posicionPortalX22_1;
        inputy22 = posicionPortalY22_1;
        elem63 = elemPortal;
        inputx63 = posicionPortalX22_2;
        inputy63 = posicionPortalY22_2;
       } else {
        elem22 = inputLetra;
        inputx22 = inputx;
        inputy22 = inputy;
        }
    } else if (contadorElementos == 22) {
      if (inputLetra == 'P') {
        elem23 = elemPortal;
        inputx23 = posicionPortalX23_1;
        inputy23 = posicionPortalY23_1;
        elem64 = elemPortal;
        inputx64 = posicionPortalX23_2;
        inputy64 = posicionPortalY23_2;
       } else {
        elem23 = inputLetra;
        inputx23 = inputx;
        inputy23 = inputy;
        }
    } else if (contadorElementos == 23) {
      if (inputLetra == 'P') {
        elem24 = elemPortal;
        inputx24 = posicionPortalX24_1;
        inputy24 = posicionPortalY24_1;
        elem65 = elemPortal;
        inputx65 = posicionPortalX24_2;
        inputy65 = posicionPortalY24_2;
       } else {
        elem24 = inputLetra;
        inputx24 = inputx;
        inputy24 = inputy;
        }
    } else if (contadorElementos == 24) {
      if (inputLetra == 'P') {
        elem25 = elemPortal;
        inputx25 = posicionPortalX25_1;
        inputy25 = posicionPortalY25_1;
        elem66 = elemPortal;
        inputx66 = posicionPortalX25_2;
        inputy66 = posicionPortalY25_2;
       } else {
        elem25 = inputLetra;
        inputx25 = inputx;
        inputy25 = inputy;
        }
    } else if (contadorElementos == 25) {
      if (inputLetra == 'P') {
        elem26 = elemPortal;
        inputx26 = posicionPortalX26_1;
        inputy26 = posicionPortalY26_1;

        elem67 = elemPortal;
        inputx67 = posicionPortalX26_2;
        inputy67 = posicionPortalY26_2;
       } else {
        elem26 = inputLetra;
        inputx26 = inputx;
        inputy26 = inputy;
        }
    } else if (contadorElementos == 26) {
      if (inputLetra == 'P') {
        elem27 = elemPortal;
        inputx27 = posicionPortalX27_1;
        inputy27 = posicionPortalY27_1;

        elem68 = elemPortal;
        inputx68 = posicionPortalX27_2;
        inputy68 = posicionPortalY27_2;
       } else {
        elem27 = inputLetra;
        inputx27 = inputx;
        inputy27 = inputy;
        }
    } else if (contadorElementos == 27) {
      if (inputLetra == 'P') {
        elem28 = elemPortal;
        inputx28 = posicionPortalX28_1;
        inputy28 = posicionPortalY28_1;

        elem69 = elemPortal;
        inputx69 = posicionPortalX28_2;
        inputy69 = posicionPortalY28_2;
       } else {
        elem28 = inputLetra;
        inputx28 = inputx;
        inputy28 = inputy;
        }
    } else if (contadorElementos == 28) {
      if (inputLetra == 'P') {
        elem29 = elemPortal;
        inputx29 = posicionPortalX29_1;
        inputy29 = posicionPortalY29_1;

        elem70 = elemPortal;
        inputx70 = posicionPortalX29_2;
        inputy70 = posicionPortalY29_2;
       } else {
        elem29 = inputLetra;
        inputx29 = inputx;
        inputy29 = inputy;
        }
    } else if (contadorElementos == 29) {
      if (inputLetra == 'P') {
        elem30 = elemPortal;
        inputx30 = posicionPortalX30_1;
        inputy30 = posicionPortalY30_1;

        elem71 = elemPortal;
        inputx71 = posicionPortalX30_2;
        inputy71 = posicionPortalY30_2;
       } else {
        elem30 = inputLetra;
        inputx30 = inputx;
        inputy30 = inputy;
        }
    } else if (contadorElementos == 30) {
      if (inputLetra == 'P') {
        elem31 = elemPortal;
        inputx31 = posicionPortalX31_1;
        inputy31 = posicionPortalY31_1;

        elem72 = elemPortal;
        inputx72 = posicionPortalX31_2;
        inputy72 = posicionPortalY31_2;
       } else {
        elem31 = inputLetra;
        inputx31 = inputx;
        inputy31 = inputy;
        }
    } else if (contadorElementos == 31) {
      if (inputLetra == 'P') {
        elem32 = elemPortal;
        inputx32 = posicionPortalX32_1;
        inputy32 = posicionPortalY32_1;

        elem73 = elemPortal;
        inputx73 = posicionPortalX32_2;
        inputy73 = posicionPortalY32_2;
       } else {
        elem32 = inputLetra;
        inputx32 = inputx;
        inputy32 = inputy;
        }
    } else if (contadorElementos == 32) {
      if (inputLetra == 'P') {
        elem33 = elemPortal;
        inputx33 = posicionPortalX33_1;
        inputy33 = posicionPortalY33_1;

        elem74 = elemPortal;
        inputx74 = posicionPortalX33_2;
        inputy74 = posicionPortalY33_2;
       } else {
        elem33 = inputLetra;
        inputx33 = inputx;
        inputy33 = inputy;
        }
    } else if (contadorElementos == 33) {
      if (inputLetra == 'P') {
        elem34 = elemPortal;
        inputx34 = posicionPortalX34_1;
        inputy34 = posicionPortalY34_1;

        elem75 = elemPortal;
        inputx75 = posicionPortalX34_2;
        inputy75 = posicionPortalY34_2;
       } else {
        elem34 = inputLetra;
        inputx34 = inputx;
        inputy34 = inputy;
        }
    } else if (contadorElementos == 34) {
      if (inputLetra == 'P') {
        elem35 = elemPortal;
        inputx35 = posicionPortalX35_1;
        inputy35 = posicionPortalY35_1;

        elem76 = elemPortal;
        inputx76 = posicionPortalX35_2;
        inputy76 = posicionPortalY35_2;
       } else {
        elem35 = inputLetra;
        inputx35 = inputx;
        inputy35 = inputy;
        }
    } else if (contadorElementos == 35) {
      if (inputLetra == 'P') {
        elem36 = elemPortal;
        inputx36 = posicionPortalX36_1;
        inputy36 = posicionPortalY36_1;

        elem77 = elemPortal;
        inputx77 = posicionPortalX36_2;
        inputy77 = posicionPortalY36_2;
       } else {
        elem36 = inputLetra;
        inputx36 = inputx;
        inputy36 = inputy;
        }
    } else if (contadorElementos == 36) {
      if (inputLetra == 'P') {
        elem37 = elemPortal;
        inputx37 = posicionPortalX37_1;
        inputy37 = posicionPortalY37_1;

        elem78 = elemPortal;
        inputx78 = posicionPortalX37_2;
        inputy78 = posicionPortalY37_2;
       } else {
        elem37 = inputLetra;
        inputx37 = inputx;
        inputy37 = inputy;
        }
    } else if (contadorElementos == 37) {
      if (inputLetra == 'P') {
        elem38 = elemPortal;
        inputx38 = posicionPortalX38_1;
        inputy38 = posicionPortalY38_1;

        elem79 = elemPortal;
        inputx79 = posicionPortalX38_2;
        inputy79 = posicionPortalY38_2;
       } else {
        elem38 = inputLetra;
        inputx38 = inputx;
        inputy38 = inputy;
        }
    } else if (contadorElementos == 38) {
      if (inputLetra == 'P') {
        elem39 = elemPortal;
        inputx39 = posicionPortalX39_1;
        inputy39 = posicionPortalY39_1;

        elem80 = elemPortal;
        inputx80 = posicionPortalX39_2;
        inputy80 = posicionPortalY39_2;
       } else {
        elem39 = inputLetra;
        inputx39 = inputx;
        inputy39 = inputy;
        }
    } else if (contadorElementos == 39) {
      if (inputLetra == 'P') {
        elem40 = elemPortal;
        inputx40 = posicionPortalX40_1;
        inputy40 = posicionPortalY40_1;

        elem81 = elemPortal;
        inputx81 = posicionPortalX40_2;
        inputy81 = posicionPortalY40_2;
       } else {
        elem40 = inputLetra;
        inputx40 = inputx;
        inputy40 = inputy;
        }
    } else if (contadorElementos == 40) {
      if (inputLetra == 'P') {
        elem41 = elemPortal;
        inputx41 = posicionPortalX41_1;
        inputy41 = posicionPortalY41_1;

        elem82 = elemPortal;
        inputx82 = posicionPortalX41_2;
        inputy82 = posicionPortalY41_2;
       } else {
        elem41 = inputLetra;
        inputx41 = inputx;
        inputy41 = inputy;
        }
    } else if (contadorElementos == 41) {
      if (inputLetra == 'P') {
        elem42 = elemPortal;
        inputx42 = posicionPortalX42_1;
        inputy42 = posicionPortalY42_1; 

        elem83 = elemPortal;
        inputx83 = posicionPortalX42_2;
        inputy83 = posicionPortalY42_2;
       } else {
        elem42 = inputLetra;
        inputx42 = inputx;
        inputy42 = inputy;
        }
    }
    contadorElementos++;
  }

  cin >> cantidad_movimientos;

  while (true) {
    for (int i = 0; i <= M; i++) {
      for (int i2 = 0; i2 <= N; i2++) {
        bool espacio_no_vacio = false;
        if (i == y && i2 == x) {
          cout << c;
          espacio_no_vacio = true;
        } else {
          if (elemEntrada == 'E' && i == inputEntradaY && i2 == inputEntradaX) {
        cout << elemEntrada;
        espacio_no_vacio = true;
          }
          if (contadorElementos > 0 && i == inputy1 && i2 == inputx1) {
        cout << elem1;
        espacio_no_vacio = true;
          } else if (contadorElementos > 1 && i == inputy2 && i2 == inputx2) {
        cout << elem2;
        espacio_no_vacio = true;
          } else if (contadorElementos > 2 && i == inputy3 && i2 == inputx3) {
        cout << elem3;
        espacio_no_vacio = true;
          } else if (contadorElementos > 3 && i == inputy4 && i2 == inputx4) {
        cout << elem4;
        espacio_no_vacio = true;
          } else if (contadorElementos > 4 && i == inputy5 && i2 == inputx5) {
        cout << elem5;
        espacio_no_vacio = true;
          } else if (contadorElementos > 5 && i == inputy6 && i2 == inputx6) {
        cout << elem6;
        espacio_no_vacio = true;
          } else if (contadorElementos > 6 && i == inputy7 && i2 == inputx7) {
        cout << elem7;
        espacio_no_vacio = true;
          } else if (contadorElementos > 7 && i == inputy8 && i2 == inputx8) {
        cout << elem8;
        espacio_no_vacio = true;
          } else if (contadorElementos > 8 && i == inputy9 && i2 == inputx9) {
        cout << elem9;
        espacio_no_vacio = true;
          } else if (contadorElementos > 9 && i == inputy10 && i2 == inputx10) {
        cout << elem10;
        espacio_no_vacio = true;
          } else if (contadorElementos > 10 && i == inputy11 &&
             i2 == inputx11) {
        cout << elem11;
        espacio_no_vacio = true;
          } else if (contadorElementos > 11 && i == inputy12 &&
             i2 == inputx12) {
        cout << elem12;
        espacio_no_vacio = true;
          } else if (contadorElementos > 12 && i == inputy13 &&
             i2 == inputx13) {
        cout << elem13;
        espacio_no_vacio = true;
          } else if (contadorElementos > 13 && i == inputy14 &&
             i2 == inputx14) {
        cout << elem14;
        espacio_no_vacio = true;
          } else if (contadorElementos > 14 && i == inputy15 &&
             i2 == inputx15) {
        cout << elem15;
        espacio_no_vacio = true;
          } else if (contadorElementos > 15 && i == inputy16 &&
             i2 == inputx16) {
        cout << elem16;
        espacio_no_vacio = true;
          } else if (contadorElementos > 16 && i == inputy17 &&
             i2 == inputx17) {
        cout << elem17;
        espacio_no_vacio = true;
          } else if (contadorElementos > 17 && i == inputy18 &&
             i2 == inputx18) {
        cout << elem18;
        espacio_no_vacio = true;
          } else if (contadorElementos > 18 && i == inputy19 &&
             i2 == inputx19) {
        cout << elem19;
        espacio_no_vacio = true;
          } else if (contadorElementos > 19 && i == inputy20 &&
             i2 == inputx20) {
        cout << elem20;
        espacio_no_vacio = true;
          } else if (contadorElementos > 20 && i == inputy21 &&
             i2 == inputx21) {
        cout << elem21;
        espacio_no_vacio = true;
          } else if (contadorElementos > 21 && i == inputy22 &&
             i2 == inputx22) {
        cout << elem22;
        espacio_no_vacio = true;
          } else if (contadorElementos > 22 && i == inputy23 &&
             i2 == inputx23) {
        cout << elem23;
        espacio_no_vacio = true;
          } else if (contadorElementos > 23 && i == inputy24 &&
             i2 == inputx24) {
        cout << elem24;
        espacio_no_vacio = true;
          } else if (contadorElementos > 24 && i == inputy25 &&
             i2 == inputx25) {
        cout << elem25;
        espacio_no_vacio = true;
          } else if (contadorElementos > 25 && i == inputy26 &&
             i2 == inputx26) {
        cout << elem26;
        espacio_no_vacio = true;
          } else if (contadorElementos > 26 && i == inputy27 &&
             i2 == inputx27) {
        cout << elem27;
        espacio_no_vacio = true;
          } else if (contadorElementos > 27 && i == inputy28 &&
             i2 == inputx28) {
        cout << elem28;
        espacio_no_vacio = true;
          } else if (contadorElementos > 28 && i == inputy29 &&
             i2 == inputx29) {
        cout << elem29;
        espacio_no_vacio = true;
          } else if (contadorElementos > 29 && i == inputy30 &&
             i2 == inputx30) {
        cout << elem30;
        espacio_no_vacio = true;
          } else if (contadorElementos > 30 && i == inputy31 &&
             i2 == inputx31) {
        cout << elem31;
        espacio_no_vacio = true;
          } else if (contadorElementos > 31 && i == inputy32 &&
             i2 == inputx32) {
        cout << elem32;
        espacio_no_vacio = true;
          } else if (contadorElementos > 32 && i == inputy33 &&
             i2 == inputx33) {
        cout << elem33;
        espacio_no_vacio = true;
          } else if (contadorElementos > 33 && i == inputy34 &&
             i2 == inputx34) {
        cout << elem34;
        espacio_no_vacio = true;
          } else if (contadorElementos > 34 && i == inputy35 &&
             i2 == inputx35) {
        cout << elem35;
        espacio_no_vacio = true;
          } else if (contadorElementos > 35 && i == inputy36 &&
             i2 == inputx36) {
        cout << elem36;
        espacio_no_vacio = true;
          } else if (contadorElementos > 36 && i == inputy37 &&
             i2 == inputx37) {
        cout << elem37;
        espacio_no_vacio = true;
          } else if (contadorElementos > 37 && i == inputy38 &&
             i2 == inputx38) {
        cout << elem38;
        espacio_no_vacio = true;
          } else if (contadorElementos > 38 && i == inputy39 &&
             i2 == inputx39) {
        cout << elem39;
        espacio_no_vacio = true;
          } else if (contadorElementos > 39 && i == inputy40 &&
             i2 == inputx40) {
        cout << elem40;
        espacio_no_vacio = true;
          } else if (contadorElementos > 40 && i == inputy41 &&
             i2 == inputx41) {
        cout << elem41;
        espacio_no_vacio = true;
          } else if (contadorElementos > 41 && i == inputy42 &&
             i2 == inputx42) {
        cout << elem42;
        espacio_no_vacio = true;
          } else if (contadorElementos > 42 && i == inputy43 &&
             i2 == inputx43) {
        cout << elem43;
        espacio_no_vacio = true;
          } else if (contadorElementos > 43 && i == inputy44 &&
             i2 == inputx44) {
        cout << elem44;
        espacio_no_vacio = true;
          } else if (contadorElementos > 44 && i == inputy45 &&
             i2 == inputx45) {
        cout << elem45;
        espacio_no_vacio = true;
          } else if (contadorElementos > 45 && i == inputy46 &&
             i2 == inputx46) {
        cout << elem46;
        espacio_no_vacio = true;
          } else if (contadorElementos > 46 && i == inputy47 &&
             i2 == inputx47) {
        cout << elem47;
        espacio_no_vacio = true;
          } else if (contadorElementos > 47 && i == inputy48 &&
             i2 == inputx48) {
        cout << elem48;
        espacio_no_vacio = true;
          } else if (contadorElementos > 48 && i == inputy49 &&
             i2 == inputx49) {
        cout << elem49;
        espacio_no_vacio = true;
          } else if (contadorElementos > 49 && i == inputy50 &&
             i2 == inputx50) {
        cout << elem50;
        espacio_no_vacio = true;
          } else if (contadorElementos > 50 && i == inputy51 &&
             i2 == inputx51) {
        cout << elem51;
        espacio_no_vacio = true;
          } else if (contadorElementos > 51 && i == inputy52 &&
             i2 == inputx52) {
        cout << elem52;
        espacio_no_vacio = true;
          } else if (contadorElementos > 52 && i == inputy53 &&
             i2 == inputx53) {
        cout << elem53;
        espacio_no_vacio = true;
          } else if (contadorElementos > 53 && i == inputy54 &&
             i2 == inputx54) {
        cout << elem54;
        espacio_no_vacio = true;
          } else if (contadorElementos > 54 && i == inputy55 &&
             i2 == inputx55) {
        cout << elem55;
        espacio_no_vacio = true;
          } else if (contadorElementos > 55 && i == inputy56 &&
             i2 == inputx56) {
        cout << elem56;
        espacio_no_vacio = true;
          } else if (contadorElementos > 56 && i == inputy57 &&
             i2 == inputx57) {
        cout << elem57;
        espacio_no_vacio = true;
          } else if (contadorElementos > 57 && i == inputy58 &&
             i2 == inputx58) {
        cout << elem58;
        espacio_no_vacio = true;
          } else if (contadorElementos > 58 && i == inputy59 &&
             i2 == inputx59) {
        cout << elem59;
        espacio_no_vacio = true;
          } else if (contadorElementos > 59 && i == inputy60 &&
             i2 == inputx60) {
        cout << elem60;
        espacio_no_vacio = true;
          } else if (contadorElementos > 60 && i == inputy61 &&
             i2 == inputx61) {
        cout << elem61;
        espacio_no_vacio = true;
          } else if (contadorElementos > 61 && i == inputy62 &&
             i2 == inputx62) {
        cout << elem62;
        espacio_no_vacio = true;
          } else if (contadorElementos > 62 && i == inputy63 &&
             i2 == inputx63) {
        cout << elem63;
        espacio_no_vacio = true;
          } else if (contadorElementos > 63 && i == inputy64 &&
             i2 == inputx64) {
        cout << elem64;
        espacio_no_vacio = true;
          } else if (contadorElementos > 64 && i == inputy65 &&
             i2 == inputx65) {
        cout << elem65;
        espacio_no_vacio = true;
          } else if (contadorElementos > 65 && i == inputy66 &&
             i2 == inputx66) {
        cout << elem66;
        espacio_no_vacio = true;
          } else if (contadorElementos > 66 && i == inputy67 &&
             i2 == inputx67) {
        cout << elem67;
        espacio_no_vacio = true;
          } else if (contadorElementos > 67 && i == inputy68 &&
             i2 == inputx68) {
        cout << elem68;
        espacio_no_vacio = true;
          } else if (contadorElementos > 68 && i == inputy69 &&
             i2 == inputx69) {
        cout << elem69;
        espacio_no_vacio = true;
          } else if (contadorElementos > 69 && i == inputy70 &&
             i2 == inputx70) {
        cout << elem70;
        espacio_no_vacio = true;
          } else if (contadorElementos > 70 && i == inputy71 &&
             i2 == inputx71) {
        cout << elem71;
        espacio_no_vacio = true;
          } else if (contadorElementos > 71 && i == inputy72 &&
             i2 == inputx72) {
        cout << elem72;
        espacio_no_vacio = true;
          } else if (contadorElementos > 72 && i == inputy73 &&
             i2 == inputx73) {
        cout << elem73;
        espacio_no_vacio = true;
          } else if (contadorElementos > 73 && i == inputy74 &&
             i2 == inputx74) {
        cout << elem74;
        espacio_no_vacio = true;
          } else if (contadorElementos > 74 && i == inputy75 &&
             i2 == inputx75) {
        cout << elem75;
        espacio_no_vacio = true;
          } else if (contadorElementos > 75 && i == inputy76 &&
             i2 == inputx76) {
        cout << elem76;
        espacio_no_vacio = true;
          } else if (contadorElementos > 76 && i == inputy77 &&
             i2 == inputx77) {
        cout << elem77;
        espacio_no_vacio = true;
          } else if (contadorElementos > 77 && i == inputy78 &&
             i2 == inputx78) {
        cout << elem78;
        espacio_no_vacio = true;
          } else if (contadorElementos > 78 && i == inputy79 &&
             i2 == inputx79) {
        cout << elem79;
        espacio_no_vacio = true;
          } else if (contadorElementos > 79 && i == inputy80 &&
             i2 == inputx80) {
        cout << elem80;
        espacio_no_vacio = true;
          } else if (contadorElementos > 80 && i == inputy81 &&
             i2 == inputx81) {
        cout << elem81;
        espacio_no_vacio = true;
          } else if (contadorElementos > 81 && i == inputy82 &&
             i2 == inputx82) {
        cout << elem82;
        espacio_no_vacio = true;
          } else if (contadorElementos > 82 && i == inputy83 &&
             i2 == inputx83) {
        cout << elem83;
        espacio_no_vacio = true;
          } else if (!espacio_no_vacio) {
        cout << ".";
          }
        }
      }
      cout << endl;
    }

    movimientos();

    if (movimientosUsados == cantidad_movimientos) {
      cout << "TESOROS:" << cantidadTesoros << endl;
      cout << "TRAMPAS:" << contadorTrampas << endl;
      cout << "VIDA:" << L << endl;
      cout << "ATRAPADO" << endl;
      break;
    }

    if (x < 0)
      x = 0;
    if (x >= N)
      x = N;
    if (y < 0)
      y = 0;
    if (y >= M)
      y = M;
  

    detectar_posicion(inputx1, inputy1, elem1, L2);
    detectar_posicion(inputx2, inputy2, elem2, L2);
    detectar_posicion(inputx3, inputy3, elem3, L2);
    detectar_posicion(inputx4, inputy4, elem4, L2);
    detectar_posicion(inputx5, inputy5, elem5, L2);
    detectar_posicion(inputx6, inputy6, elem6, L2);
    detectar_posicion(inputx7, inputy7, elem7, L2);
    detectar_posicion(inputx8, inputy8, elem8, L2);
    detectar_posicion(inputx9, inputy9, elem9, L2);
    detectar_posicion(inputx10, inputy10, elem10, L2);
    detectar_posicion(inputx11, inputy11, elem11, L2);
    detectar_posicion(inputx12, inputy12, elem12, L2);
    detectar_posicion(inputx13, inputy13, elem13, L2);
    detectar_posicion(inputx14, inputy14, elem14, L2);
    detectar_posicion(inputx15, inputy15, elem15, L2);
    detectar_posicion(inputx16, inputy16, elem16, L2);
    detectar_posicion(inputx17, inputy17, elem17, L2);
    detectar_posicion(inputx18, inputy18, elem18, L2);
    detectar_posicion(inputx19, inputy19, elem19, L2);
    detectar_posicion(inputx20, inputy20, elem20, L2);
    detectar_posicion(inputx21, inputy21, elem21, L2);
    detectar_posicion(inputx22, inputy22, elem22, L2);
    detectar_posicion(inputx23, inputy23, elem23, L2);
    detectar_posicion(inputx24, inputy24, elem24, L2);
    detectar_posicion(inputx25, inputy25, elem25, L2);
    detectar_posicion(inputx26, inputy26, elem26, L2);
    detectar_posicion(inputx27, inputy27, elem27, L2);
    detectar_posicion(inputx28, inputy28, elem28, L2);
    detectar_posicion(inputx29, inputy29, elem29, L2);
    detectar_posicion(inputx30, inputy30, elem30, L2);
    detectar_posicion(inputx31, inputy31, elem31, L2);
    detectar_posicion(inputx32, inputy32, elem32, L2);
    detectar_posicion(inputx33, inputy33, elem33, L2);
    detectar_posicion(inputx34, inputy34, elem34, L2);
    detectar_posicion(inputx35, inputy35, elem35, L2);
    detectar_posicion(inputx36, inputy36, elem36, L2);
    detectar_posicion(inputx37, inputy37, elem37, L2);
    detectar_posicion(inputx38, inputy38, elem38, L2);
    detectar_posicion(inputx39, inputy39, elem39, L2);
    detectar_posicion(inputx40, inputy40, elem40, L2);
    detectar_posicion(inputx41, inputy41, elem41, L2);
    detectar_posicion(inputx42, inputy42, elem42, L2);
    detectar_posicion(inputx43, inputy43, elem43, L2);
    detectar_posicion(inputx44, inputy44, elem44, L2);
    detectar_posicion(inputx45, inputy45, elem45, L2);
    detectar_posicion(inputx46, inputy46, elem46, L2);
    detectar_posicion(inputx47, inputy47, elem47, L2);
    detectar_posicion(inputx48, inputy48, elem48, L2);
    detectar_posicion(inputx49, inputy49, elem49, L2);
    detectar_posicion(inputx50, inputy50, elem50, L2);
    detectar_posicion(inputx51, inputy51, elem51, L2);
    detectar_posicion(inputx52, inputy52, elem52, L2);
    detectar_posicion(inputx53, inputy53, elem53, L2);
    detectar_posicion(inputx54, inputy54, elem54, L2);
    detectar_posicion(inputx55, inputy55, elem55, L2);
    detectar_posicion(inputx56, inputy56, elem56, L2);
    detectar_posicion(inputx57, inputy57, elem57, L2);
    detectar_posicion(inputx58, inputy58, elem58, L2);
    detectar_posicion(inputx59, inputy59, elem59, L2);
    detectar_posicion(inputx60, inputy60, elem60, L2);
    detectar_posicion(inputx61, inputy61, elem61, L2);
    detectar_posicion(inputx62, inputy62, elem62, L2);
    detectar_posicion(inputx63, inputy63, elem63, L2);
    detectar_posicion(inputx64, inputy64, elem64, L2);
    detectar_posicion(inputx65, inputy65, elem65, L2);
    detectar_posicion(inputx66, inputy66, elem66, L2);
    detectar_posicion(inputx67, inputy67, elem67, L2);
    detectar_posicion(inputx68, inputy68, elem68, L2);
    detectar_posicion(inputx69, inputy69, elem69, L2);
    detectar_posicion(inputx70, inputy70, elem70, L2);
    detectar_posicion(inputx71, inputy71, elem71, L2);
    detectar_posicion(inputx72, inputy72, elem72, L2);
    detectar_posicion(inputx73, inputy73, elem73, L2);
    detectar_posicion(inputx74, inputy74, elem74, L2);
    detectar_posicion(inputx75, inputy75, elem75, L2);
    detectar_posicion(inputx76, inputy76, elem76, L2);
    detectar_posicion(inputx77, inputy77, elem77, L2);
    detectar_posicion(inputx78, inputy78, elem78, L2);
    detectar_posicion(inputx79, inputy79, elem79, L2);
    detectar_posicion(inputx80, inputy80, elem80, L2);
    detectar_posicion(inputx81, inputy81, elem81, L2);
    detectar_posicion(inputx82, inputy82, elem82, L2);
    detectar_posicion(inputx83, inputy83, elem83, L2);
    detectar_posicion(posicionPortalX1_1, posicionPortalY1_1, elemPortal, L2);
    detectar_posicion(posicionPortalX1_2, posicionPortalY1_2, elemPortal, L2);
    detectar_posicion(posicionPortalX2_1, posicionPortalY2_1, elemPortal, L2);
    detectar_posicion(posicionPortalX2_2, posicionPortalY2_2, elemPortal, L2);
    detectar_posicion(posicionPortalX3_1, posicionPortalY3_1, elemPortal, L2);
    detectar_posicion(posicionPortalX3_2, posicionPortalY3_2, elemPortal, L2);
    detectar_posicion(posicionPortalX4_1, posicionPortalY4_1, elemPortal, L2);
    detectar_posicion(posicionPortalX4_2, posicionPortalY4_2, elemPortal, L2);
    detectar_posicion(posicionPortalX5_1, posicionPortalY5_1, elemPortal, L2);
    detectar_posicion(posicionPortalX5_2, posicionPortalY5_2, elemPortal, L2);
    detectar_posicion(posicionPortalX6_1, posicionPortalY6_1, elemPortal, L2);
    detectar_posicion(posicionPortalX6_2, posicionPortalY6_2, elemPortal, L2);
    detectar_posicion(posicionPortalX7_1, posicionPortalY7_1, elemPortal, L2);
    detectar_posicion(posicionPortalX7_2, posicionPortalY7_2, elemPortal, L2);
    detectar_posicion(posicionPortalX8_1, posicionPortalY8_1, elemPortal, L2);
    detectar_posicion(posicionPortalX8_2, posicionPortalY8_2, elemPortal, L2);
    detectar_posicion(posicionPortalX9_1, posicionPortalY9_1, elemPortal, L2);
    detectar_posicion(posicionPortalX9_2, posicionPortalY9_2, elemPortal, L2);
    detectar_posicion(posicionPortalX10_1, posicionPortalY10_1, elemPortal, L2);
    detectar_posicion(posicionPortalX10_2, posicionPortalY10_2, elemPortal, L2);
    detectar_posicion(posicionPortalX11_1, posicionPortalY11_1, elemPortal, L2);
    detectar_posicion(posicionPortalX11_2, posicionPortalY11_2, elemPortal, L2);
    detectar_posicion(posicionPortalX12_1, posicionPortalY12_1, elemPortal, L2);
    detectar_posicion(posicionPortalX12_2, posicionPortalY12_2, elemPortal, L2);
    detectar_posicion(posicionPortalX13_1, posicionPortalY13_1, elemPortal, L2);
    detectar_posicion(posicionPortalX13_2, posicionPortalY13_2, elemPortal, L2);
    detectar_posicion(posicionPortalX14_1, posicionPortalY14_1, elemPortal, L2);
    detectar_posicion(posicionPortalX14_2, posicionPortalY14_2, elemPortal, L2);
    detectar_posicion(posicionPortalX15_1, posicionPortalY15_1, elemPortal, L2);
    detectar_posicion(posicionPortalX15_2, posicionPortalY15_2, elemPortal, L2);
    detectar_posicion(posicionPortalX16_1, posicionPortalY16_1, elemPortal, L2);
    detectar_posicion(posicionPortalX16_2, posicionPortalY16_2, elemPortal, L2);
    detectar_posicion(posicionPortalX17_1, posicionPortalY17_1, elemPortal, L2);
    detectar_posicion(posicionPortalX17_2, posicionPortalY17_2, elemPortal, L2);
    detectar_posicion(posicionPortalX18_1, posicionPortalY18_1, elemPortal, L2);
    detectar_posicion(posicionPortalX18_2, posicionPortalY18_2, elemPortal, L2);
    detectar_posicion(posicionPortalX19_1, posicionPortalY19_1, elemPortal, L2);
    detectar_posicion(posicionPortalX19_2, posicionPortalY19_2, elemPortal, L2);
    detectar_posicion(posicionPortalX20_1, posicionPortalY20_1, elemPortal, L2);
    detectar_posicion(posicionPortalX20_2, posicionPortalY20_2, elemPortal, L2);
    detectar_posicion(posicionPortalX21_1, posicionPortalY21_1, elemPortal, L2);
    detectar_posicion(posicionPortalX21_2, posicionPortalY21_2, elemPortal, L2);
    detectar_posicion(posicionPortalX22_1, posicionPortalY22_1, elemPortal, L2);
    detectar_posicion(posicionPortalX22_2, posicionPortalY22_2, elemPortal, L2);
    detectar_posicion(posicionPortalX23_1, posicionPortalY23_1, elemPortal, L2);
    detectar_posicion(posicionPortalX23_2, posicionPortalY23_2, elemPortal, L2);
    detectar_posicion(posicionPortalX24_1, posicionPortalY24_1, elemPortal, L2);
    detectar_posicion(posicionPortalX24_2, posicionPortalY24_2, elemPortal, L2);
    detectar_posicion(posicionPortalX25_1, posicionPortalY25_1, elemPortal, L2);
    detectar_posicion(posicionPortalX25_2, posicionPortalY25_2, elemPortal, L2);
    detectar_posicion(posicionPortalX26_1, posicionPortalY26_1, elemPortal, L2);
    detectar_posicion(posicionPortalX26_2, posicionPortalY26_2, elemPortal, L2);
    detectar_posicion(posicionPortalX27_1, posicionPortalY27_1, elemPortal, L2);
    detectar_posicion(posicionPortalX27_2, posicionPortalY27_2, elemPortal, L2);
    detectar_posicion(posicionPortalX28_1, posicionPortalY28_1, elemPortal, L2);
    detectar_posicion(posicionPortalX28_2, posicionPortalY28_2, elemPortal, L2);
    detectar_posicion(posicionPortalX29_1, posicionPortalY29_1, elemPortal, L2);
    detectar_posicion(posicionPortalX29_2, posicionPortalY29_2, elemPortal, L2);
    detectar_posicion(posicionPortalX30_1, posicionPortalY30_1, elemPortal, L2);
    detectar_posicion(posicionPortalX30_2, posicionPortalY30_2, elemPortal, L2);
    detectar_posicion(posicionPortalX31_1, posicionPortalY31_1, elemPortal, L2);
    detectar_posicion(posicionPortalX31_2, posicionPortalY31_2, elemPortal, L2);
    detectar_posicion(posicionPortalX32_1, posicionPortalY32_1, elemPortal, L2);
    detectar_posicion(posicionPortalX32_2, posicionPortalY32_2, elemPortal, L2);
    detectar_posicion(posicionPortalX33_1, posicionPortalY33_1, elemPortal, L2);
    detectar_posicion(posicionPortalX33_2, posicionPortalY33_2, elemPortal, L2);
    detectar_posicion(posicionPortalX34_1, posicionPortalY34_1, elemPortal, L2);
    detectar_posicion(posicionPortalX34_2, posicionPortalY34_2, elemPortal, L2);
    detectar_posicion(posicionPortalX35_1, posicionPortalY35_1, elemPortal, L2);
    detectar_posicion(posicionPortalX35_2, posicionPortalY35_2, elemPortal, L2);
    detectar_posicion(posicionPortalX36_1, posicionPortalY36_1, elemPortal, L2);
    detectar_posicion(posicionPortalX36_2, posicionPortalY36_2, elemPortal, L2);
    detectar_posicion(posicionPortalX37_1, posicionPortalY37_1, elemPortal, L2);
    detectar_posicion(posicionPortalX37_2, posicionPortalY37_2, elemPortal, L2);
    detectar_posicion(posicionPortalX38_1, posicionPortalY38_1, elemPortal, L2);
    detectar_posicion(posicionPortalX38_2, posicionPortalY38_2, elemPortal, L2);
    detectar_posicion(posicionPortalX39_1, posicionPortalY39_1, elemPortal, L2);
    detectar_posicion(posicionPortalX39_2, posicionPortalY39_2, elemPortal, L2);
    detectar_posicion(posicionPortalX40_1, posicionPortalY40_1, elemPortal, L2);
    detectar_posicion(posicionPortalX40_2, posicionPortalY40_2, elemPortal, L2);
    detectar_posicion(posicionPortalX41_1, posicionPortalY41_1, elemPortal, L2);
    detectar_posicion(posicionPortalX41_2, posicionPortalY41_2, elemPortal, L2);
    detectar_posicion(posicionPortalX42_1, posicionPortalY42_1, elemPortal, L2);
    detectar_posicion(posicionPortalX42_2, posicionPortalY42_2, elemPortal, L2);
    detectar_posicion(posicionPortalX43_1, posicionPortalY43_1, elemPortal, L2);
    detectar_posicion(posicionPortalX43_2, posicionPortalY43_2, elemPortal, L2);
    detectar_posicion(posicionPortalX44_1, posicionPortalY44_1, elemPortal, L2);
    detectar_posicion(posicionPortalX44_2, posicionPortalY44_2, elemPortal, L2);
    detectar_posicion(posicionPortalX45_1, posicionPortalY45_1, elemPortal, L2);
    detectar_posicion(posicionPortalX45_2, posicionPortalY45_2, elemPortal, L2);
    detectar_posicion(posicionPortalX46_1, posicionPortalY46_1, elemPortal, L2);
    detectar_posicion(posicionPortalX46_2, posicionPortalY46_2, elemPortal, L2);
    detectar_posicion(posicionPortalX47_1, posicionPortalY47_1, elemPortal, L2);
    detectar_posicion(posicionPortalX47_2, posicionPortalY47_2, elemPortal, L2);
    detectar_posicion(posicionPortalX48_1, posicionPortalY48_1, elemPortal, L2);
    detectar_posicion(posicionPortalX48_2, posicionPortalY48_2, elemPortal, L2);
    detectar_posicion(posicionPortalX49_1, posicionPortalY49_1, elemPortal, L2);
    detectar_posicion(posicionPortalX49_2, posicionPortalY49_2, elemPortal, L2);
    detectar_posicion(posicionPortalX50_1, posicionPortalY50_1, elemPortal, L2);
    detectar_posicion(posicionPortalX50_2, posicionPortalY50_2, elemPortal, L2);

    detectar_posicion_anterior(xcopia, ycopia, inputx1, inputy1, elem1, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx2, inputy2, elem2, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx3, inputy3, elem3, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx4, inputy4, elem4, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx5, inputy5, elem5, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx6, inputy6, elem6, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx7, inputy7, elem7, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx8, inputy8, elem8, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx9, inputy9, elem9, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx10, inputy10, elem10, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx11, inputy11, elem11, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx12, inputy12, elem12, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx13, inputy13, elem13, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx14, inputy14, elem14, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx15, inputy15, elem15, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx16, inputy16, elem16, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx17, inputy17, elem17, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx18, inputy18, elem18, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx19, inputy19, elem19, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx20, inputy20, elem20, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx21, inputy21, elem21, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx22, inputy22, elem22, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx23, inputy23, elem23, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx24, inputy24, elem24, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx25, inputy25, elem25, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx26, inputy26, elem26, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx27, inputy27, elem27, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx28, inputy28, elem28, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx29, inputy29, elem29, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx30, inputy30, elem30, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx31, inputy31, elem31, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx32, inputy32, elem32, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx33, inputy33, elem33, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx34, inputy34, elem34, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx35, inputy35, elem35, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx36, inputy36, elem36, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx37, inputy37, elem37, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx38, inputy38, elem38, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx39, inputy39, elem39, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx40, inputy40, elem40, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx41, inputy41, elem41, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx42, inputy42, elem42, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx43, inputy43, elem43, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx44, inputy44, elem44, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx45, inputy45, elem45, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx46, inputy46, elem46, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx47, inputy47, elem47, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx48, inputy48, elem48, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx49, inputy49, elem49, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx50, inputy50, elem50, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx51, inputy51, elem51, L2);
    detectar_posicion_anterior(xcopia, ycopia, inputx52, inputy52, elem52, L2);
  }
  return 0;
}