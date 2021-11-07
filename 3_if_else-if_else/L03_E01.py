'''
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

1. Faça um algoritmo que peça um número inteiro. Em seguida, o algoritmo deve
apresentar uma mensagem conforme a seguinte regra:
a. Se o valor for positivo: “Valor positivo”;
b. Se o valor for negativo: “Valor negativo”;
c. Se não for nenhuma das opções (se for 0): “Valor neutro”.
'''

num = int(input("Informe um valor inteiro qualquer: "))

if (num > 0):
    print("Valor positivo")
elif (num < 0):
    print("Valor negativo")    
else:
    print("Valor neutro") 




