class LudoGame {
    constructor() {
        this.players = ['red', 'blue', 'yellow', 'green'];
        this.currentPlayerIndex = 0;
        this.gameState = {
            red: [-1, -1, -1, -1],
            blue: [-1, -1, -1, -1],
            yellow: [-1, -1, -1, -1],
            green: [-1, -1, -1, -1]
        };
        this.diceValue = 1;
        this.canMove = false;
        this.pathPositions = [];
        this.playerStartPositions = { red: 0, blue: 13, yellow: 26, green: 39 };
        
        this.init();
    }

    init() {
        this.createBoard();
        this.bindEvents();
        this.updateCurrentPlayer();
        console.log('Ludo game initialized successfully!');
    }

    createBoard() {
        this.createMainPath();
    }

    createMainPath() {
        const pathContainer = document.getElementById('path');
        
        // Create proper Ludo cross-shaped path with correct coordinates
        const pathCoords = this.generateCorrectLudoPath();
        
        pathCoords.forEach((coord, index) => {
            const square = document.createElement('div');
            square.className = 'path-square';
            
            // Mark safe squares (star positions in traditional Ludo)
            if ([1, 9, 14, 22, 27, 35, 40, 48].includes(index)) {
                square.classList.add('safe-square');
            }
            
            // Mark starting squares for each player
            if ([0, 13, 26, 39].includes(index)) {
                square.classList.add('start-square');
            }
            
            square.style.left = coord.x + 'px';
            square.style.top = coord.y + 'px';
            square.dataset.position = index;
            square.textContent = index;
            
            pathContainer.appendChild(square);
            this.pathPositions.push({element: square, x: coord.x, y: coord.y});
        });
    }

    generateCorrectLudoPath() {
        const coords = [];
        const squareSize = 40;
        
        // RED STARTING SECTION (Bottom left) - Positions 0-5
        // Horizontal row moving right
        coords.push({x: 240, y: 520}); // 0 - Red start
        coords.push({x: 280, y: 520}); // 1 - Safe square
        coords.push({x: 320, y: 520}); // 2
        coords.push({x: 360, y: 520}); // 3
        coords.push({x: 400, y: 520}); // 4
        coords.push({x: 440, y: 520}); // 5
        
        // Moving up the right column - Positions 6-12
        coords.push({x: 440, y: 480}); // 6
        coords.push({x: 440, y: 440}); // 7
        coords.push({x: 440, y: 400}); // 8
        coords.push({x: 440, y: 360}); // 9 - Safe square
        coords.push({x: 440, y: 320}); // 10
        coords.push({x: 440, y: 280}); // 11
        coords.push({x: 440, y: 240}); // 12
        
        // BLUE STARTING SECTION (Top right) - Positions 13-18
        // Vertical column going up
        coords.push({x: 480, y: 240}); // 13 - Blue start
        coords.push({x: 480, y: 200}); // 14 - Safe square
        coords.push({x: 480, y: 160}); // 15
        coords.push({x: 480, y: 120}); // 16
        coords.push({x: 480, y: 80}); // 17
        coords.push({x: 480, y: 40}); // 18
        
        // Moving left across top - Positions 19-25
        coords.push({x: 440, y: 40}); // 19
        coords.push({x: 400, y: 40}); // 20
        coords.push({x: 360, y: 40}); // 21
        coords.push({x: 320, y: 40}); // 22 - Safe square
        coords.push({x: 280, y: 40}); // 23
        coords.push({x: 240, y: 40}); // 24
        coords.push({x: 200, y: 40}); // 25
        
        // YELLOW STARTING SECTION (Top left) - Positions 26-31
        // Vertical column going down
        coords.push({x: 160, y: 40}); // 26 - Yellow start
        coords.push({x: 160, y: 80}); // 27 - Safe square
        coords.push({x: 160, y: 120}); // 28
        coords.push({x: 160, y: 160}); // 29
        coords.push({x: 160, y: 200}); // 30
        coords.push({x: 160, y: 240}); // 31
        
        // Moving down the left column - Positions 32-38
        coords.push({x: 120, y: 240}); // 32
        coords.push({x: 120, y: 280}); // 33
        coords.push({x: 120, y: 320}); // 34
        coords.push({x: 120, y: 360}); // 35 - Safe square
        coords.push({x: 120, y: 400}); // 36
        coords.push({x: 120, y: 440}); // 37
        coords.push({x: 120, y: 480}); // 38
        
        // GREEN STARTING SECTION (Bottom left) - Positions 39-44
        // Horizontal row moving right
        coords.push({x: 160, y: 520}); // 39 - Green start
        coords.push({x: 160, y: 480}); // 40 - Safe square
        coords.push({x: 160, y: 440}); // 41
        coords.push({x: 160, y: 400}); // 42
        coords.push({x: 160, y: 360}); // 43
        coords.push({x: 160, y: 320}); // 44
        
        // Final approach to center - Positions 45-51
        coords.push({x: 160, y: 280}); // 45
        coords.push({x: 200, y: 280}); // 46
        coords.push({x: 200, y: 240}); // 47
        coords.push({x: 200, y: 200}); // 48 - Safe square
        coords.push({x: 200, y: 160}); // 49
        coords.push({x: 200, y: 120}); // 50
        coords.push({x: 200, y: 80}); // 51
        
        return coords;
    }

