// ek piece is there ,x,0,
// board of n*n -- we will make code extensible
// players
// playing piece  {
// 	pieceType;
// 	playeingpiece(pieceType);
// } -- childre piece(x),piece(o)
// piece (will pass o to parent);
// board -- size -- int size,playingpiece[][] board has pieces
// player -- string name,player piece defined

// -- enum -- pieceType { x,o};



#include <bits/stdc++.h>
using namespace std;

class PieceType {
public:
	char c;
	PieceType(char ch) {c = ch;}
};

class Piece {
public:
	PieceType type;
	Piece(PieceType type): type(type) {}
};

class Board {
private:
	int size;
	vector<vector<Piece>> board;
public:
	Board(int size): size(size) {
		board.resize(size, vector<Piece>(size, Piece(PieceType('-'))));
	}
	// is a valid move
	bool isValidMove(int row, int col)
	{
		if (row<0 or row >= size or col<0 or col >= size or board[row][col].type.c != '-') return false;
		return true;
	}

	// if the board is full
	bool isBoardFull() {
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (board[i][j].type.c == '-') return false;
			}
		}
		return true;
	}

	// how to make a move
	void makeMove(int row, int col, PieceType player)
	{
		if (isValidMove(row, col))
		{
			board[row][col] = Piece(player);
		}
		else
			cout << "Invalid Move" << endl;
	}

	void printBoard()
	{
		cout << "-------------" << endl;
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				cout << "| " << board[i][j].type.c << " ";
			}
			cout << "|" << endl;
			cout << "-------------" << endl;
		}
	}

	bool isWinner(PieceType player)
	{
		for (int i = 0; i < size; i++) {
			bool rowWin = true;
			bool colWin = true;
			for (int j = 0; j < size; j++)
			{
				if (board[i][j].type.c != player.c) rowWin = false;
				if (board[i][j].type.c != player.c) colWin = false;
			}
			if (rowWin || colWin) return true;
		}

		// checking for the diagonals
		bool dia1 = true;
		bool dia2 = true;
		for (int i = 0; i < size; i++)
		{
			if (board[i][i].type.c != player.c) dia1 = false;
			if (board[i][size - i - 1].type.c != player.c) dia2 = false;
		}
		if (dia1 or dia2) return true;
		return false;
	}
};

class Player {
public:
	PieceType type;
	Player(PieceType type): type(type) {}
};

int main()
{
	int n;
	cin >> n;
	PieceType empty('-');
	PieceType playerX('X');
	PieceType player0('0');
	// board [n][n]
	Board board(n);
	Player player1(playerX);
	Player player2(player0);

	Player currentPlayer = player1;
	while (!board.isBoardFull() and !board.isWinner(playerX) and !board.isWinner(player0))
	{
		board.printBoard();
		int row, col;
		cout << "Player " << currentPlayer.type.c << ", enter your move (row and column): ";
		cin >> row >> col;

		board.makeMove(row, col, currentPlayer.type);
		if (currentPlayer.type.c == playerX.c)
			currentPlayer = player2;
		else
			currentPlayer = player1;
	}

	board.printBoard();
	if (board.isWinner(playerX)) {
		cout << "Congratulations! Player X wins!" << endl;
	} else if (board.isWinner(player0)) {
		cout << "Congratulations! Player O wins!" << endl;
	} else {
		cout << "It's a draw!" << endl;
	}


	return 0;
}