int generateRandomNumber() {
    srand(time(NULL)); // seed with current time
    int randomNumber = rand() % 10 + 1; // get a random number between 1 and 10
    return randomNumber;
}
