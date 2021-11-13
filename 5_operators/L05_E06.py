'''
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

6. Imagine um problema de gerenciamento de fila de um banco que emite senhas para aguardar
na fila. Faça um programa que:
a. Peça o número da senha para o usuário;
b. Apresente o menu 1-Prioridade; 2-Aposentado; 3-Comum.
c. Se o número da senha for menor que 100, o programa deve apresentar a mensagem:
“aguarde para ser atendido”.
d. Senão, o programa deve apresentar uma mensagem, conforme a opção:
i. Se for 1, “Você será reagendado para amanhã”;
ii. Se for 2, “Você será reagendado para depois de amanhã”;
iii. Se for 3, “Você deve tentar outro dia”.
'''


print("\n||||| Atendimento |||||\n\n")

SENHA = int(input("Informe sua senha: "))
print("Informe o tipo de senha\n")
print("1 - Prioridade")
print("2 - Aposentado")
print("3 - Comum")
MENU = int(input(">: "))


if (SENHA >= 100):
    if(MENU == 1):
        print("Você será reagendado para amanhã")
    elif(MENU == 2):
        print("Você será reagendado para depois de amanhã")
    elif(MENU == 3):
        print("Você deve tentar outro dia")    
    else:
        print("Opção informada não confere!!!")
else:
    print("Aguarde para ser atendido")





