'''
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

4. Faça um algoritmo que peça a idade do usuário e apresente uma mensagem de acordo
com sua faixa etária:
a. Se for maior ou igual a 65 anos: “você está na melhor idade”;
b. Se for maior ou igual a 40 anos (e menor que 65): “você está na meia idade”;
c. Se for maior ou igual a 30 anos (e menor que 40): “você é adulto”;
d. Se for maior ou igual a 18 anos (e menor que 30): “você é adulto jovem”;
e. Se for maior ou igual a 12 anos (e menor que 18): “você é adolescente”;
f. Se for maior ou igual a 2 anos (e menor que 12): “você é criança”;
g. Se não for nenhuma das anteriores (menor de 2 anos): “você é bebê”.
'''

idade = int(input("Informe sua idade: "))

if (idade >= 65):
    print("Você está na melhor idade")
elif ((idade >= 40) & (idade < 65)): 
    print("Você está na meia idade")
elif ((idade >= 30) & (idade < 40)): 
    print("Você é adulto")
elif ((idade >= 18) & (idade < 30)): 
    print("Você é adulto jovem")
elif ((idade >= 12) & (idade < 18)): 
    print("Você é adolescente")
elif ((idade >= 2) & (idade < 12)): 
    print("Você é criança")
else:
    print("Você é bebê")  






