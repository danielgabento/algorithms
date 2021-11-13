'''
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

5. Imagine um parque infantil. Faça um programa que peça a altura do usuário e a idade.
a. Se tiver altura menor que 1,6m, pode entrar no parque. Neste caso:
i. Se tiver menos ou 5 anos, escreva a mensagem: “Pode brincar no pula-pula e
Casinha”;
ii. Se tiver entre 5 e 8 anos, escreva a mensagem: “Pode brincar na prancha do pirata
e piscina de bolinhas”.
iii. Se tiver mais de 8 anos, escreva a mensagem: “Pode brincar de pebolim, pingpong
e basquete”.
b. Se tiver altura maior ou igual a 1,6m, escreva a mensagem: “Você é muito grande para
entrar no parque”. 
'''


print("\n||||| Seja bem-vindo ao parque |||||\n\n")

ALT = float(input("Antes de entrar, informe sua altura (em metros): "))
IDADE = int(input("Informe sua idade (em anos): "))


if (ALT < 1.6):
    if(IDADE <= 5):
        print("Pode brincar no pula-pula e casinha")
    elif((IDADE > 5) & (IDADE <= 8)):
        print("Pode brincar na prancha do pirata e piscina de bolinhas")
    else:
        print("Pode brincar de pebolim, pingpong e basquete")
else:
    print("Você é muito grande para entrar no parque")





