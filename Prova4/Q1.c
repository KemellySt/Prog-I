int Quantidade(int vetor[], int tam, int Pesquisa)
{
    int quantidade = 0;
    for(int aux = 0, aux < tam; aux++)
    {
        if(vetor[aux] == Pesquisa)
        {
            quantidade = quantidade + 1;
        }
    }
    return quantidade;
}