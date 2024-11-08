#include <stdio.h>
#include <conio.h>

#define SQR(x) ((x) * (x)) 
#define MAX(a, b) (((a) > (b)) ? (a) : (b)) 
#define MIN(a, b) (((a) < (b)) ? (a) : (b)) 

// Виведення результату для цілого числа
#define PRINTI(w) puts("Control output: "); \
 printf(#w" = %d\n", w)

// Виведення результату для дійсного числа
#define PRINTR(w) puts("Result: "); \
 printf(#w" = %f\n", (float)w)

void main() {
    puts("Task: Calculate w based on x, y, z and display square, min, and max");

    int x, y, z;  // Змінні для введення користувачем
    int w;        // Результат обчислення w
    int result1, result2; // Проміжні результати для max/min
    char ch;      // Для повторення циклу

    do {
        puts("Enter values for x, y, and z:"); 
        scanf("%d", &x); 
        PRINTI(x); 

        scanf("%d", &y); 
        PRINTI(y); 

        scanf("%d", &z); 
        PRINTI(z); 

        // Обчислення w в залежності від z
        if (z > 3) {     
            result1 = SQR(x + y);  
            result2 = SQR(x - z);     
            w = MAX(result1, result2);  // Знаходимо максимум   
            PRINTI(result1);  // Виведення квадрата (x + y)^2 
            PRINTI(result2);  // Виведення квадрата (x - z)^2 
            PRINTI(w);       // Виведення максимуму 
        }  
        else
        if (z <= 3)  
        {
            result1 = x * y + y * z;
            result2 = SQR(x * z + y * z); 
            w = MIN(result1, result2);  // Знаходимо мінімум 
            PRINTI(result1);  // Виведення xy + yz
            PRINTI(result2);  // Виведення (zx + yz)^2
            PRINTI(w);       // Виведення мінімуму
        }

        puts("Repeat? (y/n)");
        ch = getch();
    } while (ch == 'y');
}
