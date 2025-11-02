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