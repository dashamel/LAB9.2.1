#include <stdio.h>
#include <conio.h>

#define SQR(x) ((x) * (x)) 
#define MAX(a, b) (((a) > (b)) ? (a) : (b)) 
#define MIN(a, b) (((a) < (b)) ? (a) : (b)) 

// ��������� ���������� ��� ������ �����
#define PRINTI(w) puts("Control output: "); \
 printf(#w" = %d\n", w)

// ��������� ���������� ��� ������� �����
#define PRINTR(w) puts("Result: "); \
 printf(#w" = %f\n", (float)w)

void main() {
    puts("Task: Calculate w based on x, y, z and display square, min, and max");

    int x, y, z;  // ���� ��� �������� ������������
    int w;        // ��������� ���������� w
    int result1, result2; // ������ ���������� ��� max/min
    char ch;      // ��� ���������� �����

    do {
        puts("Enter values for x, y, and z:"); 
        scanf("%d", &x); 
        PRINTI(x); 

        scanf("%d", &y); 
        PRINTI(y); 

        scanf("%d", &z); 
        PRINTI(z); 

        // ���������� w � ��������� �� z
        if (z > 3) {     
            result1 = SQR(x + y);  
            result2 = SQR(x - z);     
            w = MAX(result1, result2);  // ��������� ��������   
            PRINTI(result1);  // ��������� �������� (x + y)^2 
            PRINTI(result2);  // ��������� �������� (x - z)^2 
            PRINTI(w);       // ��������� ��������� 
        }  
        else
        if (z <= 3)  
        {
            result1 = x * y + y * z;
            result2 = SQR(x * z + y * z); 
            w = MIN(result1, result2);  // ��������� ����� 
            PRINTI(result1);  // ��������� xy + yz
            PRINTI(result2);  // ��������� (zx + yz)^2
            PRINTI(w);       // ��������� ������
        }

        puts("Repeat? (y/n)");
        ch = getch();
    } while (ch == 'y');
}
