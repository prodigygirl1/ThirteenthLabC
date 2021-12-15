// ThirteenthLabC.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define NUM 10

int array[NUM] = {1, 3, 4, 8, 9, 10, 11, 15, 16, 18};

int factorial(int n) {
    if (n == 0)
        return 1;
    int res = factorial(n - 1) * n;
    return res;
}


void f1(int n) {
    printf("%d ", n);
    if (n > 1)
        f1(n - 2);
    
    
}

void f2(int n) {
    if (n > 1) {
        f2(n - 2);
    }
    printf(" %d", n);
    
}

void f3(int n) {
    printf("%d ", n);
    if (n > 1)
        f3(n - 2);
    printf(" %d", n);
}

void recEGE1(int n) {
    if (n >= 1) {
        printf(" %d", n);
        recEGE1(n - 1);
        recEGE1(n - 1);
    }
}


void F1(int n) {
    if (n > 2) {
        printf("%d\n", n);
        F1(n - 3);
        F1(n - 4);
    }
}

void F2(int n) {
    printf("%d\n", n);
    if (n < 5) {
        F2(n + 1);
        F2(n + 3);
    }
}

void G3(int n);

void F3(int n) {
    if (n > 0)
        G3(n - 1);
}

void G3(int n) {
    printf("*");
    if (n > 1)
        F3(n - 3);
}

void printarray() {
    for (int i = 0; i < NUM; i++) {
        printf("%d ", array[i]);
    }
    printf("\n\n");
}

int contains(int key) {
    int l = 0; 
    int r = 9; 
    int mid;
    bool flag = false;
    while ((l <= r) && (flag != true)) {
        mid = (l + r) / 2; 

        if (array[mid] == key) 
            flag = true; 
        if (array[mid] > key) 
            r = mid - 1; 
        else 
            l = mid + 1;
    }
    if (flag) 
        return key;
    else
        return NULL;
}

int containsR(int l, int r, int key) {
    int mid = (l + r) / 2;
    if (array[mid] == key)
        return key;
    if (l > r)
        return 0;
    if (array[mid] > key)
        return containsR(l, mid - 1, key);
    else
        return containsR(mid + 1, r, key);
}

// ДЗ - Задание из ЕГЭ №1
int EGE1_1(int n);

int EGE1(int n)
{
    if (n > 2)
        return EGE1(n - 1) + EGE1_1(n - 2);
    else return 1;
}
int EGE1_1(int n)
{
    if (n > 2)
        return EGE1_1(n - 1) + EGE1(n - 2);
    else return 1;
}
// ДЗ - Задание из ЕГЭ №2
void EGE3(int n)
{
    printf("%d\n", n);
    if (n >= 3) {
        EGE3(n - 1);
        EGE3(n - 2);
        EGE3(n - 2);
    }
}


int main()
{
    //printf("%d", factorial(5));
    /*printf("f1()\n");
    f1(11);

    printf("\n");
    printf("f2()\n");
    f2(11);

    printf("\n");
    printf("f3()\n");
    f3(11);
   */

    //recEGE1(3);
    //F1(10);
    //F2(1);
    //F3(11);
    // 9 task
    /*printarray();
    printf("contains(1) = %d\n", contains(1));
    printf("contains(2) = %d\n", contains(2));
    printf("contains(3) = %d\n", contains(3));
    printf("contains(4) = %d\n", contains(4));
    printf("contains(5) = %d\n", contains(5));
    printf("contains(6) = %d\n", contains(6));
    printf("contains(10) = %d\n", contains(10));
    printf("\n\n");
    printf("containsR(1) = %d\n", containsR(0, NUM -1, 1));
    printf("containsR(2) = %d\n", containsR(0, NUM - 1, 2));
    printf("containsR(3) = %d\n", containsR(0, NUM - 1, 3));
    printf("containsR(4) = %d\n", containsR(0, NUM - 1, 4));
    printf("containsR(5) = %d\n", containsR(0, NUM - 1, 5));
    printf("containsR(6) = %d\n", containsR(0, NUM - 1, 6));
    printf("containsR(10) = %d\n", containsR(0, NUM - 1, 10));
    printf("containsR(15) = %d\n", containsR(0, NUM - 1, 15));*/
    printf("%d ", EGE1(7));
    //EGE2(4);

}

