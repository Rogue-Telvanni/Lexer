        // AFDs definidos
        const AFDs = {
            ID: {
                states: ['S', 'I'],
                initialState: 'S',
                acceptingStates: ['I'],
                transitions: {
                    'S': { 'letter|_': 'I' },
                    'I': { 'letter|digit|_': 'I' }
                },
                description: 'Reconhece identificadores que começam com letra ou underscore, seguidos de letras, dígitos ou underscores.'
            },
            INT: {
                states: ['q0', 'q1'],
                initialState: 'q0',
                acceptingStates: ['q1'],
                transitions: {
                    'q0': { 'digit': 'q1' },
                    'q1': { 'digit': 'q1' }
                },
                description: 'Reconhece sequências de um ou mais dígitos decimais.'
            },
            REAL: {
                states: ['q0', 'q1', 'q2', 'q3'],
                initialState: 'q0',
                acceptingStates: ['q3'],
                transitions: {
                    'q0': { 'digit': 'q1' },
                    'q1': { 'digit': 'q1', '.': 'q2' },
                    'q2': { 'digit': 'q3' },
                    'q3': { 'digit': 'q3' }
                },
                description: 'Reconhece números com ponto decimal (formato: dígitos.dígitos).'
            }
        };
        
        // Inicialização
        document.addEventListener('DOMContentLoaded', function () {
            loadReferenceTable();
            updateUI();
            loadAFD('ID'); // Carrega AFD padrão
            initializeAchievements();
        });
        
        // Carrega a tabela de referência
        function loadReferenceTable() {
            const tbody = document.getElementById('tableBody');
            tbody.innerHTML = referenceData.map((item, index) => `
                <tr class="hover:bg-gray-50 transition-colors cursor-pointer" onclick="highlightTableRow(${index})">
                    <td class="p-4 font-mono font-bold text-indigo-600">${item.token}</td>
                    <td class="p-4">${item.meaning}</td>
                    <td class="p-4 font-mono text-sm bg-gray-100 rounded">${item.er}</td>
                    <td class="p-4 font-mono text-sm text-gray-600">${item.examples}</td>
                </tr>
            `).join('');
        }
        
        function toggleTableMode() {
            const button = document.getElementById('tableMode');
            const table = document.getElementById('referenceTable');

            if (button.textContent === 'Modo Exploração') {
                button.innerHTML = '<i class="fas fa-eye-slash mr-2"></i>Modo Estudo';
                // Adicionar funcionalidades de exploração
            } else {
                button.innerHTML = '<i class="fas fa-eye mr-2"></i>Modo Exploração';
            }
        }
        
        function isEven(value)
        {
            return value%2 == 0;
        }