def elementos_sao_unicos(vetor):
    return len(vetor) == len(set(vetor))


# Exemplo de uso com elementos iventados, a questão não deu
vetor = [1, 2, 3, 4, 5]  # teste com elementos únicos
if elementos_sao_unicos(vetor):
    print("Todos os elementos são únicos.")
else:
    print("Existem elementos repetidos.")