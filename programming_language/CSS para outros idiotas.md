# CSS para outros idiotas

CSS é a abreviação de Cascading Syles Sheets é uma linguagem utlizada para estilizar páginas web, ou seja, tudo aquilo que visualmente o usúario tem acesso a utilizar e visualizar só que com algum tipo de estilização. Portanto, ele trabalha juntamente com o HTML para criar experiências completas para o cliente, elaborando todo a questão visual do nosso web site.

Utilizaremos essa tag dentro do head para linkar nosso arquivo CSS externo ao HTML
```html
<link rel="stylesheet" href="style.css">
```

Teremos outros métodos de acrescentar o CSS ao nosso arquivo HTML, sendo eles: Externo, que ja foi demonstrado anteriormente, o Interno e o Inline.

__Interno__

```html
<!DOCTYPE html>
<html lang="pt-br">
<head>
  <meta charset="UTF-8">
  <title>Exemplo de CSS Interno</title>
  <style> <!--Aqui criaremos um local para colocarmos nosso CSS-->
    body {
      background-color: #ddd;
    }
    h1 {
      color: green;
    }
  </style>
</head>
<body>
  <h1>Olá, Mundo!</h1>
</body>
</html>
```

__Inline__

```html
<!DOCTYPE html>
<html lang="pt-br">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Exemplo de CSS Inline</title>
</head>
<body style="background-color: #ddd;">
  <h1 style="color: green;">Olá, Mundo!</h1>
</body>
</html>
```
É muito importante ressaltar que esse outros métodos, ou seja, interno e inline não são recomendáveis e nem utlizados em projetos, devido a poluição do nosso código HTML, tal quanto a incapacitação da reutilização das nossas classes. Argumento que será apresetando melhor a seguir:

## Cascading

A primeira coisa que temos que formar em nossas mentes sobre o CSS, é acerca da sua hierarquia, que se compõem por uma estrutura em "cascata", onde as regras mais específicas prevalecem sobre as mais gerais, ou seja, tudo aquilo que você é mais especificio, que demonstra mais informações, se torna mais importante, consequentimente é aplicado no nosso site. Podemos demonstrar isso da seguinte maneira:

```html
<div class="welcome">
    <h2>Bem vindo(a) ao meu site</h2>
</div>
    <h2>É um prazer recebe-lo(a) aqui!</h2>

<div id="list">
    <ol>
        <li>Item 1</li>
        <li>Item 2</li>
    </ol>
</div>
```

```css
/* Seletor Universal */
* {
    background-color: black;
}

/* Estiliza todas as tags <h2> */
h2 { 
  color: blue; 
}

/* Estiliza elementos com a classe "welcome" */
.welcome { 
  color: red; 
}

/* Estiliza o elemento com o ID "list" */
#list { 
  color: green;
}
```

Acima temos uma parte de um arquivo HTML e uma ideia básica de estilização em CSS, respectivamente. Agora, para revisar a ideia de hierarquia de cascata, podemos adicionar algumas propriedades.

```css
h2 .welcome{
    color: grey
}

.welcome {
    color: red;
}
```

Nessa parte do código, especificamentos que a propriedade "h2" com a class="welcome" terá o valor de grey, ou seja, caso estivessemos em um projeto real, aquele que foi mais especifíco, que demonstrou maior importância será represetado no final.

Produtos | Uso
--- | ---
Seletores:  | Tags do HTML 
Propriedades: | Estilização do CSS
Valores: | Estilização do CSS

</br>

```css
selector{
    property: valor;
}
```


## Seletores

## Seletores de pseudo-elementos

## !important