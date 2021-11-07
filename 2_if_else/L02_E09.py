'''
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

9 - Em uma indústria de parafusos, um algoritmo determina se a produção está boa ou ruim.
Uma produção é ruim quando o número de parafusos com defeito for maior do que 10% do
total produzido. Faça um algoritmo que peça o número total de parafusos produzidos e, em
seguida, peça o número de parafusos com defeito. O algoritmo, então, deve calcular o limite
de peças com defeito permitidas (com base no total de peças produzidas e a porcentagem
limite) e apresentar se a produção está boa ou ruim.
'''

parafusos_t = int(input("Informe a quantidade total de parafusos produzidos: "))
parafusos_d = int(input("Informa a quantidade de parafusos com defeito: "))

percentual_d = ((parafusos_d / parafusos_t) * 100)

if (percentual_d > 10):
    print("A produção está ruim, percentual de defeitos igual a: {}%".format(percentual_d))
    #print("A produção está ruim, percentual de defeitos igual a: ", percentual,"%") 
else:
    print("A produção está boa, percentual de defeitos igual a: {}%".format(percentual_d))
    #print("A produção está boa, percentual de defeitos igual a: ", percentual,"%")  