    bindEvents() {
        document.getElementById('roll-dice').addEventListener('click', () => this.rollDice());
        
        document.querySelectorAll('.piece').forEach(piece => {
            piece.addEventListener('click', (e) => this.movePiece(e.target));
        });
    }

    rollDice() {
        if (this.canMove) {
            console.log('Please move a piece first!');
            return;
        }
        
        const diceElement = document.getElementById('dice');
        const rollButton = document.getElementById('roll-dice');
        
        rollButton.disabled = true;
        
        // Animate dice roll
        let rolls = 0;
        const rollInterval = setInterval(() => {
            this.diceValue = Math.floor(Math.random() * 6) + 1;
            diceElement.textContent = this.diceValue;
            rolls++;
            
            if (rolls > 10) {
                clearInterval(rollInterval);
                console.log(`${this.players[this.currentPlayerIndex]} rolled: ${this.diceValue}`);
                this.canMove = true;
                this.highlightMovablePieces();
                
                // Auto next turn if no valid moves
                setTimeout(() => {
                    if (!this.hasMovablePieces()) {
                        console.log('No valid moves available');
                        this.nextTurn();
                    }
                }, 2000);
            }
        }, 100);
    }

    highlightMovablePieces() {
        const currentPlayer = this.players[this.currentPlayerIndex];
        const pieces = document.querySelectorAll(`.${currentPlayer}-piece`);
        
        // Clear all highlights
        document.querySelectorAll('.piece').forEach(p => p.classList.remove('active'));
        
        let movablePieces = 0;
        pieces.forEach((piece, index) => {
            if (this.canMovePiece(currentPlayer, index)) {
                piece.classList.add('active');
                movablePieces++;
            }
        });
        
        console.log(`${currentPlayer} has ${movablePieces} movable pieces`);
    }

    canMovePiece(player, pieceIndex) {
        const position = this.gameState[player][pieceIndex];
        
        // Can only leave home with a 6
        if (position === -1) {
            return this.diceValue === 6;
        }
        
        // Can move if on board and won't exceed path length
        if (position >= 0) {
            const newPosition = position + this.diceValue;
            return newPosition < 52; // 52 squares total
        }
        
        return false;
    }

    hasMovablePieces() {
        const currentPlayer = this.players[this.currentPlayerIndex];
        for (let i = 0; i < 4; i++) {
            if (this.canMovePiece(currentPlayer, i)) {
                return true;
            }
        }
        return false;
    }

