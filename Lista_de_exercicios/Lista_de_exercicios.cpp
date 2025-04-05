#include <stdio.h>

//Exercicio 1: Crie um programa que declare e inicialize variáveis de tipos básicos (int, float, double, char, bool) e imprima seus valores na tela.
//int main() {
//    int inteiro = 10;
//    float flutuante = 3.14f;
//    double duplo = 2.71828;
//    char caractere = 'A';
//    bool booleano = 1; // Em C, booleanos são representados por 0 (falso) e 1 (verdadeiro)
//
//    printf("Inteiro: %d\n", inteiro);
//    printf("Flutuante: %.2f\n", flutuante);
//    printf("Duplo: %.5lf\n", duplo);
//    printf("Caractere: %c\n", caractere);
//    printf("Booleano: %d\n", booleano);
//
//    return 0;
//}

//Exercicio 2: Crie um programa que peça ao usuario que digite um caractere e imprima o codigo ASCII correspondente.
//int main() {
//    char caractere;
//
//    printf("Digite um caractere: ");
//    scanf_s(" %c", &caractere, 1); // Adiciona o tamanho do buffer como argumento
//    printf("O codigo ASCII de '%c' é: %d\n", caractere, (int)caractere);
//    return 0;
//}

//Exercicio 3: Crie um programa que peça ao usuario que digite dois numeros inteiros e imprima a soma, a diferença, o produto e o quociente desses numeros.
//int main() {
//    int num1, num2;
//
//    printf("Digite o primeiro numero inteiro: ");
//    scanf_s("%d", &num1);
//
//    printf("Digite o segundo numero inteiro: ");
//	  scanf_s("%d", &num2);
//
//    printf("Soma: %d\n", num1 + num2);
//    printf("Diferenca: %d\n", num1 - num2);
//    printf("Produto: %d\n", num1 * num2);
//
//    if (num2 != 0) 
//    {
//        printf("Quociente: %.2f\n", (float)num1 / num2);
//    } else
//    {
//        printf("Divisao por zero nao e permitida.\n");
//	}
//	return 0;
//}

//Exercicio 4: Crie um programa que peça ao usuario que digite um numero inteiro e imprima a tabuada desse numero de 1 a 10.
//int main() {
//	int numero;
//
//	printf("Digite um numero inteiro: ");
//	scanf_s("%d", &numero);
//	printf("Tabuada de %d:\n", numero);
//
//	for (int i = 1; i <= 10; i++) {
//		printf("%d x %d = %d\n", numero, i, numero * i);
//	}
//
//	return 0;
//}

//Exercicio 5: Crie um programa que peça ao usuario que digite a base e a altura de um triangulo e imprima a area desse triangulo.
//int main() {
//	float base, altura;
//
//	printf("Digite a base do triangulo: ");
//	scanf_s("%f", &base);
//	printf("Digite a altura do triangulo: ");
//	scanf_s("%f", &altura);
//
//	float area = (base * altura) / 2;
//
//	printf("A area do triangulo e: %.2f\n", area);
//
//	return 0;
//}

//Exercicio 6: Crie um programa que peça ao usuario que digite tres numeros inteiros, calcule a media como um numero de ponto flutuante e imprima o resultado.
//int main() {
//	int num1, num2, num3;
//	float media;
//
//	printf("Digite o primeiro numero inteiro: ");
//	scanf_s("%d", &num1);
//	printf("Digite o segundo numero inteiro: ");
//	scanf_s("%d", &num2);
//	printf("Digite o terceiro numero inteiro: ");
//	scanf_s("%d", &num3);
//
//	media = (float)(num1 + num2 + num3) / 3;
//
//	printf("A media dos numeros e: %.2f\n", media);
//
//	return 0;
//}

//Exercicio 7: Crie um programa que declare uma variavel int e uma variavel char, atribua a eles valores que o usuario digitar. Em seguida, incremente cada
// uma um varias vezes(o numero de vezes eh fornecido pelo usuario) e imprima os resultados.
//int main() {
//	int numero;
//	char caractere;
//	int vezes;
//
//	printf("Digite um numero inteiro: ");
//	scanf_s("%d", &numero);
//	printf("Digite um caractere: ");
//	scanf_s(" %c", &caractere, 1); // Adiciona o tamanho do buffer como argumento
//	printf("Quantas vezes deseja incrementar? ");
//	scanf_s("%d", &vezes);
//
//	numero += vezes;
//	caractere += vezes;
//
//	printf("Numero incrementado: %d\n", numero);
//	printf("Caractere incrementado: %c\n", caractere);
//
//	return 0;
//}

