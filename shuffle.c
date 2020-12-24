#Cracking the coding interview solution: Uniformly shuffle a deck of 52 cards

public static void shuffleArray(int[] cards) {
  int temp, index;
  for (int i = 0; i < cards.length; i++) {
    index = (int) (Math.random() * (cards.length - i)) + i;
    temp = cards[i];
    cards[i] = cards[index];
    cards[index] = temp;
  }
}
