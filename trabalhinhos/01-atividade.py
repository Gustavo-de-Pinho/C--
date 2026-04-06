mochila={
    'itens':[],
    'CargaMax':0,
}

armario=[

]

def bubleSort(armario):
    n = len(armario)

    for i in range(n):
        for j in range(0, n-i-1):
            razao1 = armario[j][1] / armario[j][2]
            razao2 = armario[j+1][1] / armario[j+1][2]
            if razao2 > razao1:
                temporario = armario[j]
                armario[j]=armario[j+1]
                armario[j+1]=temporario
#poderia so ter feito armario[j], armario[j+1] = armario[j+1], armario[j] tbm
            elif razao1 == razao2:
                if armario[j][0] > armario[j+1][0]:
                    temporario = armario[j]
                    armario[j]=armario[j+1]
                    armario[j+1]=temporario


def colocandoParaDentro(mochila, armario):
    bubleSort(armario)
    capacidade_restante = mochila['CargaMax']

    for item in armario:
        if capacidade_restante <= 0:
            break
            
        idx_orig = item[0]
        utilidade_unitaria = [1]
        peso_unitario = item[2]
        estoque_disponivel = item[3]
        
        qtd_que_cabem_pelo_peso = capacidade_restante // peso_unitario
        qtd_final = min(qtd_que_cabem_pelo_peso, estoque_disponivel)
        #fazer sem o min poderia levar algumas boas de codigo a mais
        
        if qtd_final > 0:
            mochila['itens'].append([idx_orig, qtd_final])
            #professor pediu exatamente dessa forrma
    
            capacidade_restante -= (qtd_final * peso_unitario)


idx_orig = 0
continuar = True

while continuar:
    linha = input()             
    partes = linha.split() #quebra nos espacos
    
    utilidade_unitaria = int(partes[0])
    peso_unitario = int(partes[1])
    estoque_disponivel = int(partes[2])

    if utilidade_unitaria == -1:
        continuar = False
    else:
        item = [idx_orig, utilidade_unitaria, peso_unitario, estoque_disponivel]
        armario.append(item)
        idx_orig = idx_orig + 1

capacidade_lida = input()
mochila['CargaMax'] = int(capacidade_lida)

colocandoParaDentro(mochila, armario)

for i in range(len(mochila['itens'])):
    item_escolhido = mochila['itens'][i]
    print(item_escolhido[0], item_escolhido[1])