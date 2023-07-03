#Get number of coins randomly
import random
n_coins = random.randint(20,100 )
print("Number = ", + n_coins)                                  # print number of coins
found= True

while found:
    first_playercoins = int(input("first player enter your coins: "))  #number of coin first player

    while (first_playercoins >= n_coins ):                                 #if what the first player takes is greater than the number of coins let him withdraw again
         first_playercoins = int(input("first player enter another number of coins: "))
    n_coins -= first_playercoins
    print("Remaining coins = ", n_coins)                                    #subtracts the number of coins from the one taken by the first player and print rest
    found=False

while n_coins != 0:

    second_playercoins = int(input("second player enter your coins: "))         #number of coin second player

    # the second player enters the number of coins not more than twice what the first player will enter and it is not equal to the number of coins
    while (second_playercoins >= n_coins or second_playercoins >= 2*first_playercoins):
        second_playercoins = int(input("second player enter another number of coins: "))
    n_coins -= second_playercoins
    print("Remaining coins = ", n_coins)
    if (n_coins== 1):                                                       #if number of coins is equal to one print that the one who won
        print("first player won")
        break

    first_playercoins = int(input("first player enter your coins: "))

    while (first_playercoins >= n_coins or first_playercoins >= 2*second_playercoins):
        first_playercoins = int(input("enter another number of coins: "))
    n_coins -= first_playercoins
    print("Remaining coins = ", n_coins)
    if (n_coins == 1):                    #if number of coins is equal to one print that the one who won
        print("second player won")
        break