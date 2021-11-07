'''
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

3 - Faça um algoritmo que peça a temperatura corporal do 
usuário. Se a temperatura for menor que 37, apresentar a mensagem 
“você está sem febre”. Do contrário, apresentar a mensagem “você está com febre!”.
'''

temp = float(input("Digite sua temperatura: "))

if (temp < 37):
    print("Você está sem febre")
else:
    print("Você está com febre")


