# [Radar de Shows]

## teremos que criar um radar de shows que encontre a agenda de cada artista e seus horarios disponiveis.

**Projeto:** [Radar de Shows]
**Problema que resolve:** [Procurar a disponbilidade de cada artista]

## Integrantes

| Nome              | GitHub          |
| ----------------- | --------------- |
| [Arthur Prevedel] | [@prevedel2007] |
| [Davi Vieira]     | [@dvieiraaaa]   |
| [Warley Mendes]   | [@warley1137]   |

## arquitetura

```mermaid
flowchart TD
    A[Usuário acessa app] --> B[Digite artista ou cidade]
    B --> C[Buscar shows]
    C --> D{Resultados encontrados?}

    D -- Sim --> E[Listar eventos]
    E --> F[Ver detalhes do show]
    F --> G[Comprar ingresso]

    D -- Não --> H[Mostrar mensagem: nenhum show encontrado]
    H --> I[Sugerir artistas populares]

    E --> J[Filtros]
    J --> K[Data]
    J --> L[Local]
    J --> M[Preço]
```
