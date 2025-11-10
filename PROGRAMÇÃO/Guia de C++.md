## Guia de C++

Este é um guia de estudos preparado por mim, com os materiais que a minha professora de Programação de computadores disponibilizou para a minha turma. Está é uma documentação de meus estudos e foi acurada por um iniciante, sempre confira informações importantes e se certifique de estudar com outros materiais de maior confiabilidade. 

### Materiais de referência 
- [Introdução a C++ (Profa Regiane Kawasaki)](introdução_cpp_kawasaki.pdf)
## Básico 
### Estrutura 
 Está é a estrutura básica de um programa qualquer em C++:

```
#include <iostream>
using namespace std;
int main () 
{
     return 0;
     }

```

#### Oque cada coisa significa ?

`#include <iostream>` --> Aqui se declara as bibliotecas que serão utilizadas no programa, essa demarcação é feita pelo comando `#include`no início do programa e a biblioteca, nesse caso a **iostream**, é posta entre os sinais de menor e maior : **<>**

`using namespace std;`--> O `std;`serve para dizer ao programa que tudo na biblioteca padrão de nomes reservados, a Standard= `std`, você estará utilizando. Caso você não use o `using namespace std; ` você terá que por `std::`antes de cada comando básico em C++, como cin e cout. Ou seja, com ele você pode escrever as palavras reservadas sem o prefixo `std::`

```
std::cout -> Você terá que escrever isso sempre se não usar o comando 
cout-> Mas usabdo ele, você pode simplesmente usar a palavra reservada que vai funcionar perfeitamente 
```

`int main ()`-> É aqui que seu programa começa a rodar de verdade, este comando identifica o início de seu programa, a seguir, você irar por todas as instruções dentro do par de chaves **{}**, para que seja tudo executado perfeitamente 

`return 0;`-> Este comando serve para sinalizar para o sistema operacional de que tudo dentro do código ocorreu bem e está tudo funcional, ele é utilizado praticamente sempre na função `main() `, mas também pode aparecer em outras funções. Alguns programas simples em C++ conseguem rodar tranquilamente sem que você deixe explícito o `return 0;`, isso por que nas versões mais recentes do C++ o compilador entende automaticamente que o `return 0 `está lá e roda o programa normalmente, somente em alguns casos onde o código é particularmente complexo que isso não funciona, mas como estamos no nível básico isso não nos convém agora. A principal razão pela qual é muito aconselhável usar o `return 0;` é por que isso é considerado uma boa prática, já que isso facilita a manutenção de um terceiro no seu código.  

##### Aqui vai um exemplo reunindo todos estes conceitos 

```
#include <iostream>
using namespace std;
int main()
{
cout<< "Olá mundo! Programar em C++ é melzinho na chupeta hehehe";
return 0;
}


```
