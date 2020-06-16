# Fonte de Tensão

Projeto de uma fonte de tensão realizada para a disciplina de [Eletrônica para Computação](https://uspdigital.usp.br/jupiterweb/obterDisciplina?sgldis=SSC0180&codcur=55041&codhab=0) do curso de Ciências de Computação do ICMC-USP, ministrada por Eduardo Valle Simões.

## Especificações

> Construir uma fonte de tensão regulada, ajustável, com onda completa, que receba 127V e tenha como saída de 3V até 12V, fornecendo 100mA a 12V.

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

## Foto do Circuito

<div align="center">
<p float="left">
  <img src="/image_agora_vai.png" width="900" />
</p>
</div>


## Explicações

Construímos o projeto no Falstad, ferramenta online. [Teste o circuito no Falstad clicando aqui](http://tinyurl.com/y7pqhdzm).


O circuito completo está explicado em vídeo. [Acesse o vídeo no YouTube clicando aqui](https://youtu.be/U4WBlMqQBTg).

## Componentes do circuito

*Clique no nome do elemento para acessar a loja.*

Nome | Especificação básica | Justificativa | Valor
:----:|:-------------------:|:-------------:|:------:
[Transformador](https://www.baudaeletronica.com.br/transformador-trafo-12v-12v-500ma-110-220vac.html) | Entrada: 127V/220V / Saída: 12V+12V 500mA | Custo baixo e reusabilidade | R$22,23
[Diodo (4x)](https://www.baudaeletronica.com.br/diodo-1n5404.html) | 3A / 400V | Suficiente para a corrente na ponte | R$1,44 
[Capacitor](https://www.baudaeletronica.com.br/capacitor-eletrolitico-330uf-100v.html) | 330uf / 100V | Suficiente para suportar a entrada e armazenar a energia | R$3,32
[Resistor (1)](https://www.baudaeletronica.com.br/resistor-2k2-5-1-4w.html) | 2.2k | Mantém a corrente sobre o Zener menor que 3mA | R$0,08
[Diodo Zener](https://www.baudaeletronica.com.br/diodo-zener-1n4743-13v-1w.html) | 13V / 1W | "Corta" a tensão a 13V | R$0,20
[Potenciômetro](https://www.baudaeletronica.com.br/potenciometro-linear-de-10k-10000.html) | 10k | Mantém a tensão entre 0V e 12V | R$1,46
[Resistor (2)](https://www.baudaeletronica.com.br/resistor-5k6-5-1-4w.html) | 5.6k | Adapta o potenciômetro para 5.6k a 10k (e mantém a tensão de 3V a 12V) | R$0,08
[Transistor](https://www.baudaeletronica.com.br/transistor-npn-2n3904.html) | Corrente máxima no coletor de 200mA e tensão máxima do coletor 40V | Suporta os 25V no coletor e tem mínimo de 0,25mA na base | R$0,17

## Autoria

[Matheus Henrique de C. Pinto](https://github.com/cerqueiramatheus) n° USP: 11911104.


[Pedro Lucas M. de Castro](https://github.com/pedrolmcastro) n° USP: 11795784.
