int main()
{
    int num1, num2;
    float num3, num4;
    double num5, num6;


    printf("SOMA - Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("SOMA - Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Resultado da soma: %d\n\n", num1 + num2);


    printf("MULTIPLICACAO - Digite o primeiro numero: ");
    scanf("%f", &num3);

    printf("MULTIPLICACAO - Digite o segundo numero: ");
    scanf("%f", &num4);

    printf("Resultado da multiplicacao: %.2f\n\n", num3 * num4);


    printf("DIVISAO - Digite o primeiro numero: ");
    scanf("%lf", &num5);

    printf("DIVISAO - Digite o segundo numero: ");
    scanf("%lf", &num6);

    if (num6 != 0)
    {
        printf("Resultado da divisao: %.2lf\n", num5 / num6);
    }
    else
    {
        printf("Nãó é possivel dividir por zero.\n");
    }

    return 0;
}
