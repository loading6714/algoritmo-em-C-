
int main() {
    // Variáveis de entrada (0 = não, 1 = sim)
    int temCompromisso, vaiEstarNaCidade, temDinheiro, estaChovendo;

    // Carrega as respostas (1 para sim, 0 para não)
    printf("Tem compromisso no dia? (1 para sim, 0 para não): ");
    scanf("%d", &temCompromisso);
    printf("Vai estar na cidade? (1 para sim, 0 para não): ");
    scanf("%d", &vaiEstarNaCidade);
    printf("Tem dinheiro? (1 para sim, 0 para não): ");
    scanf("%d", &temDinheiro);
    printf("Está chovendo? (1 para sim, 0 para não): ");
    scanf("%d", &estaChovendo);

    // Verifica se vai fazer o passeio
    if (!temCompromisso && vaiEstarNaCidade && temDinheiro && !estaChovendo) {
        printf("Você vai fazer o passeio!\n");
    }
    else if (temCompromisso || !vaiEstarNaCidade || !temDinheiro || estaChovendo) {
        printf("Você não vai fazer o passeio!\n");
    }

    return 0;  // Corrigido com ponto e vírgula
}
