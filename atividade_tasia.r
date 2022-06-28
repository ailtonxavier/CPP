#1. Escreva um algorítimo na linguagem R que atenda os seguintes requisitos:

#a) Em R, defina uma matriz de dimensão 2 x 2 e outras duas matrizes de dimensão 4x4.

M = matrix(1:4, nrow = 2)
M2 = matrix(1:16, nrow = 4, byrow = true)
M3 = matrix(10:26, nrow = 4, byrow = true)

#b) Defina três vetores com 9 elementos, cada um.
v1 = c(1,2,3,4,5,6,7,8,9)
v2 = c(1,3,5,7,9,11,13,15,17)
v3 = c()

#c) Transforme os vetores em matrizes quadráticas.

#d) Realize operações entre as matrizes: adição, subtração, multiplicação por escalares, multiplicação de matricial e multiplicação entre elemento a elemento das matrizes.

#e) Calcule as transpostas, inversas e  determinantes da matriz 2 e 3.

#f) Qual a matriz resultante do produto da quinta matriz pela transposta da sexta?

#g) Calcule a razão entre o determinante pelo traço da primeira matriz.