//Defini��o do tipo
typedef struct{
    int numero;
    double saldo;
} ContaBancaria;

//cabe�alho das fun��es
void Inicializa (ContaBancaria* conta, int numero, double saldo);
void Deposito (ContaBancaria* conta, double valor);
void Saque (ContaBancaria* conta, double valor);
void Imprime (ContaBancaria conta);
