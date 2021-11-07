'''
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

2. Faça um algoritmo que peça o salário do usuário e apresente uma mensagem de qual
classe social você pertence de acordo com a faixa salarial:
a. Se ganha mais de R$ 18.000: “você é classe A”;
b. Se ganha mais de R$ 9.000: “você é classe B”;
c. Se não for nenhuma das anteriores (se ganha menos de R$ 9.000): “você é
classe C ou menor”.
'''

salario = int(input("Informe seu salario: "))

if (salario > 18000):
    print("Você é classe A")
elif ((salario > 9000) & (salario <= 18000)):
    print("Você é classe B")    
else:
    print("Você é classe C ou menor") 




