int Somatorio(int num)
{
    int somatorio;
    for(int aux = 1; aux < num; aux++)
    {
        somatorio = somatorio + aux;
    }
    return somatorio;
}
int Somatorio(int num)
{
    int somatorio;
    if(num == 0)
    {
        return 0;
    }
    else
    somatorio = Somatorio(num-1) + num;
    return somatorio;
}