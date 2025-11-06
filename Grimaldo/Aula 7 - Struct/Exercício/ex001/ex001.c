Encontre o erro nessas declarações em C
a) struct point ( double x, y )
Resposta:
    ❌ Erros:
        - Usou parênteses ( ) em vez de chaves { }.
        - Separou os membros por vírgula, mas cada membro deve ter seu tipo completo e ponto e vírgula.
    ✅ Correção: struct point { double x; double y; };

b) struct point { double x, double y };
Resposta:
    ❌ Erros:
        - Dentro de uma struct, não se usa vírgula entre membros de tipos diferentes.
        - Cada membro precisa ter seu tipo e um ;.
        - Faltou o ponto e vírgula final da struct.
    ✅ Correção:struct point { double x; double y; };

c) struct point { double x; double y }
Resposta:
    ❌ Erro:
        - Faltou o ponto e vírgula final que fecha a declaração da struct.
        - (Isso é um erro de sintaxe comum.)
    ✅ Correção: struct point { double x; double y; };

d) struct point { double x; double y; };
Resposta: Sem erro

e) struct point { double x; double y; }
Resposta:
    ❌ Erro:
        - Faltou o ponto e vírgula (;) após a chave de fechamento } da definição.
    ✅ Correção:struct point { double x; double y; };
