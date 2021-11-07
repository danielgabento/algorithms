'''
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

8 - Faça um algoritmo que peça dois valores inteiros. Em seguida, o algoritmo deve apresentar
primeiro o valor mais baixo e, depois, o valor mais alto. Observação: faça de conta que o
usuário nunca digitará o mesmo valor nas duas vezes.
'''

valor_1 = int(input("Digite um valor inteiro qualquer: "))
valor_2 = int(input("Digite outro inteiro qualquer: "))

if (valor_1 > valor_2):
    print("Valor mais baixo: {} \nValor mais alto: {}".format(valor_2, valor_1))
    #print("Valor mais baixo: ", valor_2,"\nValor mais alto: ", valor_1) 
else:
    print("Valor mais baixo: {} \n Valor mais alto: {}".format(valor_1, valor_2))
    #print("Valor mais baixo: ", valor_1,"\nValor mais alto: ", valor_2) 




