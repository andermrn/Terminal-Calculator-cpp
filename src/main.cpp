#include <iostream>
#include <cmath>
#include <vector>
#include <string>
using namespace std;

float soma(float n1f, float n2f);
float subtracao(float n1f, float n2f);
float multiplicacao(float n1f, float n2f);
float divisao(float n1f, float n2f);
float potencia(float n1f, float n2f);
float raiz(float n1f);

int main()
{
    int opcao;
    float n1f, n2f, resultadof;
    vector<float> historico;

    do
    {
        cout << "\n=================================\n\tCALCULADORA C++\n=================================\n\n1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n5 - Potencia\n6 - Raiz quadrada\n7 - Mostrar historico\n8 - Limpar historico\n9 - Sair\n\nEscolha uma opcao: ";
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            cout << "\n=== SOMA ===\n\nDigite o primeiro numero: ";
            cin >> n1f;
            cout << "Digite o segundo numero: ";
            cin >> n2f;
            resultadof = soma(n1f, n2f);
            cout << "\nResultado: " << resultadof;
            historico.push_back(resultadof);
            break;
        case 2:
            cout << "\n=== SUBTRACAO ===\n\nDigite o primeiro numero: ";
            cin >> n1f;
            cout << "Digite o segundo numero: ";
            cin >> n2f;
            resultadof = subtracao(n1f, n2f);
            cout << "\nResultado: " << resultadof;
            historico.push_back(resultadof);
            break;
        case 3:
            cout << "\n=== MULTIPLICACAO ===\n\nDigite o primeiro numero: ";
            cin >> n1f;
            cout << "Digite o segundo numero: ";
            cin >> n2f;
            resultadof = multiplicacao(n1f, n2f);
            cout << "\nResultado: " << resultadof;
            historico.push_back(resultadof);
            break;
        case 4:
            cout << "\n=== DIVISAO ===\n\nDigite o primeiro numero: ";
            cin >> n1f;
            cout << "Digite o segundo numero: ";
            cin >> n2f;
            if (n2f == 0)
            {
                cout << "\nERRO: Nao e possivel dividir por zero.\n";
                break;
            }
            else
            {
                resultadof = divisao(n1f, n2f);
                cout << "\nResultado: " << resultadof;
                historico.push_back(resultadof);
            }
            break;
        case 5:
            cout << "\n=== POTENCIA ===\n\nDigite a base: ";
            cin >> n1f;
            cout << "Digite o expoente: ";
            cin >> n2f;
            resultadof = potencia(n1f, n2f);
            cout << "\nResultado: " << resultadof;
            historico.push_back(resultadof);
            break;
        case 6:
            cout << "\n=== RAIZ QUADRADA ===\n\nDigite um numero: ";
            cin >> n1f;
            if (n1f < 0)
            {
                cout << "\nERRO: Nao existe raiz quadrada real de numero negativo.\n";
            }
            else
            {
                resultadof = raiz(n1f);
                cout << "\nResultado: " << resultadof;
                historico.push_back(resultadof);
            }
            break;
        case 7:
            cout << "\n=== HISTORICO ===\n\n";
            if (historico.empty())
            {
                cout << "\nHistorico vazio.";
            }
            else
            {
                for (int i = 0; i < historico.size(); i++)
                {
                    cout << i + 1 << " - " << historico[i] << endl;
                }
            }
            break;
        case 8:
            if (historico.size() == 0)
            {
                cout << "\nNao existe nenhum resultado no seu historico.\n";
            }
            else
            {
                historico.clear();
                cout << "\nHistorico apagado com sucesso.";
            }
            break;
        case 9:
            cout << "\nEncerrando calculadora...";
            break;
        default:
            cout << "ERRO: Opcao invalida!";
            break;
        }
    } while (opcao != 9);

    return 0;
}
float soma(float n1f, float n2f)
{
    return (n1f + n2f);
}
float subtracao(float n1f, float n2f)
{
    return (n1f - n2f);
}
float multiplicacao(float n1f, float n2f)
{
    return (n1f * n2f);
}
float divisao(float n1f, float n2f)
{
    return (n1f / n2f);
}
float potencia(float n1f, float n2f)
{
    return pow(n1f, n2f);
}
float raiz(float n1f)
{
    return sqrt(n1f);
}
