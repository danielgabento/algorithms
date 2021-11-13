'''
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

3. Faça um programa que peça a idade do usuário. Se ele tiver entre 18 e 65 anos, apresentar a
mensagem: “Você é obrigado a votar”. Do contrário, apresentar a mensagem: “você não é
obrigado a votar”.
'''

idade = int(input("Informe sua idade: "))


if ((idade >= 18) & (idade <= 65)):
    print("Você é obrigado a votar")
else:
    print("Vocẽ não é obrigado a votar")  






