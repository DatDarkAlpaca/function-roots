# Function Roots
Function Roots é um programa capaz de encontrar a raíz de funções matemáticas utilizando os seguintes métodos:
* Método da Bisseção
* Método da Falsa Posição
* Método de Newton-Raphson
* Método da Secante

A função testada no código - escolhida anteriormente - é a seguinte:
$x^3-\sin(x)$
 
## Equipe
A equipe é composta pelos colaboradores deste repositório, e tem como orientadora a Profª. Neide Alves.
A conta dos participantes foram dispostas a seguir:
 * [Paulo Castro](https://github.com/DatDarkAlpaca)
 * [Felipe ....]()

# Instalação
## Pré-requisitos
Para executar o programa, pode-se utilizar a solução pré-configurada incluída no repositório com a IDE Visual Studio. 
As instruções de "building" utilizando essa IDE podem ser encontradas [aqui](## Execução - Visual Studio).
Você também pode executar o programa utilizando um compilador GCC. As instruções de compilação e linking estão disponíveis [aqui](## Execução - GCC). 

 * [Visual Studio Community 2022](https://visualstudio.microsoft.com/pt-br/vs/community/)
 * [MinGW - GCC](https://sourceforge.net/projects/mingw/)
 * [Git](https://git-scm.com/downloads)

## Download
A fim de acessar os arquivos do projeto, você deve primeiramente baixá-los. 
A opção mais adequada é cloná-lo utilizando o git. 
Entretanto, você também pode baixar o projeto clicando [aqui](https://github.com/DatDarkAlpaca/function-roots/archive/refs/heads/main.zip). 
Para clonar o repositório em sua máquina, utilize o seguinte comando:

```
git clone https://github.com/DatDarkAlpaca/function-roots
```

## Execução - Visual Studio
Após clonar/baixar o repositório e instalar o [Visual Studio](https://visualstudio.microsoft.com/pt-br/vs/community/), abra o arquivo `function-roots.sln`.
Você pode ajustar a diretiva de preprocessador TEST_MODE clicando no projeto localizado no explorador de solução com o botão direito, e pressionando `Propriedades`.
Neste menu, procure por `C/C++/Preprocessador`. Para ativar o modo de teste, adicione TEST_MODE às definições de preprocessador.

Finalmente, clique em `Depurador Local do Windows` para executar o projeto.

## Execução - GCC
Após clonar/baixar o repositório e instalar o compilador, execute o comando abaixo na pasta `src` dentro do repositório:

```
gcc Main.c -I. -o function-roots.exe && function-roots.exe
```

Você pode adicionar `-DTEST_MODE` antes de `-o` a fim de inicializar o programa com os testes pré-definidos.

## Licença
Este projeto está licenciado sob a [Licença Unlicense](https://unlicense.org) - consulte [LICENSE](LICENSE) para detalhes.
