# Fonte de Tensão

Projeto de uma fonte de tensão realizada para a disciplina de [Eletrônica para Computação](https://uspdigital.usp.br/jupiterweb/obterDisciplina?sgldis=SSC0180&codcur=55041&codhab=0) do curso de Ciências de Computação do ICMC-USP, ministrada por Eduardo Valle Simões.

## Especificações

> Construir uma fonte de tensão regulada, ajustável, com onda completa, que receba 127V a 220V e tenha como saída de 3V até 12V, fornecendo 100mA a 12V.

## Introdução aos componentes

*Clique no nome do elemento para mais informações.*

Nome                 | Funcionalidade básica
:--------------------|:--------------------------
[Fonte de alimentação](https://pt.wikipedia.org/wiki/Fonte_de_alimenta%C3%A7%C3%A3o) | Prover energia ao circuito
[Transformador](https://pt.wikipedia.org/wiki/Transformador) | Tratar a energia para o circuito
[Diodo](https://pt.wikipedia.org/wiki/Diodo_semicondutor) | Fazer com que a corrente flua num sentido só
[Ponte de diodos](https://pt.wikipedia.org/wiki/Retificador_de_onda_completa#Retificador_em_ponte) | Tratar o direcionamento da energia
[Capacitor](https://pt.wikipedia.org/wiki/Capacitor) | Armazenar quantidades de energia
[Resistor](https://pt.wikipedia.org/wiki/Resistor) | Limitar a corrente num circuito
[Diodo Zener](https://pt.wikipedia.org/wiki/Diodo_Zener) | Regula a tensão
[Potenciômetro](https://pt.wikipedia.org/wiki/Potenci%C3%B4metro) | "Divide" a tensão num circuito
[Transistor](https://pt.wikipedia.org/wiki/Trans%C3%ADstor) | "Amplificar" / barrar a corrente

## Produções

1. Aplicamos cálculos referentes à Fonte de Tensão de Onda Completa (sem regulação) com base no livro base da disciplina. Para facilitar, fizemos um compilado num [código em C](calculator.c). Dele, partindo de uma saída esperada de 25V (referente ao transformador) e 0,11A (suficiente para o circuito), combinadas a um ripple de 2,5V extraímos:

* A relação do transformador (0,1534);
* As tensões de pico (179V no primário e 27V no secundário);
* O capacitor ideal (> 314µF).
  
2. Construímos o projeto na ferramenta online Falstad: [teste o circuito no Falstad clicando aqui](http://tinyurl.com/ybr8kftz).


3. Elaboramos uma lista de componentes no Baú da Eletrônica (e adaptamos o projeto no Falstad).


4. O circuito completo está explicado em vídeo: [acesse-o no YouTube clicando aqui](https://youtu.be/U4WBlMqQBTg).

5. Elaboramos o projeto no Eagle (PCB e Esquemático) para impressão da placa. Os arquivos estão nomeados com "fonte-de-tensao" na raiz desta página.

## Circuito no Falstad

Como base para o projeto, construímos o seguinte circuito:

<div align="center">
<p float="left">
  <img src="/imagem-falstad.png" width="900" />
</p>
</div>

[Acesse o link do Falstad para poder ver e editar a simulação](http://tinyurl.com/ybr8kftz).

## Componentes do circuito

*Clique no nome do elemento para acessá-lo na loja escolhida (Baú da Eletrônica).*

Nome | Especificação básica | Justificativa | Valor
:----:|:-------------------:|:-------------:|:------:
[Transformador](https://www.baudaeletronica.com.br/transformador-trafo-12v-12v-500ma-110-220vac.html) | Entrada: 127V/220V / Saída: 12V+12V 500mA | Custo baixo e reusabilidade | R$22,23
[Ponte de Diodos](https://www.baudaeletronica.com.br/ponte-retificadora-kbpc1010.html) ¹ | 10A / 1000V | Suficiente para a corrente na ponte (aproximadamente 1,3A) | R$3,79 
[Capacitor](https://www.baudaeletronica.com.br/capacitor-eletrolitico-330uf-100v.html) ¹ | 330µF / 100V | Suficiente para suportar a entrada (~27V e 1,3A) e prover energia regulada para o circuito | R$3,32
[Resistor (1)](https://www.baudaeletronica.com.br/resistor-5k6-5-1-4w.html) | 5.6kΩ | Mantém a corrente sobre o Zener menor que 1mA e maior que 0,25mA (corrente mínima, Izk) | R$0,08
[Diodo Zener](https://www.baudaeletronica.com.br/diodo-zener-1n4743-13v-1w.html) | 13V / 1W | "Corta" a tensão a 13V | R$0,20
[Potenciômetro](https://www.baudaeletronica.com.br/potenciometro-linear-de-10k-10000.html) | 10kΩ | Mantém a tensão entre 0V e 12V | R$1,46
[Resistor (2)](https://www.baudaeletronica.com.br/resistor-5k6-5-1-4w.html) | 5.6kΩ | Adapta o potenciômetro e mantém a tensão de 3V a 12V | R$0,08
[Transistor](https://www.baudaeletronica.com.br/transistor-npn-2n3904.html) ¹ | Corrente máxima no coletor de 200mA e tensão máxima do coletor 40V | Suporta os 25V no coletor e tem mínimo de 0,25mA na base | R$0,17

*¹ Os componentes marcados têm características superiores às necessárias, mas por razões de disponibilidade na loja escolhida, foram selecionados.*

## Esquemático do circuito no Eagle

O primeiro passo para a construção no Eagle se deu pela construção do Esquemático, com exceção do transformador, por indisponibilidade, e foi substituído por conexões de entrada e saída. Quanto às peças utilizadas, selecionamos as mais próximas às listadas para compra no projeto, sendo a Ponte de Diodos e o Transistor NPN representações exatas, o Diodo Zener tendo dimensões idênticas ao selecionado e os demais componentes com o mesmo formato e dimensões muito próximas. Os arquivos estão nomeados utilizados como "fonte-de-tensao" na raiz desta página.

A representação da Ponte de Diodos KBPC1010 é customizada, de autoria de SamacSys.

<div align="center">
<p float="left">
  <img src="/imagem-eagle-esquematico.png" width="900" />
</p>
</div>

## PCB do circuito no Eagle

A partir do Esquemático, por fim, construímos o PCB para a impressão do circuito.

<div align="center">
<p float="left">
  <img src="/imagem-eagle-pcb.png" width="900" />
</p>
</div>

## Informações úteis

Caso queira construir este projeto, recomendamos, além dos links já disponibilizados, que

1. [Acesse a página da disciplina no GitLab](https://gitlab.com/simoesusp/disciplinas/-/tree/master/SSC0180-Eletronica-para-Computacao);

2. [Leia o livro base da disciplina](https://www.amazon.com.br/Eletr%C3%B4nica-B%C3%A1sica-Computa%C3%A7%C3%A3o-Annibal-Junior/dp/8521616996)

## Autoria

[Matheus Henrique de C. Pinto](https://github.com/cerqueiramatheus) n° USP: 11911104.


[Pedro Lucas M. de Castro](https://github.com/pedrolmcastro) n° USP: 11795784.