//Exercicio 8: Crie uma função que recebe dois numeros inteiros e retorna a soma deles. Ultilize essa função em seu programa principal.
//int soma(int a, int b) {
//    return a + b;
//}
//
//int main() {
//    int num1, num2;
//
//    printf("Digite o primeiro numero inteiro: ");
//    scanf_s("%d", &num1);
//    printf("Digite o segundo numero inteiro: ");
//    scanf_s("%d", &num2);
//
//	int resultado = soma(num1, num2);
//
//	printf("A soma de %d e %d e: %d\n", num1, num2, resultado);
//
//    return 0;
//}

//Exercicio 9: Crie uma função chamada "ParOuImpar" que recebe um numero inteiro e imprime se ele é par ou ímpar. Utilize essa função em seu programa principal.
//void ParOuImpar(int numero) {
//	if (numero % 2 == 0) {
//		printf("%d e par.\n", numero);
//	}
//	else {
//		printf("%d e impar.\n", numero);
//	}
//}
//
//int main() {
//	int numero;
// 
//	printf("Digite um numero inteiro: ");
//	scanf_s("%d", &numero);
// 
//	ParOuImpar(numero);
// 
//	return 0;
//}

//Exercicio 10: Crie um programa que declare uma variavel global e uma função. A função deve modificar o valor da variavel global para o valor informado pelo
// usuario e o programa principal deve imprimir este valor.
//int variavelGlobal;
//
//void modificarVariavelGlobal(int valor) {
//	variavelGlobal = valor;
//}
//
//int main() {
//	int valor;
// 
//	printf("Digite um valor inteiro: ");
//	scanf_s("%d", &valor);
// 
//	modificarVariavelGlobal(valor);
// 
//	printf("Valor da variavel global: %d\n", variavelGlobal);
// 
//	return 0;
//}

//Exercicio 11: Crie uma função que declare uma variavel estatica. A função deve incrementar o valor da variavel estatica e imprimir o resultado. Chame essa
// função varias vezes no programa principal e observe o comportamento da variavel.
//void incrementarEstatica() {
//	static int contador = 0; // Variável estática
//	contador++;
//
//	printf("Valor da variavel estatica: %d\n", contador);
//}
//
//int main() {
//	int vezes;
//
//	printf("Quantas vezes deseja incrementar? ");
//	scanf_s("%d", &vezes);
//
//	for (int i = 0; i < vezes; i++) {
//		incrementarEstatica();
//	}
//
//	return 0;
//}

//Exercicio 12: Crie um programa que declare duas variaveis globais. Uma função deve modificar o valor dessas variaveis. Outra função deve imprimir o valor
// dessas variaveis.
//int variavelGlobal1;
//int variavelGlobal2;
//
//void modificarVariaveisGlobais(int valor1, int valor2) {
//	variavelGlobal1 = valor1;
//	variavelGlobal2 = valor2;
//}
//
//void imprimirVariaveisGlobais() {
//	printf("Valor da variavel global 1: %d\n", variavelGlobal1);
//	printf("Valor da variavel global 2: %d\n", variavelGlobal2);
//}
//
//int main() {
//	int valor1, valor2;
//	printf("Digite o primeiro valor inteiro: ");
//	scanf_s("%d", &valor1);
//	printf("Digite o segundo valor inteiro: ");
//	scanf_s("%d", &valor2);
//	modificarVariaveisGlobais(valor1, valor2);
//	imprimirVariaveisGlobais();
//	return 0;
//}

//Exercicio 13: Crie uma função que declare uma variavel estatica e outra função que declare uma variavel automatica. Ambas as funções devem incrementar o valor
// das respectivas variaveis e imprimir o resultado. Chame essas funções varias vezes no programa principal e observe o comportamento das variaveis.
//void incrementarEstatica() {
//	static int contadorEstatica = 0; // Variável estática
//	contadorEstatica++;
//	printf("Valor da variavel estatica: %d\n", contadorEstatica);
//}
//
//void incrementarAutomatica() {
//	int contadorAutomatica = 0; // Variável automática
//	contadorAutomatica++;
//	printf("Valor da variavel automatica: %d\n", contadorAutomatica);
//}
//
//int main() {
//	int vezes;
//	printf("Quantas vezes deseja incrementar? ");
//	scanf_s("%d", &vezes);
//	for (int i = 0; i < vezes; i++) {
//		incrementarEstatica();
//		incrementarAutomatica();
//	}
//	return 0;
//}