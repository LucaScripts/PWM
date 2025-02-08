# PWM

## Atividade: Controle de servomotor por PWM

Com o emprego do módulo PWM (do inglês, Pulse Width Modulation), presente no microcontrolador RP2040, projete um sistema com a ferramenta Pico SDK para simular o controle do ângulo de um servomotor. Esta simulação contemplará o motor micro servo padrão, presente no simulador de eletrônica online Wokwi. Para condução desta prática, será necessário simular os componentes listados abaixo. A configuração sugerida está presente na Figura 1.

1. Microcontrolador Raspberry Pi Pico W.
2. Servomotor – motor micro servo padrão – Wokwi.

Figura 1 – Simulação sugerida no Wokwi para esta atividade. Obs.: Não será necessária a implementação de um circuito de interface entre o Raspberry Pi Pico W e o servomotor, pois esta prática está restrita à componentes simulados. O vídeo associado a esta simulação pode ser obtido no link a seguir: [Vídeo da Simulação](#)

Fonte: autor

## Requisitos para a realização desta atividade

1. Considerando a GPIO 22, defina a sua frequência de PWM para, aproximadamente, 50Hz – período de 20ms. (20% da nota)
2. Defina o ciclo ativo do módulo PWM para 2.400µs (microssegundos) – Ciclo de Trabalho (Duty Cycle) de 0,12%. Isto ajustará a flange (braço) do servomotor para a posição de, aproximadamente, 180 graus. Aguarde 05 segundos nesta posição. (10% da nota)
3. Defina o ciclo ativo do módulo PWM para 1.470µs (microssegundos) – Ciclo de Trabalho (Duty Cycle) de 0,0735%. Isto ajustará a flange do servomotor para a posição de, aproximadamente, 90 graus. Aguarde 05 segundos nesta posição. (10% da nota)
4. Defina o ciclo ativo do módulo PWM para 500µs (microssegundos) – Ciclo de Trabalho (Duty Cycle) de 0,025%. Isto ajustará a flange do servomotor para a posição de, aproximadamente, 0 graus. Aguarde 05 segundos nesta posição. (10% da nota)
5. Após a realização das proposições anteriores, crie uma rotina para movimentação periódica do braço do servomotor entre os ângulos de 0 e 180 graus. Obs.: a movimentação da flange deve ser suave, recomenda-se o incremento de ciclo ativo de ±5µs, com um atraso de ajuste de 10ms. (35% da nota)
6. Com o emprego da Ferramenta Educacional BitDogLab, faça um experimento com o código deste exercício utilizando o LED RGB – GPIO 12. O que o discente observou no comportamento da iluminação do referido LED? (15% da nota)

## Passos necessários para este projeto

- Deve-se utilizar o ambiente de desenvolvimento VS Code em todas as duas atividades;
- Os códigos devem ser escritos na linguagem C, juntamente com os recursos do Kit de Desenvolvimento de Software Pico SDK;
- O simulador Wokwi deve estar integrado ao ambiente de desenvolvimento VS Code;
- Deve-se criar um repositório no github para o versionamento, registro e submissão dessa atividade.

## Orientação para o desenvolvimento da tarefa

- Esta tarefa é individual.
- Deve-se implementar testes básicos para garantir que cada recurso esteja funcionando corretamente.
- É necessário adicionar um arquivo README.md com instruções de uso do programa.
- Como etapa final, o discente irá produzir um vídeo ensaio, com duração máxima de 3 minutos, apresentando a solução trabalhada e os resultados obtidos nos experimentos. O link deste vídeo deve estar presente no arquivo README.md do repositório do github.
