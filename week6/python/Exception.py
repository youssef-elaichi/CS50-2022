try:
    number1 = int(input("number1:"))
    number2 = int(input("number2:"))
    print(number1 + number2)
except:   #  fi halat matha9a9ch dak chi li kayn f try ghadi t5dam except:
    print("you maste enter a number in place of string or same thing else")
    exit()  # n9sdro n9olo hadi hia return 1  hitach kathbas lina programe

#blan o ma fih howa ila kan chi 5ataa fi smia ghadi ymchi god except   

try:
    number1 = int(input("number1:"))
    number2 = int(input("number2:"))
    number3 = int(input("number3:"))

    print(number1 + number2)
except ValueError:  # dak chi 3lach darna hana ValueError  bach ijbad lina ghir machkil dyole value bhal ila kana dyarin string o mosta5dim da5al int 
    print("Value Error")
    exit()

try:
    number1 = int(input("number1:"))
    number2 = int(input("number2:"))
    number3 = int(input("number3:"))
    print(number1 + number2)
except NameError:  # hna 3awtani katjbad ghir name error
    print("")
    exit()

