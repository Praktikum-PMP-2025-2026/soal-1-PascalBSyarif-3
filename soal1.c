/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
 *   Modul               : 5
 *   Hari dan Tanggal    : Senin, 11 Mei 2026
 *   Nama (NIM)          : Pascal Baihaqi Syarif (13224027)
 *   Nama File           : soal1.c
 *   Deskripsi           : program yang menerima input adjMatrix NxN dan mengeluarkan output derajat vertexnya, vertex dengan derajat tertinggi, dan vertex terisolasi
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int N;
    scanf("%d", &N);
    int adjMatrix[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            //printf("Input [%d][%d]: ", i, j);
            scanf("%d", &adjMatrix[i][j]);
        }   
    }
    
    int isolated[N];
    int maxVal = 0;
    int maxI;
    for (int i = 0; i < N; i++)
    {
        int degree = 0;
        for (int j = 0; j < N; j++)
        {
            if (adjMatrix[i][j] == 1)
            {
                degree++;
            }
        }
        if (degree > maxVal)
        {
            maxI = i;
            maxVal = degree;
        }
        if (degree == 0)
        {
            isolated[i] = 1;
        }
        printf("DEGREE %d %d\n", i, degree);
    }
    
    printf("MAX_VERTEX %d\n", maxI);
    printf("ISOLATED");
    int flag = 0;
    for (int i = 0; i < N; i++)
    {
        if (isolated[i] == 1)
        {
            printf(" %d", i);
            flag = 1;
        }
    }
    if (flag == 0)
    {
        printf(" NONE");
    }
    
    
}