    movePiece(pieceElement) {
        if (!this.canMove || !pieceElement.classList.contains('active')) {
            console.log('Cannot move this piece');
            return;
        }
        
        const player = pieceElement.dataset.player;
        const pieceIndex = parseInt(pieceElement.dataset.piece);
        
        if (player !== this.players[this.currentPlayerIndex]) {
            console.log('Not your turn!');
            return;
        }
        
        const currentPosition = this.gameState[player][pieceIndex];
        let newPosition;
        
        if (currentPosition === -1) {
            // Move from home to starting position
            newPosition = 0; // All players start counting from 0
            console.log(`${player} piece ${pieceIndex} enters the board`);
        } else {
            // Move forward
            newPosition = currentPosition + this.diceValue;
            console.log(`${player} piece ${pieceIndex} moves from ${currentPosition} to ${newPosition}`);
        }
        
        // Update game state
        this.gameState[player][pieceIndex] = newPosition;
        
        // Move piece visually
        this.updatePiecePosition(pieceElement, player, newPosition);
        
        // Check for captures
        this.checkCapture(player, newPosition, pieceIndex);
        
        // Clear highlights
        document.querySelectorAll('.piece').forEach(p => p.classList.remove('active'));
        
        this.canMove = false;
        
        // Next turn (unless rolled 6)
        if (this.diceValue === 6) {
            console.log(`${player} rolled 6 - gets another turn!`);
            document.getElementById('roll-dice').disabled = false;
        } else {
            setTimeout(() => this.nextTurn(), 1000);
        }
    }

    updatePiecePosition(pieceElement, player, position) {
        if (position === -1) {
            // Back to home
            pieceElement.classList.remove('on-board');
            pieceElement.style.position = '';
            pieceElement.style.left = '';
            pieceElement.style.top = '';
            pieceElement.style.zIndex = '';
            return;
        }
        
        // Calculate actual board position based on player's starting point
        let actualPosition = (this.playerStartPositions[player] + position) % 52;
        
        if (actualPosition >= 0 && actualPosition < this.pathPositions.length) {
            const pathPos = this.pathPositions[actualPosition];
            
            pieceElement.classList.add('on-board');
            pieceElement.style.position = 'absolute';
            pieceElement.style.left = pathPos.x + 'px';
            pieceElement.style.top = pathPos.y + 'px';
            pieceElement.style.zIndex = '10';
        }
    }

    checkCapture(currentPlayer, position, pieceIndex) {
        // Don't capture on safe squares
        const safeSquares = [1, 9, 14, 22, 27, 35, 40, 48];
        const actualPos = (this.playerStartPositions[currentPlayer] + position) % 52;
        
        if (safeSquares.includes(actualPos)) {
            console.log('Landed on safe square - no capture');
            return;
        }
        
        // Check for opponent pieces on same square
        this.players.forEach(player => {
            if (player === currentPlayer) return;
            
            this.gameState[player].forEach((piecePos, index) => {
                if (piecePos !== -1) {
                    const opponentActualPos = (this.playerStartPositions[player] + piecePos) % 52;
                    if (opponentActualPos === actualPos) {
                        // Capture!
                        console.log(`${currentPlayer} captured ${player} piece ${index}!`);
                        this.gameState[player][index] = -1;
                        const capturedPiece = document.querySelector(`[data-player="${player}"][data-piece="${index}"]`);
                        this.updatePiecePosition(capturedPiece, player, -1);
                    }
                }
            });
        });
    }

    nextTurn() {
        this.currentPlayerIndex = (this.currentPlayerIndex + 1) % this.players.length;
        this.updateCurrentPlayer();
        document.getElementById('roll-dice').disabled = false;
    }

    updateCurrentPlayer() {
        const currentPlayer = this.players[this.currentPlayerIndex];
        const playerElement = document.getElementById('current-player');
        playerElement.textContent = currentPlayer.charAt(0).toUpperCase() + currentPlayer.slice(1);
        playerElement.style.color = currentPlayer;
    }
}

// Initialize game when page loads
document.addEventListener('DOMContentLoaded', () => {
    const game = new LudoGame();
    window.ludoGame = game; // For debugging
});
