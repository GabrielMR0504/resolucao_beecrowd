while True:
    try:
        num_atributos = int(input())
        num_cartas_marcos, num_cartas_leonardo = [int(i) for i in input().split(' ')]
        list_cartas_marcos= []
        for _ in range(num_cartas_marcos):
            list_cartas_marcos.append([int(i) for i in input().split(' ')])
        
        list_cartas_leonardo = [] 
        for _ in range(num_cartas_leonardo):
            list_cartas_leonardo.append([int(i) for i in input().split(' ')])
        
        escolha_marcos, escolha_leonardo = [int(i) -1 for i in input().split(' ')]
        carta_marcos = list_cartas_marcos[escolha_marcos]
        carta_leonardo = list_cartas_leonardo[escolha_leonardo]

        atributo = int(input()) - 1
        if carta_marcos[atributo] > carta_leonardo[atributo]:
            print('Marcos')
        elif carta_marcos[atributo] < carta_leonardo[atributo]:
            print('Leonardo')
        else:
            print('Empate')

    except EOFError:
        break