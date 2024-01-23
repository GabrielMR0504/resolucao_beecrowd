while True:
    try:
        n = int(input())
        while n:
            n -= 1
            palavra_1, palavra_2 = [i for i in input().split(' ')]
            tamanho_1 = len(palavra_1)
            tamanho_2 = len(palavra_2)
            
            p_comparacao = palavra_1[tamanho_1-tamanho_2:]
            if p_comparacao == palavra_2:
                print('encaixa')
                continue
            print('nao encaixa')
    except EOFError:
        break