import java.util.*;

class guesser {
    int guessNum;
    Scanner sc = new Scanner(System.in);

    public int guessNumber() {
        System.out.println("Guesser kindly guess the number.");
        guessNum = sc.nextInt();
        return guessNum;
    }
}

class player {
    int pguessNum;
    Scanner sc = new Scanner(System.in);

    public int guessNumber() {
        System.out.println("Player kindly guess the number");
        pguessNum = sc.nextInt();
        return pguessNum;
    }
}

class umpire {
    int numFromGuesser;
    int numFromPlayer1;
    int numFromPlayer2;
    int numFromPlayer3;

    public void collectNumFromGuesser() {
        guesser g = new guesser();
        numFromGuesser = g.guessNumber();
    }

    public void collectNumFromPlayer() {
        player p1 = new player();
        player p2 = new player();
        player p3 = new player();

        numFromPlayer1 = p1.guessNumber();
        numFromPlayer2 = p2.guessNumber();
        numFromPlayer3 = p3.guessNumber();
    }

    public void compare() {
        if (numFromGuesser == numFromPlayer1) {
            if (numFromGuesser == numFromPlayer2 && numFromGuesser == numFromPlayer3) {
                System.out.println("Game tied all 3 players guessed the name correctly");
            } else if (numFromGuesser == numFromPlayer2) {
                System.out.println("Player 1 and Player 2 won the game");
            } else if (numFromGuesser == numFromPlayer3) {
                System.out.println("Player 1 and Player 3 won the game");
            } else
                System.out.println("Player 1 won the game");
        }

        else if (numFromGuesser == numFromPlayer2) {
            if (numFromGuesser == numFromPlayer3) {
                System.out.println("Player 2 and Player 3 won the game");
            } else
                System.out.println("Player 2 won the game");
        }

        else if (numFromGuesser == numFromPlayer3) {
            System.out.println("Player 3 won the game");
        } else {
            System.out.println("Game lost! try again.");
        }
    }
}

public class gusserGame {
    public static void main(String args[]) {
        umpire u = new umpire();
        u.collectNumFromGuesser();
        u.collectNumFromPlayer();
        u.compare();
    }
}
